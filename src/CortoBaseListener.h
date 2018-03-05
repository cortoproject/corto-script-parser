
// Generated from Corto.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "CortoListener.h"


/**
 * This class provides an empty implementation of CortoListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CortoBaseListener : public CortoListener {
public:

  virtual void enterProgram(CortoParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CortoParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatements(CortoParser::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(CortoParser::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(CortoParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(CortoParser::StatementContext * /*ctx*/) override { }

  virtual void enterSimple_statement(CortoParser::Simple_statementContext * /*ctx*/) override { }
  virtual void exitSimple_statement(CortoParser::Simple_statementContext * /*ctx*/) override { }

  virtual void enterComplex_statement(CortoParser::Complex_statementContext * /*ctx*/) override { }
  virtual void exitComplex_statement(CortoParser::Complex_statementContext * /*ctx*/) override { }

  virtual void enterDeclaration(CortoParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CortoParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterDeclaration_identifier(CortoParser::Declaration_identifierContext * /*ctx*/) override { }
  virtual void exitDeclaration_identifier(CortoParser::Declaration_identifierContext * /*ctx*/) override { }

  virtual void enterArgument_declaration(CortoParser::Argument_declarationContext * /*ctx*/) override { }
  virtual void exitArgument_declaration(CortoParser::Argument_declarationContext * /*ctx*/) override { }

  virtual void enterArgument(CortoParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(CortoParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterScope(CortoParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(CortoParser::ScopeContext * /*ctx*/) override { }

  virtual void enterExpression(CortoParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(CortoParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment_expression(CortoParser::Assignment_expressionContext * /*ctx*/) override { }
  virtual void exitAssignment_expression(CortoParser::Assignment_expressionContext * /*ctx*/) override { }

  virtual void enterAssignment_operator(CortoParser::Assignment_operatorContext * /*ctx*/) override { }
  virtual void exitAssignment_operator(CortoParser::Assignment_operatorContext * /*ctx*/) override { }

  virtual void enterConditional_expression(CortoParser::Conditional_expressionContext * /*ctx*/) override { }
  virtual void exitConditional_expression(CortoParser::Conditional_expressionContext * /*ctx*/) override { }

  virtual void enterLogical_or_expression(CortoParser::Logical_or_expressionContext * /*ctx*/) override { }
  virtual void exitLogical_or_expression(CortoParser::Logical_or_expressionContext * /*ctx*/) override { }

  virtual void enterLogical_and_expression(CortoParser::Logical_and_expressionContext * /*ctx*/) override { }
  virtual void exitLogical_and_expression(CortoParser::Logical_and_expressionContext * /*ctx*/) override { }

  virtual void enterOr_expression(CortoParser::Or_expressionContext * /*ctx*/) override { }
  virtual void exitOr_expression(CortoParser::Or_expressionContext * /*ctx*/) override { }

  virtual void enterXor_expression(CortoParser::Xor_expressionContext * /*ctx*/) override { }
  virtual void exitXor_expression(CortoParser::Xor_expressionContext * /*ctx*/) override { }

  virtual void enterAnd_expression(CortoParser::And_expressionContext * /*ctx*/) override { }
  virtual void exitAnd_expression(CortoParser::And_expressionContext * /*ctx*/) override { }

  virtual void enterEquality_expression(CortoParser::Equality_expressionContext * /*ctx*/) override { }
  virtual void exitEquality_expression(CortoParser::Equality_expressionContext * /*ctx*/) override { }

  virtual void enterRelational_expression(CortoParser::Relational_expressionContext * /*ctx*/) override { }
  virtual void exitRelational_expression(CortoParser::Relational_expressionContext * /*ctx*/) override { }

  virtual void enterShift_expression(CortoParser::Shift_expressionContext * /*ctx*/) override { }
  virtual void exitShift_expression(CortoParser::Shift_expressionContext * /*ctx*/) override { }

  virtual void enterAdditive_expression(CortoParser::Additive_expressionContext * /*ctx*/) override { }
  virtual void exitAdditive_expression(CortoParser::Additive_expressionContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expression(CortoParser::Multiplicative_expressionContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expression(CortoParser::Multiplicative_expressionContext * /*ctx*/) override { }

  virtual void enterCast_expression(CortoParser::Cast_expressionContext * /*ctx*/) override { }
  virtual void exitCast_expression(CortoParser::Cast_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_expression(CortoParser::Unary_expressionContext * /*ctx*/) override { }
  virtual void exitUnary_expression(CortoParser::Unary_expressionContext * /*ctx*/) override { }

  virtual void enterUnary_operator(CortoParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(CortoParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterPostfix_expression(CortoParser::Postfix_expressionContext * /*ctx*/) override { }
  virtual void exitPostfix_expression(CortoParser::Postfix_expressionContext * /*ctx*/) override { }

  virtual void enterInitializer_assignment(CortoParser::Initializer_assignmentContext * /*ctx*/) override { }
  virtual void exitInitializer_assignment(CortoParser::Initializer_assignmentContext * /*ctx*/) override { }

  virtual void enterInitializer_expression(CortoParser::Initializer_expressionContext * /*ctx*/) override { }
  virtual void exitInitializer_expression(CortoParser::Initializer_expressionContext * /*ctx*/) override { }

  virtual void enterInitializer_composite(CortoParser::Initializer_compositeContext * /*ctx*/) override { }
  virtual void exitInitializer_composite(CortoParser::Initializer_compositeContext * /*ctx*/) override { }

  virtual void enterInitializer_collection(CortoParser::Initializer_collectionContext * /*ctx*/) override { }
  virtual void exitInitializer_collection(CortoParser::Initializer_collectionContext * /*ctx*/) override { }

  virtual void enterInitializer_list(CortoParser::Initializer_listContext * /*ctx*/) override { }
  virtual void exitInitializer_list(CortoParser::Initializer_listContext * /*ctx*/) override { }

  virtual void enterInitializer_value(CortoParser::Initializer_valueContext * /*ctx*/) override { }
  virtual void exitInitializer_value(CortoParser::Initializer_valueContext * /*ctx*/) override { }

  virtual void enterInitializer_key(CortoParser::Initializer_keyContext * /*ctx*/) override { }
  virtual void exitInitializer_key(CortoParser::Initializer_keyContext * /*ctx*/) override { }

  virtual void enterPrimary_expression(CortoParser::Primary_expressionContext * /*ctx*/) override { }
  virtual void exitPrimary_expression(CortoParser::Primary_expressionContext * /*ctx*/) override { }

  virtual void enterConstant(CortoParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(CortoParser::ConstantContext * /*ctx*/) override { }

  virtual void enterObject_expression(CortoParser::Object_expressionContext * /*ctx*/) override { }
  virtual void exitObject_expression(CortoParser::Object_expressionContext * /*ctx*/) override { }

  virtual void enterObject_identifier(CortoParser::Object_identifierContext * /*ctx*/) override { }
  virtual void exitObject_identifier(CortoParser::Object_identifierContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

