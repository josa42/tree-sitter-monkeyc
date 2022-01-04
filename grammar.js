module.exports = grammar({
  name: 'monkeyc',

  extras: $ => [
    $.comment,
    /\s|\\\r?\n/,
  ],

  supertypes: $ => [
    // $.statement,
    $.declaration,
    $.builtin_type,
    // $.primary_expression,
  ],

  inline: $ => [
    // $.if_statement,
    // $.string,
  ],

  rules: {
    program: $ => seq(
      repeat(choice(
        $.import_statement,
        $.declaration,
      ))
    ),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ),
    )),

    statement: $ => choice(
      $.if_statement,
      seq(/[a-zA-Z]+\([\S\s\n]*\)/, $.semicolon),
      seq(/var .+/, $.semicolon),
    ),

    // precedences: $ => [
    //   ['declaration', 'literal'],
    // ],

    import_statement: $ => seq(
      'using',
      $._import_source,
      optional(
        seq('as', field('alias', $.identifier)),
      ),
      $.semicolon
    ),

    _import_source: $ => field('source', $.fqn),
    _import_alias: $ => field('alias', $.identifier),
  
    _identifier: $ => token(/[a-zA-Z]+/),
    identifier: $ => token(/[a-zA-Z]+/),

    fqn: $ => seq(repeat(field('fqn_namespace', seq($._identifier, '.'))), field('fqn_name', $.identifier)),

    semicolon: $ => ';',

    class_heritage: $ => seq('extends', field('parent_class', $.fqn)),

    declaration: $ => choice(
      $.function_declaration,
      $.class_declaration,
      $.type_declaration,
      // $.lexical_declaration,
      // $.variable_declaration
    ),

    class_declaration: $ => seq(
      optional($.annotation),
      'class',
      field('class_name', $.identifier),
      optional($.class_heritage),
      field('class_body', $.class_body),
    ),

    class_body: $ => seq(
      '{',
      repeat(choice(field('class_method', seq(optional($.annotation), $.function_declaration)), $.comment)),
      '}'
    ),

    function_declaration: $ => seq(
      'function',
      field('function_name', $.identifier),
      $._call_signature,
      optional($.as_type),
      field('function_body', $.statement_block),
    ),

    statement_block: $ => prec.right(seq(
      '{',
      repeat(choice($.statement, $.comment)),
      '}',
    )),

    type_declaration: $ => seq(
      'typedef',
      field('typedef_name', $.identifier),
      $.as_type,
      $.semicolon,
    ),


    array: $ => seq(
      '[',
      commaSep(/.+/),
      ']'
    ),

    primary_expression: $ => choice(
      $.string
    ),

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $.escape_sequence
        )),
        '"'
      ),
    ),

    escape_sequence: $ => token(prec(1, seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    ))),
    
    as_type: $ => seq(
      'as',
      $.type,
      optional(repeat1(seq('or', $.type))),
    ),

    type: $ => choice($.builtin_type, $.identifier),


    builtin_type: $ => choice(
      'Any',
      'Void',
      'Number',
      'Float',
      'Long',
      'Double',
      'String',
    ),

    parameter: $ => seq(
      field('parameter_name', $.identifier),
      optional($.as_type),
    ),
    _call_signature: $ => field('parameters', seq('(', commaSep($.parameter), ')')),

    typedef: $ => field('typedef', 'typedef'),
    or: $ => field('or', 'or'),
    new: $ => field('new', 'new'),

    // this: $ => choice('this', 'me'),
    this: $ => 'this',
    true: $ => 'true',
    false: $ => 'false',
    null: $ => 'null',

    return: $ => field('return', 'return'),


    // if
    if_statement: $ => seq(
      'if',
      field('condition', $.parenthesized_expression),
      field('consequence', $.statement_block),
      optional(seq(
        'else',
        field('alternative', choice($.statement_block, $.if_statement))
      ))
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    // TODO define
    _expression: $ => choice(
      $.true,
      $.false,
      $.string,
      /[^)]+/,
    ),

    annotation: $ => seq(
      '(',
      field('annotation_name', choice(
        ':background',
        ':debug',
        ':glance',
        ':release',
        ':test',
        ':typecheck',
        /:[^)]*/,
      )),
      ')'
    ),
  },
});


function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
