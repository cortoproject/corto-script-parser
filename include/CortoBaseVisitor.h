
// Generated from Corto.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CortoVisitor.h"


/**
 * This class provides an empty implementation of CortoVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CortoBaseVisitor : public CortoVisitor {
public:

  virtual antlrcpp::Any visitProgram(CortoParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(CortoParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(CortoParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope_statement(CortoParser::Scope_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScope(CortoParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(CortoParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_identifier(CortoParser::Function_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration_identifier(CortoParser::Declaration_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument_declaration(CortoParser::Argument_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(CortoParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(CortoParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_expression(CortoParser::Assignment_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_operator(CortoParser::Assignment_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditional_expression(CortoParser::Conditional_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_or_expression(CortoParser::Logical_or_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical_and_expression(CortoParser::Logical_and_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr_expression(CortoParser::Or_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXor_expression(CortoParser::Xor_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd_expression(CortoParser::And_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_expression(CortoParser::Equality_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality_operator(CortoParser::Equality_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_expression(CortoParser::Relational_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelational_operator(CortoParser::Relational_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShift_expression(CortoParser::Shift_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShift_operator(CortoParser::Shift_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditive_expression(CortoParser::Additive_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdditive_operator(CortoParser::Additive_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicative_expression(CortoParser::Multiplicative_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicative_operator(CortoParser::Multiplicative_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCast_expression(CortoParser::Cast_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_expression(CortoParser::Unary_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_operator(CortoParser::Unary_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfix_expression(CortoParser::Postfix_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInc_operator(CortoParser::Inc_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorage_expression(CortoParser::Storage_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_assignment(CortoParser::Initializer_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_expression(CortoParser::Initializer_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_composite(CortoParser::Initializer_compositeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_collection(CortoParser::Initializer_collectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_list(CortoParser::Initializer_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_value(CortoParser::Initializer_valueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializer_key(CortoParser::Initializer_keyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(CortoParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStorage_identifier(CortoParser::Storage_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEol(CortoParser::EolContext *ctx) override {
    return visitChildren(ctx);
  }


};

