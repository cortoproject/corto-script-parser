grammar Corto;

@parser::postinclude {
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
}

/* A program may contain exactly one IN declaration, which indicates the scope in
 * which the declarations in the program will be stored. A program needs to end
 * with EOF to ensure the whole program has been parsed.
 * IN declarations may appear by themselves. */

program
    : NL* (in_statement eol)? statements EOF
    | NL* in_statement eol? NL* EOF
    ;

in_statement
    : IN storage_expression? storage_identifier initializer_assignment?
    ;

/* A scope consists out of one or more statements, followed by an end of line
 * (either ';' or '\n'). The last statement in a scope may appear without an
 * end of line, to let the parser accept strings that do not end with eol's */

statements
    : statement* simple_statement?
    ;

statement
    : (identifier_statement eol?)
    | (simple_statement eol)
    | NL
    ;

simple_statement
    : use_statement
    | TIME? declaration
    ;

use_statement
    : USE TYPESYSTEM? storage_identifier
    | USE storage_identifier (AS storage_identifier)?
    ;

/* Nested scopes must be surrounded by curly braces. Nested scopes can only
 * occur after a declaration. At most one newline may separate a declaration
 * from a nested scope. */

scope
    : NL* '{' statements '}'
    ;

/* A single identifier is interpreted as declaration, provided that it is
 * disambiguated by a ';' */

identifier_statement
    : storage_identifier ';'
    ;

declaration
    : declaration_identifier_list scope?
    | storage_identifier scope
    | (storage_expression NL*)? function_identifier initializer_list? scope?
    | (storage_expression NL+)? declaration_identifier initializer_assignment scope?
    | storage_expression declaration_identifier initializer_assignment? scope?
    ;

declaration_identifier
    : storage_identifier
    | declaration_identifier_list
    ;

declaration_identifier_list
    : storage_identifier (',' NL* storage_identifier)+
    ;

function_identifier
    : storage_identifier argument_declaration
    ;

argument_declaration
    : '(' NL* argument (',' NL* argument)* ')'
    | '(' ')'
    ;

argument
    : inout? storage_expression REF? IDENTIFIER
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
    : '{' NL* initializer_list? NL* '}'
    ;

initializer_collection
    : '[' NL* initializer_list? NL* ']'
    ;

initializer_list
    : initializer_value (',' NL* initializer_value)*
    ;

initializer_value_expression
    : conditional_expression
    | inout
    | USE
    | AS
    | TYPESYSTEM
    ;

initializer_value
    : initializer_key ':' (initializer_expression | initializer_value_expression)
    | initializer_expression
    | initializer_value_expression
    ;

initializer_key
    : literal
    | storage_identifier
    | STRING
    | inout
    | USE
    | AS
    | BOOLEAN
    | TYPESYSTEM
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
    | NAN_LITERAL
    ;

storage_identifier
    : IDENTIFIER
    | SCOPE_IDENTIFIER
    | '<' initializer_list '>'
    ;

BOOLEAN
    : 'true' | 'false'
    ;

inout
    : IN | 'out' | 'inout'
    ;

IN : 'in' ;

USE : 'use' ;

AS : 'as' ;

TYPESYSTEM : 'typesystem' ;

REF : '&' ;

NULL_LITERAL
    : 'null'
    ;

NAN_LITERAL
    : 'nan'
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
    : '$'? LETTER_UNDERSCORE (LETTER_UNDERSCORE | DIGIT)*
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
    | ';'
    ;

NL  : '\r'? '\n'
    ;

WS: [ \t\r]+ -> skip;

TIME
    : '[' DIGIT DIGIT DIGIT DIGIT '-' DIGIT DIGIT '-' DIGIT DIGIT ' ' DIGIT ':' DIGIT ':' DIGIT ('.' DIGIT*)? ' ' LETTER* ']'
    | '[' DIGIT* '.' DIGIT* ']'
    ;

COMMENT
    : '/*' .*? '*/' -> skip
    ;

LINE_COMMENT
    : '//' ~[\r\n]* -> skip
    ;

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
