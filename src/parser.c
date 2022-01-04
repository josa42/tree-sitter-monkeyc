#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 27

enum {
  sym_comment = 1,
  aux_sym_statement_token1 = 2,
  aux_sym_statement_token2 = 3,
  anon_sym_using = 4,
  anon_sym_as = 5,
  aux_sym__identifier_token1 = 6,
  anon_sym_DOT = 7,
  sym_semicolon = 8,
  anon_sym_extends = 9,
  anon_sym_class = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_function = 13,
  anon_sym_typedef = 14,
  anon_sym_LBRACK = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACK = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  sym_escape_sequence = 20,
  anon_sym_or = 21,
  anon_sym_Any = 22,
  anon_sym_Void = 23,
  anon_sym_Number = 24,
  anon_sym_Float = 25,
  anon_sym_Long = 26,
  anon_sym_Double = 27,
  anon_sym_String = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_new = 31,
  sym_this = 32,
  sym_true = 33,
  sym_false = 34,
  sym_null = 35,
  anon_sym_return = 36,
  anon_sym_if = 37,
  anon_sym_else = 38,
  aux_sym__expression_token1 = 39,
  anon_sym_COLONbackground = 40,
  anon_sym_COLONdebug = 41,
  anon_sym_COLONglance = 42,
  anon_sym_COLONrelease = 43,
  anon_sym_COLONtest = 44,
  anon_sym_COLONtypecheck = 45,
  aux_sym_annotation_token1 = 46,
  sym_program = 47,
  sym_statement = 48,
  sym_import_statement = 49,
  sym__import_source = 50,
  sym__identifier = 51,
  sym_identifier = 52,
  sym_fqn = 53,
  sym_class_heritage = 54,
  sym_declaration = 55,
  sym_class_declaration = 56,
  sym_class_body = 57,
  sym_function_declaration = 58,
  sym_statement_block = 59,
  sym_type_declaration = 60,
  sym_string = 61,
  sym_as_type = 62,
  sym_type = 63,
  sym_builtin_type = 64,
  sym_parameter = 65,
  sym__call_signature = 66,
  sym_if_statement = 67,
  sym_parenthesized_expression = 68,
  sym__expression = 69,
  sym_annotation = 70,
  aux_sym_program_repeat1 = 71,
  aux_sym_fqn_repeat1 = 72,
  aux_sym_class_body_repeat1 = 73,
  aux_sym_statement_block_repeat1 = 74,
  aux_sym_string_repeat1 = 75,
  aux_sym_as_type_repeat1 = 76,
  aux_sym__call_signature_repeat1 = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_statement_token1] = "statement_token1",
  [aux_sym_statement_token2] = "statement_token2",
  [anon_sym_using] = "using",
  [anon_sym_as] = "as",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [anon_sym_DOT] = ".",
  [sym_semicolon] = "semicolon",
  [anon_sym_extends] = "extends",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_typedef] = "typedef",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_or] = "or",
  [anon_sym_Any] = "Any",
  [anon_sym_Void] = "Void",
  [anon_sym_Number] = "Number",
  [anon_sym_Float] = "Float",
  [anon_sym_Long] = "Long",
  [anon_sym_Double] = "Double",
  [anon_sym_String] = "String",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_new] = "new",
  [sym_this] = "this",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [aux_sym__expression_token1] = "_expression_token1",
  [anon_sym_COLONbackground] = ":background",
  [anon_sym_COLONdebug] = ":debug",
  [anon_sym_COLONglance] = ":glance",
  [anon_sym_COLONrelease] = ":release",
  [anon_sym_COLONtest] = ":test",
  [anon_sym_COLONtypecheck] = ":typecheck",
  [aux_sym_annotation_token1] = "annotation_token1",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_import_statement] = "import_statement",
  [sym__import_source] = "_import_source",
  [sym__identifier] = "_identifier",
  [sym_identifier] = "identifier",
  [sym_fqn] = "fqn",
  [sym_class_heritage] = "class_heritage",
  [sym_declaration] = "declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym_function_declaration] = "function_declaration",
  [sym_statement_block] = "statement_block",
  [sym_type_declaration] = "type_declaration",
  [sym_string] = "string",
  [sym_as_type] = "as_type",
  [sym_type] = "type",
  [sym_builtin_type] = "builtin_type",
  [sym_parameter] = "parameter",
  [sym__call_signature] = "_call_signature",
  [sym_if_statement] = "if_statement",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym__expression] = "_expression",
  [sym_annotation] = "annotation",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_fqn_repeat1] = "fqn_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_statement_block_repeat1] = "statement_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_as_type_repeat1] = "as_type_repeat1",
  [aux_sym__call_signature_repeat1] = "_call_signature_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [aux_sym_statement_token2] = aux_sym_statement_token2,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_as] = anon_sym_as,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_semicolon] = sym_semicolon,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_Any] = anon_sym_Any,
  [anon_sym_Void] = anon_sym_Void,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Long] = anon_sym_Long,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_new] = anon_sym_new,
  [sym_this] = sym_this,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [aux_sym__expression_token1] = aux_sym__expression_token1,
  [anon_sym_COLONbackground] = anon_sym_COLONbackground,
  [anon_sym_COLONdebug] = anon_sym_COLONdebug,
  [anon_sym_COLONglance] = anon_sym_COLONglance,
  [anon_sym_COLONrelease] = anon_sym_COLONrelease,
  [anon_sym_COLONtest] = anon_sym_COLONtest,
  [anon_sym_COLONtypecheck] = anon_sym_COLONtypecheck,
  [aux_sym_annotation_token1] = aux_sym_annotation_token1,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_import_statement] = sym_import_statement,
  [sym__import_source] = sym__import_source,
  [sym__identifier] = sym__identifier,
  [sym_identifier] = sym_identifier,
  [sym_fqn] = sym_fqn,
  [sym_class_heritage] = sym_class_heritage,
  [sym_declaration] = sym_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_body] = sym_class_body,
  [sym_function_declaration] = sym_function_declaration,
  [sym_statement_block] = sym_statement_block,
  [sym_type_declaration] = sym_type_declaration,
  [sym_string] = sym_string,
  [sym_as_type] = sym_as_type,
  [sym_type] = sym_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_parameter] = sym_parameter,
  [sym__call_signature] = sym__call_signature,
  [sym_if_statement] = sym_if_statement,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym__expression] = sym__expression,
  [sym_annotation] = sym_annotation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_fqn_repeat1] = aux_sym_fqn_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_statement_block_repeat1] = aux_sym_statement_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_as_type_repeat1] = aux_sym_as_type_repeat1,
  [aux_sym__call_signature_repeat1] = aux_sym__call_signature_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLONbackground] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONdebug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONglance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONrelease] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtypecheck] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_annotation_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__import_source] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_fqn] = {
    .visible = true,
    .named = true,
  },
  [sym_class_heritage] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_as_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__call_signature] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fqn_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_as_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_alternative = 2,
  field_annotation_name = 3,
  field_class_body = 4,
  field_class_method = 5,
  field_class_name = 6,
  field_condition = 7,
  field_consequence = 8,
  field_fqn_name = 9,
  field_fqn_namespace = 10,
  field_function_body = 11,
  field_function_name = 12,
  field_parameter_name = 13,
  field_parameters = 14,
  field_parent_class = 15,
  field_source = 16,
  field_typedef_name = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_alternative] = "alternative",
  [field_annotation_name] = "annotation_name",
  [field_class_body] = "class_body",
  [field_class_method] = "class_method",
  [field_class_name] = "class_name",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_fqn_name] = "fqn_name",
  [field_fqn_namespace] = "fqn_namespace",
  [field_function_body] = "function_body",
  [field_function_name] = "function_name",
  [field_parameter_name] = "parameter_name",
  [field_parameters] = "parameters",
  [field_parent_class] = "parent_class",
  [field_source] = "source",
  [field_typedef_name] = "typedef_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 3},
  [22] = {.index = 35, .length = 3},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 4},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fqn_name, 0},
  [1] =
    {field_source, 0},
  [2] =
    {field_source, 1, .inherited = true},
  [3] =
    {field_fqn_namespace, 0},
    {field_fqn_namespace, 1},
  [5] =
    {field_fqn_name, 1},
    {field_fqn_namespace, 0, .inherited = true},
  [7] =
    {field_fqn_namespace, 0, .inherited = true},
    {field_fqn_namespace, 1, .inherited = true},
  [9] =
    {field_class_body, 2},
    {field_class_name, 1},
  [11] =
    {field_annotation_name, 1},
  [12] =
    {field_parent_class, 1},
  [13] =
    {field_class_method, 0},
  [14] =
    {field_class_body, 3},
    {field_class_name, 1},
  [16] =
    {field_parameters, 0},
    {field_parameters, 1},
  [18] =
    {field_parameter_name, 0},
  [19] =
    {field_function_body, 3},
    {field_function_name, 1},
    {field_parameters, 2, .inherited = true},
  [22] =
    {field_typedef_name, 1},
  [23] =
    {field_class_body, 3},
    {field_class_name, 2},
  [25] =
    {field_alias, 3},
    {field_source, 1, .inherited = true},
  [27] =
    {field_class_method, 0},
    {field_class_method, 1},
  [29] =
    {field_class_method, 1, .inherited = true},
  [30] =
    {field_class_method, 0, .inherited = true},
    {field_class_method, 1, .inherited = true},
  [32] =
    {field_parameters, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [35] =
    {field_function_body, 4},
    {field_function_name, 1},
    {field_parameters, 2, .inherited = true},
  [38] =
    {field_class_body, 4},
    {field_class_name, 2},
  [40] =
    {field_parameters, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [44] =
    {field_condition, 1},
    {field_consequence, 2},
  [46] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 15,
  [40] = 22,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 22,
  [61] = 61,
  [62] = 15,
  [63] = 30,
  [64] = 64,
  [65] = 65,
  [66] = 23,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 74,
  [87] = 87,
  [88] = 77,
  [89] = 78,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '(') ADVANCE(189);
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == ',') ADVANCE(160);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'L') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == 'V') ADVANCE(73);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') SKIP(113)
      if (lookahead == ']') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '(') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == 's') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(190);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead == 'V') ADVANCE(139);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(199);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 112:
      if (eof) ADVANCE(114);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(112)
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(216);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_statement_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'b') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'b') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'd') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'g') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'g') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'l') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'm') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'n') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'o') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 't') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'u') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'y') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\\') ADVANCE(7);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Any);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Any);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Void);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_Void);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Number);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_Long);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Double);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_String);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '(') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '(') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead == '\r') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '\n') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__expression_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLONbackground);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLONdebug);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_COLONglance);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLONrelease);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_COLONtest);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLONtypecheck);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'b') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'g') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'b') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'g') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'k') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_annotation_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(258);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_statement_token2] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_Any] = ACTIONS(1),
    [anon_sym_Void] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [sym_this] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_COLONbackground] = ACTIONS(1),
    [anon_sym_COLONdebug] = ACTIONS(1),
    [anon_sym_COLONglance] = ACTIONS(1),
    [anon_sym_COLONrelease] = ACTIONS(1),
    [anon_sym_COLONtest] = ACTIONS(1),
    [anon_sym_COLONtypecheck] = ACTIONS(1),
    [aux_sym_annotation_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(102),
    [sym_import_statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_class_declaration] = STATE(33),
    [sym_function_declaration] = STATE(33),
    [sym_type_declaration] = STATE(33),
    [sym_annotation] = STATE(96),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_using] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_using,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_typedef,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      sym_annotation,
    STATE(3), 3,
      sym_import_statement,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(33), 3,
      sym_class_declaration,
      sym_function_declaration,
      sym_type_declaration,
  [35] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_using,
    ACTIONS(24), 1,
      anon_sym_class,
    ACTIONS(27), 1,
      anon_sym_function,
    ACTIONS(30), 1,
      anon_sym_typedef,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_annotation,
    STATE(3), 3,
      sym_import_statement,
      sym_declaration,
      aux_sym_program_repeat1,
    STATE(33), 3,
      sym_class_declaration,
      sym_function_declaration,
      sym_type_declaration,
  [70] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__identifier_token1,
    STATE(21), 1,
      sym_type,
    STATE(41), 2,
      sym_identifier,
      sym_builtin_type,
    ACTIONS(38), 7,
      anon_sym_Any,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_Float,
      anon_sym_Long,
      anon_sym_Double,
      anon_sym_String,
  [93] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      aux_sym__identifier_token1,
    STATE(43), 1,
      sym_type,
    STATE(41), 2,
      sym_identifier,
      sym_builtin_type,
    ACTIONS(38), 7,
      anon_sym_Any,
      anon_sym_Void,
      anon_sym_Number,
      anon_sym_Float,
      anon_sym_Long,
      anon_sym_Double,
      anon_sym_String,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 8,
      anon_sym_as,
      sym_semicolon,
      anon_sym_extends,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [130] = 6,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_if,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(12), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [151] = 6,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(50), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(7), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [172] = 6,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(12), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [193] = 6,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(9), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      anon_sym_COLONbackground,
      anon_sym_COLONdebug,
      anon_sym_COLONglance,
      anon_sym_COLONrelease,
      anon_sym_COLONtest,
      anon_sym_COLONtypecheck,
      aux_sym_annotation_token1,
  [227] = 6,
    ACTIONS(62), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_if,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(65), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(12), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [248] = 6,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(12), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [269] = 6,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_if_statement,
    ACTIONS(44), 2,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
    STATE(13), 2,
      sym_statement,
      aux_sym_statement_block_repeat1,
  [290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [338] = 7,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_function,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      aux_sym_class_body_repeat1,
    STATE(71), 1,
      sym_function_declaration,
    STATE(73), 1,
      sym_annotation,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_or,
    STATE(35), 1,
      aux_sym_as_type_repeat1,
    ACTIONS(100), 4,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [412] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(56), 1,
      aux_sym_fqn_repeat1,
    STATE(61), 1,
      sym_identifier,
    STATE(90), 1,
      sym_fqn,
    STATE(94), 1,
      sym__import_source,
    STATE(101), 1,
      sym__identifier,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [446] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(106), 2,
      sym_string,
      sym__expression,
    ACTIONS(116), 3,
      sym_true,
      sym_false,
      aux_sym__expression_token1,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [474] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_function,
    STATE(19), 1,
      aux_sym_class_body_repeat1,
    STATE(71), 1,
      sym_function_declaration,
    STATE(73), 1,
      sym_annotation,
  [496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym_as_type_repeat1,
    ACTIONS(126), 4,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [536] = 7,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_function,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      aux_sym_class_body_repeat1,
    STATE(71), 1,
      sym_function_declaration,
    STATE(73), 1,
      sym_annotation,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_or,
    STATE(29), 1,
      aux_sym_as_type_repeat1,
    ACTIONS(143), 4,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_using,
      anon_sym_class,
      anon_sym_function,
      anon_sym_typedef,
      anon_sym_LPAREN,
  [610] = 3,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_else,
    ACTIONS(147), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [623] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(56), 1,
      aux_sym_fqn_repeat1,
    STATE(61), 1,
      sym_identifier,
    STATE(100), 1,
      sym_fqn,
    STATE(101), 1,
      sym__identifier,
  [642] = 2,
    ACTIONS(153), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(79), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [653] = 2,
    ACTIONS(155), 2,
      anon_sym_if,
      anon_sym_else,
    ACTIONS(104), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 5,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 5,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      sym_semicolon,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_or,
      anon_sym_RPAREN,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(40), 3,
      anon_sym_as,
      sym_semicolon,
      anon_sym_LBRACE,
  [709] = 2,
    ACTIONS(165), 1,
      anon_sym_if,
    ACTIONS(163), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [719] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token1,
    ACTIONS(171), 1,
      sym_escape_sequence,
    STATE(47), 1,
      aux_sym_string_repeat1,
  [735] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      aux_sym_string_token1,
    ACTIONS(177), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_as,
    STATE(95), 1,
      sym_as_type,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [765] = 2,
    ACTIONS(185), 1,
      anon_sym_if,
    ACTIONS(183), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_if,
    STATE(54), 2,
      sym_statement_block,
      sym_if_statement,
  [789] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_string_token1,
    ACTIONS(196), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_extends,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_class_body,
    STATE(85), 1,
      sym_class_heritage,
  [821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_identifier,
    STATE(70), 1,
      sym_parameter,
  [837] = 2,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(207), 4,
      sym_comment,
      aux_sym_statement_token1,
      aux_sym_statement_token2,
      anon_sym_RBRACE,
  [847] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_extends,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_class_body,
    STATE(81), 1,
      sym_class_heritage,
  [863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(67), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_fqn_repeat1,
    STATE(101), 1,
      sym__identifier,
  [879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_as,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_statement_block,
    STATE(77), 1,
      sym_as_type,
  [895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_as,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_statement_block,
    STATE(88), 1,
      sym_as_type,
  [911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(48), 1,
      sym_identifier,
    STATE(75), 1,
      sym_parameter,
  [924] = 1,
    ACTIONS(104), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_as,
      sym_semicolon,
      anon_sym_LBRACE,
  [940] = 1,
    ACTIONS(79), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [947] = 1,
    ACTIONS(131), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [954] = 1,
    ACTIONS(217), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__call_signature_repeat1,
  [974] = 1,
    ACTIONS(106), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_as,
      sym_semicolon,
      anon_sym_LBRACE,
  [990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__identifier_token1,
    STATE(68), 1,
      aux_sym_fqn_repeat1,
    STATE(101), 1,
      sym__identifier,
  [1003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym__call_signature_repeat1,
  [1016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym__call_signature_repeat1,
  [1029] = 1,
    ACTIONS(235), 4,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_LPAREN,
  [1036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_parenthesized_expression,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_function,
    STATE(64), 1,
      sym_function_declaration,
  [1056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(78), 1,
      sym_identifier,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_statement_block,
  [1092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__call_signature,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_class,
      anon_sym_function,
  [1110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_statement_block,
  [1120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_class_body,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_as,
      anon_sym_LBRACE,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(108), 1,
      sym_identifier,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_class_body,
  [1166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(89), 1,
      sym_identifier,
  [1176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(92), 1,
      sym_identifier,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_statement_block,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__call_signature,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_as,
      sym_semicolon,
  [1214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(52), 1,
      sym_identifier,
  [1224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_as,
    STATE(107), 1,
      sym_as_type,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token1,
    STATE(55), 1,
      sym_identifier,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_as,
    ACTIONS(253), 1,
      sym_semicolon,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_class,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_semicolon,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOT,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym__identifier_token1,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_semicolon,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_semicolon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 214,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 269,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 302,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 360,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 400,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 524,
  [SMALL_STATE(32)] = 536,
  [SMALL_STATE(33)] = 558,
  [SMALL_STATE(34)] = 570,
  [SMALL_STATE(35)] = 582,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 610,
  [SMALL_STATE(38)] = 623,
  [SMALL_STATE(39)] = 642,
  [SMALL_STATE(40)] = 653,
  [SMALL_STATE(41)] = 664,
  [SMALL_STATE(42)] = 675,
  [SMALL_STATE(43)] = 686,
  [SMALL_STATE(44)] = 697,
  [SMALL_STATE(45)] = 709,
  [SMALL_STATE(46)] = 719,
  [SMALL_STATE(47)] = 735,
  [SMALL_STATE(48)] = 751,
  [SMALL_STATE(49)] = 765,
  [SMALL_STATE(50)] = 775,
  [SMALL_STATE(51)] = 789,
  [SMALL_STATE(52)] = 805,
  [SMALL_STATE(53)] = 821,
  [SMALL_STATE(54)] = 837,
  [SMALL_STATE(55)] = 847,
  [SMALL_STATE(56)] = 863,
  [SMALL_STATE(57)] = 879,
  [SMALL_STATE(58)] = 895,
  [SMALL_STATE(59)] = 911,
  [SMALL_STATE(60)] = 924,
  [SMALL_STATE(61)] = 931,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 947,
  [SMALL_STATE(64)] = 954,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 974,
  [SMALL_STATE(67)] = 981,
  [SMALL_STATE(68)] = 990,
  [SMALL_STATE(69)] = 1003,
  [SMALL_STATE(70)] = 1016,
  [SMALL_STATE(71)] = 1029,
  [SMALL_STATE(72)] = 1036,
  [SMALL_STATE(73)] = 1046,
  [SMALL_STATE(74)] = 1056,
  [SMALL_STATE(75)] = 1066,
  [SMALL_STATE(76)] = 1074,
  [SMALL_STATE(77)] = 1082,
  [SMALL_STATE(78)] = 1092,
  [SMALL_STATE(79)] = 1102,
  [SMALL_STATE(80)] = 1110,
  [SMALL_STATE(81)] = 1120,
  [SMALL_STATE(82)] = 1130,
  [SMALL_STATE(83)] = 1138,
  [SMALL_STATE(84)] = 1146,
  [SMALL_STATE(85)] = 1156,
  [SMALL_STATE(86)] = 1166,
  [SMALL_STATE(87)] = 1176,
  [SMALL_STATE(88)] = 1186,
  [SMALL_STATE(89)] = 1196,
  [SMALL_STATE(90)] = 1206,
  [SMALL_STATE(91)] = 1214,
  [SMALL_STATE(92)] = 1224,
  [SMALL_STATE(93)] = 1234,
  [SMALL_STATE(94)] = 1244,
  [SMALL_STATE(95)] = 1254,
  [SMALL_STATE(96)] = 1262,
  [SMALL_STATE(97)] = 1269,
  [SMALL_STATE(98)] = 1276,
  [SMALL_STATE(99)] = 1283,
  [SMALL_STATE(100)] = 1290,
  [SMALL_STATE(101)] = 1297,
  [SMALL_STATE(102)] = 1304,
  [SMALL_STATE(103)] = 1311,
  [SMALL_STATE(104)] = 1318,
  [SMALL_STATE(105)] = 1325,
  [SMALL_STATE(106)] = 1332,
  [SMALL_STATE(107)] = 1339,
  [SMALL_STATE(108)] = 1346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(93),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(98),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_block_repeat1, 2), SHIFT_REPEAT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, .production_id = 19),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, .production_id = 17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 16),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 20), SHIFT_REPEAT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 20),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 20), SHIFT_REPEAT(74),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 20), SHIFT_REPEAT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 4, .production_id = 15),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_type, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 14),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, .production_id = 11),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_as_type_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_as_type_repeat1, 2), SHIFT_REPEAT(5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 22),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_type, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, .production_id = 23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 25),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_block, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_block, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 13),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(51),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqn, 1, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, .production_id = 18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fqn, 2, .production_id = 5),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fqn_repeat1, 2, .production_id = 6), SHIFT_REPEAT(101),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_signature_repeat1, 2), SHIFT_REPEAT(59),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_signature_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 1, .production_id = 10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_signature, 4, .production_id = 24),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_signature, 3, .production_id = 21),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_signature, 2, .production_id = 12),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_source, 1, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 13),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_heritage, 2, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fqn_repeat1, 2, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_monkeyc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
