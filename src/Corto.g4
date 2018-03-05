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
    : EOL
    | simple_statement EOL
    | complex_statement
    ;

simple_statement
    : declaration
    | expression
    ;

complex_statement
    : declaration scope
    ;

declaration
    : object_expression? declaration_identifier initializer_assignment?
    ;

declaration_identifier
    : object_identifier argument_declaration?
    | object_expression (',' object_expression)+
    ;

argument_declaration
    : '(' argument (',' argument)* ')'
    | '(' ')'
    ;

argument
    : object_expression IDENTIFIER
    ;

scope
    : '{' statements '}'
    ;

expression
    : assignment_expression
    | '(' expression ')'
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
    | equality_expression '==' relational_expression
    | equality_expression '!=' relational_expression
    ;

relational_expression
    : shift_expression
    | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression '<=' shift_expression
    | relational_expression '>=' shift_expression
    ;

shift_expression
    : additive_expression
    | shift_expression '<<' additive_expression
    | shift_expression '>>' additive_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression
    ;

cast_expression
    : unary_expression
    | '(' object_expression ')' cast_expression
    ;

unary_expression
    : postfix_expression
    | '++' unary_expression
    | '--' unary_expression
    | unary_operator cast_expression
    ;

unary_operator
    : '&' | '*' | '+' | '-' | '~' | '!'
    ;

postfix_expression
    : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression initializer_composite
    | postfix_expression '.' IDENTIFIER
    | postfix_expression '++'
    | postfix_expression '--'
    ;

argument_expression_list
    : assignment_expression
    | argument_expression_list ',' assignment_expression
    ;

initializer_assignment
    : initializer_expression
    | ':' initializer_list
    ;

initializer_expression
    : initializer_composite
    | initializer_collection
    ;

initializer_composite
    : '(' initializer_list? ')'
    ;

initializer_collection
    : '[' initializer_list? ']'
    ;

initializer_list
    : initializer_value (','? initializer_value)*
    ;

initializer_value
    : expression
    | initializer_key initializer_assignment
    ;

initializer_key
    : IDENTIFIER ('.' IDENTIFIER)*
    | constant
    | object_identifier
    ;

primary_expression
    : constant
    | object_expression
    ;

constant
    : BOOLEAN
    | INTEGER
    | SIGNED_INTEGER
    | FLOATING_POINT
    | CHARACTER
    | STRING
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

IDENTIFIER
    : LETTER_UNDERSCORE (LETTER_UNDERSCORE | DIGIT)*
    ;

INTEGER
    : '+'? NUMBER
    ;

SIGNED_INTEGER
    : '-' NUMBER
    ;

FLOATING_POINT
    : NUMBER ('.' NUMBER)? (E SIGN NUMBER)?
    ;

HEXADECIMAL
    : '0x' (DIGIT|'a-fA-F')*
    ;

CHARACTER
    : '\'' (ESC|~('\\'|'\n'|'\''))* '\''
    ;

STRING
    : '"' (ESC|~('\\'|'\n'|'"'))* '"'
    ;

EOL
    : '\n'+ | ';'+
    ;

WS: [ \t\r]+ -> skip;

fragment ESC
    : '\\' .
    ;

fragment NUMBER
    : '0'
    | ('1'..'9') ('0'..'9')*
    ;

fragment LETTER_UNDERSCORE
    : 'a'..'z'
    | 'A'..'Z'
    | '_'
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
