
// Generated from Corto.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CortoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CortoParser.
 */
class  CortoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CortoParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CortoParser::ProgramContext *ctx) = 0;

  virtual void enterIn_statement(CortoParser::In_statementContext *ctx) = 0;
  virtual void exitIn_statement(CortoParser::In_statementContext *ctx) = 0;

  virtual void enterStatements(CortoParser::StatementsContext *ctx) = 0;
  virtual void exitStatements(CortoParser::StatementsContext *ctx) = 0;

  virtual void enterStatement(CortoParser::StatementContext *ctx) = 0;
  virtual void exitStatement(CortoParser::StatementContext *ctx) = 0;

  virtual void enterSimple_statement(CortoParser::Simple_statementContext *ctx) = 0;
  virtual void exitSimple_statement(CortoParser::Simple_statementContext *ctx) = 0;

  virtual void enterUse_statement(CortoParser::Use_statementContext *ctx) = 0;
  virtual void exitUse_statement(CortoParser::Use_statementContext *ctx) = 0;

  virtual void enterScope(CortoParser::ScopeContext *ctx) = 0;
  virtual void exitScope(CortoParser::ScopeContext *ctx) = 0;

  virtual void enterIdentifier_statement(CortoParser::Identifier_statementContext *ctx) = 0;
  virtual void exitIdentifier_statement(CortoParser::Identifier_statementContext *ctx) = 0;

  virtual void enterDeclaration(CortoParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CortoParser::DeclarationContext *ctx) = 0;

  virtual void enterDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) = 0;
  virtual void exitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) = 0;

  virtual void enterDeclaration_identifier_list(CortoParser::Declaration_identifier_listContext *ctx) = 0;
  virtual void exitDeclaration_identifier_list(CortoParser::Declaration_identifier_listContext *ctx) = 0;

  virtual void enterFunction_identifier(CortoParser::Function_identifierContext *ctx) = 0;
  virtual void exitFunction_identifier(CortoParser::Function_identifierContext *ctx) = 0;

  virtual void enterArgument_declaration(CortoParser::Argument_declarationContext *ctx) = 0;
  virtual void exitArgument_declaration(CortoParser::Argument_declarationContext *ctx) = 0;

  virtual void enterArgument(CortoParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(CortoParser::ArgumentContext *ctx) = 0;

  virtual void enterExpression(CortoParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(CortoParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment_expression(CortoParser::Assignment_expressionContext *ctx) = 0;
  virtual void exitAssignment_expression(CortoParser::Assignment_expressionContext *ctx) = 0;

  virtual void enterAssignment_operator(CortoParser::Assignment_operatorContext *ctx) = 0;
  virtual void exitAssignment_operator(CortoParser::Assignment_operatorContext *ctx) = 0;

  virtual void enterConditional_expression(CortoParser::Conditional_expressionContext *ctx) = 0;
  virtual void exitConditional_expression(CortoParser::Conditional_expressionContext *ctx) = 0;

  virtual void enterLogical_or_expression(CortoParser::Logical_or_expressionContext *ctx) = 0;
  virtual void exitLogical_or_expression(CortoParser::Logical_or_expressionContext *ctx) = 0;

  virtual void enterLogical_and_expression(CortoParser::Logical_and_expressionContext *ctx) = 0;
  virtual void exitLogical_and_expression(CortoParser::Logical_and_expressionContext *ctx) = 0;

  virtual void enterOr_expression(CortoParser::Or_expressionContext *ctx) = 0;
  virtual void exitOr_expression(CortoParser::Or_expressionContext *ctx) = 0;

  virtual void enterXor_expression(CortoParser::Xor_expressionContext *ctx) = 0;
  virtual void exitXor_expression(CortoParser::Xor_expressionContext *ctx) = 0;

  virtual void enterAnd_expression(CortoParser::And_expressionContext *ctx) = 0;
  virtual void exitAnd_expression(CortoParser::And_expressionContext *ctx) = 0;

  virtual void enterEquality_expression(CortoParser::Equality_expressionContext *ctx) = 0;
  virtual void exitEquality_expression(CortoParser::Equality_expressionContext *ctx) = 0;

  virtual void enterEquality_operator(CortoParser::Equality_operatorContext *ctx) = 0;
  virtual void exitEquality_operator(CortoParser::Equality_operatorContext *ctx) = 0;

  virtual void enterRelational_expression(CortoParser::Relational_expressionContext *ctx) = 0;
  virtual void exitRelational_expression(CortoParser::Relational_expressionContext *ctx) = 0;

  virtual void enterRelational_operator(CortoParser::Relational_operatorContext *ctx) = 0;
  virtual void exitRelational_operator(CortoParser::Relational_operatorContext *ctx) = 0;

  virtual void enterShift_expression(CortoParser::Shift_expressionContext *ctx) = 0;
  virtual void exitShift_expression(CortoParser::Shift_expressionContext *ctx) = 0;

  virtual void enterShift_operator(CortoParser::Shift_operatorContext *ctx) = 0;
  virtual void exitShift_operator(CortoParser::Shift_operatorContext *ctx) = 0;

  virtual void enterAdditive_expression(CortoParser::Additive_expressionContext *ctx) = 0;
  virtual void exitAdditive_expression(CortoParser::Additive_expressionContext *ctx) = 0;

  virtual void enterAdditive_operator(CortoParser::Additive_operatorContext *ctx) = 0;
  virtual void exitAdditive_operator(CortoParser::Additive_operatorContext *ctx) = 0;

  virtual void enterMultiplicative_expression(CortoParser::Multiplicative_expressionContext *ctx) = 0;
  virtual void exitMultiplicative_expression(CortoParser::Multiplicative_expressionContext *ctx) = 0;

  virtual void enterMultiplicative_operator(CortoParser::Multiplicative_operatorContext *ctx) = 0;
  virtual void exitMultiplicative_operator(CortoParser::Multiplicative_operatorContext *ctx) = 0;

  virtual void enterCast_expression(CortoParser::Cast_expressionContext *ctx) = 0;
  virtual void exitCast_expression(CortoParser::Cast_expressionContext *ctx) = 0;

  virtual void enterUnary_expression(CortoParser::Unary_expressionContext *ctx) = 0;
  virtual void exitUnary_expression(CortoParser::Unary_expressionContext *ctx) = 0;

  virtual void enterUnary_operator(CortoParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(CortoParser::Unary_operatorContext *ctx) = 0;

  virtual void enterPostfix_expression(CortoParser::Postfix_expressionContext *ctx) = 0;
  virtual void exitPostfix_expression(CortoParser::Postfix_expressionContext *ctx) = 0;

  virtual void enterInc_operator(CortoParser::Inc_operatorContext *ctx) = 0;
  virtual void exitInc_operator(CortoParser::Inc_operatorContext *ctx) = 0;

  virtual void enterStorage_expression(CortoParser::Storage_expressionContext *ctx) = 0;
  virtual void exitStorage_expression(CortoParser::Storage_expressionContext *ctx) = 0;

  virtual void enterInitializer_assignment(CortoParser::Initializer_assignmentContext *ctx) = 0;
  virtual void exitInitializer_assignment(CortoParser::Initializer_assignmentContext *ctx) = 0;

  virtual void enterInitializer_expression(CortoParser::Initializer_expressionContext *ctx) = 0;
  virtual void exitInitializer_expression(CortoParser::Initializer_expressionContext *ctx) = 0;

  virtual void enterInitializer_composite(CortoParser::Initializer_compositeContext *ctx) = 0;
  virtual void exitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) = 0;

  virtual void enterInitializer_collection(CortoParser::Initializer_collectionContext *ctx) = 0;
  virtual void exitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) = 0;

  virtual void enterInitializer_list(CortoParser::Initializer_listContext *ctx) = 0;
  virtual void exitInitializer_list(CortoParser::Initializer_listContext *ctx) = 0;

  virtual void enterInitializer_value_expression(CortoParser::Initializer_value_expressionContext *ctx) = 0;
  virtual void exitInitializer_value_expression(CortoParser::Initializer_value_expressionContext *ctx) = 0;

  virtual void enterInitializer_value(CortoParser::Initializer_valueContext *ctx) = 0;
  virtual void exitInitializer_value(CortoParser::Initializer_valueContext *ctx) = 0;

  virtual void enterInitializer_key(CortoParser::Initializer_keyContext *ctx) = 0;
  virtual void exitInitializer_key(CortoParser::Initializer_keyContext *ctx) = 0;

  virtual void enterLiteral(CortoParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CortoParser::LiteralContext *ctx) = 0;

  virtual void enterStorage_identifier(CortoParser::Storage_identifierContext *ctx) = 0;
  virtual void exitStorage_identifier(CortoParser::Storage_identifierContext *ctx) = 0;

  virtual void enterInout(CortoParser::InoutContext *ctx) = 0;
  virtual void exitInout(CortoParser::InoutContext *ctx) = 0;

  virtual void enterEol(CortoParser::EolContext *ctx) = 0;
  virtual void exitEol(CortoParser::EolContext *ctx) = 0;


};

