grammar Corto;

@parser::postinclude {
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
}

program
    : statements
    ;

statements
    : (statement)*
    ;

statement
    : NL
    | expression eol
    | declaration
    ;

scope_statement
    : NL
    | declaration
    ;

scope
    : '{' (scope_statement)* '}'
    ;

declaration
    : storage_expression? declaration_identifier initializer_assignment? (scope | eol)
    | storage_expression? function_identifier initializer_list? (scope | eol)
    ;

function_identifier
    : storage_identifier argument_declaration
    ;

declaration_identifier
    : storage_identifier (',' storage_identifier)*
    ;

argument_declaration
    : '(' argument (',' argument)* ')'
    | '(' ')'
    ;

argument
    : INOUT? storage_expression REF? IDENTIFIER
    ;

expression
    : assignment_expression
    ;

assignment_expression
    : conditional_expression
    | storage_expression assignment_operator assignment_expression
    ;

assignment_operator
    : '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
    ;

conditional_expression
    : logical_or_expression ('?' expression ':' conditional_expression)?
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression COND_OR logical_and_expression
    ;

logical_and_expression
    : or_expression
    | logical_and_expression COND_AND or_expression
    ;

or_expression
    : xor_expression
    | or_expression '|' xor_expression
    ;

xor_expression
    : and_expression
    | xor_expression '^' and_expression
    ;

and_expression
    : equality_expression
    | and_expression '&' equality_expression
    ;

equality_expression
    : relational_expression
    | equality_expression equality_operator relational_expression
    ;

equality_operator: '==' | '!=' ;

relational_expression
    : shift_expression
    | relational_expression relational_operator shift_expression
    ;

relational_operator: '<' | '>' | '<=' | '>=' ;

shift_expression
    : additive_expression
    | shift_expression shift_operator additive_expression
    ;

shift_operator: '<<' | '>>' ;

additive_expression
    : multiplicative_expression
    | additive_expression additive_operator multiplicative_expression
    ;

additive_operator: '+' | '-';

multiplicative_expression
    : cast_expression
    | multiplicative_expression multiplicative_operator cast_expression
    ;

multiplicative_operator: '*' | '/' | '%';

cast_expression
    : unary_expression
    | '(' storage_expression ')' cast_expression
    ;

unary_expression
    : postfix_expression
    | inc_operator unary_expression
    | unary_operator cast_expression
    ;

unary_operator: '&' | '*' | '+' | '-' | '~' | COND_NOT ;

postfix_expression
    : literal
    | storage_expression
    | postfix_expression inc_operator
    | '(' expression ')'
    ;

inc_operator: '++' | '--';

storage_expression
    : storage_identifier
    | storage_expression initializer_collection
    ;

initializer_assignment
    : ':' initializer_list
    | '=' initializer_expression
    ;

initializer_expression
    : initializer_composite
    | initializer_collection
    ;

initializer_composite
    : '{' NL? initializer_list? NL? '}'
    ;

initializer_collection
    : '[' NL? initializer_list? NL? ']'
    ;

initializer_list
    : initializer_value (',' NL? initializer_value)*
    ;

initializer_value
    : initializer_key ':' (initializer_expression | expression)
    | initializer_expression
    | expression
    ;

initializer_key
    : literal
    | storage_identifier
    | STRING
    ;

literal
    : BOOLEAN
    | HEXADECIMAL
    | FLOATING_POINT_MEASUREMENT
    | SIGNED_INTEGER_MEASUREMENT
    | INTEGER_MEASUREMENT
    | SIGNED_INTEGER
    | FLOATING_POINT
    | INTEGER
    | STRING
    | NULL_LITERAL
    ;

storage_identifier
    : IDENTIFIER
    | SCOPE_IDENTIFIER
    | '<' initializer_list '>'
    ;

BOOLEAN
    : 'true' | 'false'
    ;

INOUT
    : 'in' | 'out' | 'inout'
    ;

REF : '&' ;

NULL_LITERAL
    : 'null'
    ;

COND_AND
    : '&&'
    | 'and'
    ;

COND_OR
    : '||'
    | 'or'
    ;

COND_NOT
    : '!'
    | 'not'
    ;

IDENTIFIER
    : LETTER_UNDERSCORE (LETTER_UNDERSCORE | DIGIT)*
    ;

SCOPE_IDENTIFIER
    : ('root/' | ('/'? IDENTIFIER ('/' IDENTIFIER)*)) ('.' IDENTIFIER)*
    ;

HEXADECIMAL
    : '0x' (DIGIT | 'a'..'f' | 'A'..'F')*
    ;

SIGNED_INTEGER_MEASUREMENT : SIGNED_INTEGER MEASUREMENT_POSTFIX ;

INTEGER_MEASUREMENT : INTEGER MEASUREMENT_POSTFIX ;

FLOATING_POINT_MEASUREMENT : FLOATING_POINT MEASUREMENT_POSTFIX ;

fragment MEASUREMENT_POSTFIX
    : '%'
    | LETTER+
    ;

INTEGER
    : '0'
    | ('1'..'9') ('0'..'9')*
    ;

SIGNED_INTEGER
    : SIGN ('1'..'9') ('0'..'9')*
    ;

FLOATING_POINT
    : SIGN? DIGIT+ ('.' DIGIT+)? (E SIGN DIGIT+)?
    ;

STRING
    : '"' (ESC|~('\\'|'\n'|'"'))* '"'
    | '\'' (ESC|~('\\'|'\n'|'\''))* '\''
    ;

eol : NL
    | EOF
    | ';'
    ;

NL  : '\r'? '\n'
    ;

WS: [ \t\r]+ -> skip;

fragment ESC
    : '\\' .
    ;

fragment LETTER_UNDERSCORE
    : LETTER
    | '_'
    ;

fragment LETTER
    : 'a'..'z'
    | 'A'..'Z'
    ;

fragment DIGIT
    : '0' .. '9'
    ;

fragment SIGN
    : '+' | '-'
    ;

fragment E
    : 'e' | 'E'
    ;
