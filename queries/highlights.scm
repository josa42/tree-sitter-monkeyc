(comment) @comment

(this) @variable.builtin

[
;   ; "?."
  "."
;   ; ","
] @punctuation.delimiter

(semicolon) @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
 "class"
 "extends"
 "function"
 "new"
 "or"
 "typedef"
] @keyword

"return" @keyword.return

; [
;   ; "while"
;   "for"
;   ; "do"
;   ; "continue"
;   ; "break"
; ] @repeat

; [
;  "if"
;  "else"
; ;  "case"
; ;  "switch"
; ] @conditional

; [
;   "="
;
;   "-"
;   "*"
;   "/"
;   "+"
;   "%"
;
;   "~"
;   "|"
;   "&"
;   "^"
;   "<<"
;   ">>"
;
;   "->"
;
;   "<"
;   "<="
;   ">="
;   ">"
;   "=="
;   "!="
;
;   "!"
;   "&&"
;   "||"
;
;   "-="
;   "+="
;   "*="
;   "/="
;   "%="
;   "|="
;   "&="
;   "^="
;   ">>="
;   "<<="
;   "--"
;   "++"
; ] @operator

;using

(import_statement (["using" "as"]) @include)
; types
(as_type (type) @type)
(builtin_type) @type.builtin

(string) @string

[
 (true)
 (false)
] @boolean

(fqn fqn_name: (identifier) @type)
(fqn) @namespace

(as_type ("as")) @keyword

; function
(function_declaration function_name: (identifier) @function) 
(parameter (identifier) @variable.parameter)

; typedef
(type_declaration typedef_name: (identifier) @type) 

; class
(class_declaration class_name: (identifier) @type @class) 
(class_declaration (class_body class_method: (function_declaration function_name: (identifier) @method @function.method))) 
; (class_declaration (class_body (function_declaration name: (identifier)))) @function.method

; if / else
(if_statement (["if" "else"]) @keyword)

; annotation
(annotation) @operator
