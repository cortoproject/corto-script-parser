grammar Corto;

@parser::postinclude {
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
}

@lexer::members {
    int nesting = 0;
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

declaration
    : object_expression? declaration_identifier initializer_assignment? (scope | eol)
    ;

declaration_identifier
    : object_identifier argument_declaration?
    | object_identifier (',' object_identifier)+
    | object_expression (',' object_expression)+
    ;

argument_declaration
    : LPAREN argument (',' argument)* RPAREN
    | LPAREN RPAREN
    ;

argument
    : object_expression IDENTIFIER
    ;

scope
    : '{' statements '}'
    ;

expression
    : assignment_expression
    ;

assignment_expression
    : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;

assignment_operator
    : '=' | '*=' | '/=' | '%=' | '+=' | '-=' | '<<=' | '>>=' | '&=' | '^=' | '|='
    ;

conditional_expression
    : logical_or_expression ('?' expression ':' conditional_expression)?
    ;

logical_or_expression
    : logical_and_expression
    | logical_or_expression '||' logical_and_expression
    ;

logical_and_expression
    : or_expression
    | logical_and_expression '&&' or_expression
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
    | LPAREN object_expression RPAREN cast_expression
    ;

unary_expression
    : postfix_expression
    | inc_operator unary_expression
    | unary_operator cast_expression
    ;

unary_operator: '&' | '*' | '+' | '-' | '~' | '!' ;

postfix_expression
    : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression initializer_composite
    | postfix_expression '.' IDENTIFIER
    | postfix_expression inc_operator
    ;

inc_operator: '++' | '--';

initializer_assignment
    : initializer_expression
    | ':' initializer_list
    ;

initializer_expression
    : initializer_composite
    | initializer_collection
    ;

initializer_composite
    : LPAREN initializer_list? RPAREN
    ;

initializer_collection
    : LBRACK initializer_list? RBRACK
    ;

initializer_list
    : initializer_value (',' initializer_value)*
    ;

initializer_value
    : initializer_key (initializer_expression | ':' expression)
    | expression
    ;

initializer_key
    : IDENTIFIER ('.' IDENTIFIER)*
    | literal
    | object_identifier
    ;

primary_expression
    : literal
    | object_expression
    | LPAREN expression RPAREN
    ;

literal
    : BOOLEAN
    | HEXADECIMAL
    | SIGNED_INTEGER_MEASUREMENT
    | INTEGER_MEASUREMENT
    | FLOATING_POINT_MEASUREMENT
    | SIGNED_INTEGER
    | FLOATING_POINT
    | INTEGER
    | STRING
    | NULL_LITERAL
    ;

object_expression
    : object_identifier (initializer_expression)*
    ;

object_identifier
    : 'root/'
    | '/'? IDENTIFIER ('/' IDENTIFIER)*
    ;

BOOLEAN
    : 'true' | 'false'
    ;

NULL_LITERAL
    : 'null'
    ;

IDENTIFIER
    : LETTER_UNDERSCORE (LETTER_UNDERSCORE | DIGIT)*
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
    : '-'? DIGIT+ ('.' DIGIT+)? (E SIGN DIGIT+)?
    ;

STRING
    : '"' (ESC|~('\\'|'\n'|'"'))* '"'
    | '\'' (ESC|~('\\'|'\n'|'\''))* '\''
    ;

LPAREN : '(' {nesting ++;} ;
RPAREN : ')' {nesting --;} ;
LBRACK : '[' {nesting ++;} ;
RBRACK : ']' {nesting --;} ;

IGNORE_NEWLINE
    : '\r'? '\n' {nesting > 0}? -> skip
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
