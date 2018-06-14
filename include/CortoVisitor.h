
// Generated from Corto.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CortoParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CortoParser.
 */
class  CortoVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CortoParser.
   */
    virtual antlrcpp::Any visitProgram(CortoParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatements(CortoParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatement(CortoParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitScope_statement(CortoParser::Scope_statementContext *context) = 0;

    virtual antlrcpp::Any visitScope(CortoParser::ScopeContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(CortoParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunction_identifier(CortoParser::Function_identifierContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_identifier(CortoParser::Declaration_identifierContext *context) = 0;

    virtual antlrcpp::Any visitArgument_declaration(CortoParser::Argument_declarationContext *context) = 0;

    virtual antlrcpp::Any visitArgument(CortoParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitExpression(CortoParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_expression(CortoParser::Assignment_expressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_operator(CortoParser::Assignment_operatorContext *context) = 0;

    virtual antlrcpp::Any visitConditional_expression(CortoParser::Conditional_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_or_expression(CortoParser::Logical_or_expressionContext *context) = 0;

    virtual antlrcpp::Any visitLogical_and_expression(CortoParser::Logical_and_expressionContext *context) = 0;

    virtual antlrcpp::Any visitOr_expression(CortoParser::Or_expressionContext *context) = 0;

    virtual antlrcpp::Any visitXor_expression(CortoParser::Xor_expressionContext *context) = 0;

    virtual antlrcpp::Any visitAnd_expression(CortoParser::And_expressionContext *context) = 0;

    virtual antlrcpp::Any visitEquality_expression(CortoParser::Equality_expressionContext *context) = 0;

    virtual antlrcpp::Any visitEquality_operator(CortoParser::Equality_operatorContext *context) = 0;

    virtual antlrcpp::Any visitRelational_expression(CortoParser::Relational_expressionContext *context) = 0;

    virtual antlrcpp::Any visitRelational_operator(CortoParser::Relational_operatorContext *context) = 0;

    virtual antlrcpp::Any visitShift_expression(CortoParser::Shift_expressionContext *context) = 0;

    virtual antlrcpp::Any visitShift_operator(CortoParser::Shift_operatorContext *context) = 0;

    virtual antlrcpp::Any visitAdditive_expression(CortoParser::Additive_expressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditive_operator(CortoParser::Additive_operatorContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicative_expression(CortoParser::Multiplicative_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicative_operator(CortoParser::Multiplicative_operatorContext *context) = 0;

    virtual antlrcpp::Any visitCast_expression(CortoParser::Cast_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUnary_expression(CortoParser::Unary_expressionContext *context) = 0;

    virtual antlrcpp::Any visitUnary_operator(CortoParser::Unary_operatorContext *context) = 0;

    virtual antlrcpp::Any visitPostfix_expression(CortoParser::Postfix_expressionContext *context) = 0;

    virtual antlrcpp::Any visitInc_operator(CortoParser::Inc_operatorContext *context) = 0;

    virtual antlrcpp::Any visitStorage_expression(CortoParser::Storage_expressionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_assignment(CortoParser::Initializer_assignmentContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_expression(CortoParser::Initializer_expressionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_composite(CortoParser::Initializer_compositeContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_collection(CortoParser::Initializer_collectionContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_list(CortoParser::Initializer_listContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_value(CortoParser::Initializer_valueContext *context) = 0;

    virtual antlrcpp::Any visitInitializer_key(CortoParser::Initializer_keyContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(CortoParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitStorage_identifier(CortoParser::Storage_identifierContext *context) = 0;

    virtual antlrcpp::Any visitEol(CortoParser::EolContext *context) = 0;


};

