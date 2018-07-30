
// Generated from Corto.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif




class  CortoParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, BOOLEAN = 42, IN = 43, USE = 44, 
    AS = 45, TYPESYSTEM = 46, REF = 47, NULL_LITERAL = 48, NAN_LITERAL = 49, 
    COND_AND = 50, COND_OR = 51, COND_NOT = 52, IDENTIFIER = 53, SCOPE_IDENTIFIER = 54, 
    HEXADECIMAL = 55, SIGNED_INTEGER_MEASUREMENT = 56, INTEGER_MEASUREMENT = 57, 
    FLOATING_POINT_MEASUREMENT = 58, INTEGER = 59, SIGNED_INTEGER = 60, 
    FLOATING_POINT = 61, STRING = 62, NL = 63, WS = 64, TIME = 65, COMMENT = 66, 
    LINE_COMMENT = 67
  };

  enum {
    RuleProgram = 0, RuleIn_statement = 1, RuleStatements = 2, RuleStatement = 3, 
    RuleSimple_statement = 4, RuleUse_statement = 5, RuleScope = 6, RuleIdentifier_statement = 7, 
    RuleDeclaration = 8, RuleDeclaration_identifier = 9, RuleDeclaration_identifier_list = 10, 
    RuleFunction_identifier = 11, RuleArgument_declaration = 12, RuleArgument = 13, 
    RuleExpression = 14, RuleAssignment_expression = 15, RuleAssignment_operator = 16, 
    RuleConditional_expression = 17, RuleLogical_or_expression = 18, RuleLogical_and_expression = 19, 
    RuleOr_expression = 20, RuleXor_expression = 21, RuleAnd_expression = 22, 
    RuleEquality_expression = 23, RuleEquality_operator = 24, RuleRelational_expression = 25, 
    RuleRelational_operator = 26, RuleShift_expression = 27, RuleShift_operator = 28, 
    RuleAdditive_expression = 29, RuleAdditive_operator = 30, RuleMultiplicative_expression = 31, 
    RuleMultiplicative_operator = 32, RuleCast_expression = 33, RuleUnary_expression = 34, 
    RuleUnary_operator = 35, RulePostfix_expression = 36, RuleInc_operator = 37, 
    RuleStorage_expression = 38, RuleInitializer_assignment = 39, RuleInitializer_expression = 40, 
    RuleInitializer_composite = 41, RuleInitializer_collection = 42, RuleInitializer_list = 43, 
    RuleInitializer_value = 44, RuleInitializer_key = 45, RuleLiteral = 46, 
    RuleStorage_identifier = 47, RuleInout = 48, RuleEol = 49
  };

  CortoParser(antlr4::TokenStream *input);
  ~CortoParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class In_statementContext;
  class StatementsContext;
  class StatementContext;
  class Simple_statementContext;
  class Use_statementContext;
  class ScopeContext;
  class Identifier_statementContext;
  class DeclarationContext;
  class Declaration_identifierContext;
  class Declaration_identifier_listContext;
  class Function_identifierContext;
  class Argument_declarationContext;
  class ArgumentContext;
  class ExpressionContext;
  class Assignment_expressionContext;
  class Assignment_operatorContext;
  class Conditional_expressionContext;
  class Logical_or_expressionContext;
  class Logical_and_expressionContext;
  class Or_expressionContext;
  class Xor_expressionContext;
  class And_expressionContext;
  class Equality_expressionContext;
  class Equality_operatorContext;
  class Relational_expressionContext;
  class Relational_operatorContext;
  class Shift_expressionContext;
  class Shift_operatorContext;
  class Additive_expressionContext;
  class Additive_operatorContext;
  class Multiplicative_expressionContext;
  class Multiplicative_operatorContext;
  class Cast_expressionContext;
  class Unary_expressionContext;
  class Unary_operatorContext;
  class Postfix_expressionContext;
  class Inc_operatorContext;
  class Storage_expressionContext;
  class Initializer_assignmentContext;
  class Initializer_expressionContext;
  class Initializer_compositeContext;
  class Initializer_collectionContext;
  class Initializer_listContext;
  class Initializer_valueContext;
  class Initializer_keyContext;
  class LiteralContext;
  class Storage_identifierContext;
  class InoutContext;
  class EolContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    In_statementContext *in_statement();
    EolContext *eol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  In_statementContext : public antlr4::ParserRuleContext {
  public:
    In_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    Storage_identifierContext *storage_identifier();
    Storage_expressionContext *storage_expression();
    Initializer_assignmentContext *initializer_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  In_statementContext* in_statement();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    Simple_statementContext *simple_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifier_statementContext *identifier_statement();
    EolContext *eol();
    Simple_statementContext *simple_statement();
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Simple_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Use_statementContext *use_statement();
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_statementContext* simple_statement();

  class  Use_statementContext : public antlr4::ParserRuleContext {
  public:
    Use_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<Storage_identifierContext *> storage_identifier();
    Storage_identifierContext* storage_identifier(size_t i);
    antlr4::tree::TerminalNode *TYPESYSTEM();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_statementContext* use_statement();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementsContext *statements();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  Identifier_statementContext : public antlr4::ParserRuleContext {
  public:
    Identifier_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_identifierContext *storage_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_statementContext* identifier_statement();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Declaration_identifier_listContext *declaration_identifier_list();
    ScopeContext *scope();
    Storage_identifierContext *storage_identifier();
    Function_identifierContext *function_identifier();
    Storage_expressionContext *storage_expression();
    Initializer_listContext *initializer_list();
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    Declaration_identifierContext *declaration_identifier();
    Initializer_assignmentContext *initializer_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Declaration_identifierContext : public antlr4::ParserRuleContext {
  public:
    Declaration_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_identifierContext *storage_identifier();
    Declaration_identifier_listContext *declaration_identifier_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_identifierContext* declaration_identifier();

  class  Declaration_identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Declaration_identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Storage_identifierContext *> storage_identifier();
    Storage_identifierContext* storage_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_identifier_listContext* declaration_identifier_list();

  class  Function_identifierContext : public antlr4::ParserRuleContext {
  public:
    Function_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_identifierContext *storage_identifier();
    Argument_declarationContext *argument_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_identifierContext* function_identifier();

  class  Argument_declarationContext : public antlr4::ParserRuleContext {
  public:
    Argument_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Argument_declarationContext* argument_declaration();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_expressionContext *storage_expression();
    antlr4::tree::TerminalNode *IDENTIFIER();
    InoutContext *inout();
    antlr4::tree::TerminalNode *REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_expressionContext *assignment_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Assignment_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_expressionContext *conditional_expression();
    Storage_expressionContext *storage_expression();
    Assignment_operatorContext *assignment_operator();
    Assignment_expressionContext *assignment_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_expressionContext* assignment_expression();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_operatorContext* assignment_operator();

  class  Conditional_expressionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_or_expressionContext *logical_or_expression();
    ExpressionContext *expression();
    Conditional_expressionContext *conditional_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_expressionContext* conditional_expression();

  class  Logical_or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logical_or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logical_and_expressionContext *logical_and_expression();
    Logical_or_expressionContext *logical_or_expression();
    antlr4::tree::TerminalNode *COND_OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_or_expressionContext* logical_or_expression();
  Logical_or_expressionContext* logical_or_expression(int precedence);
  class  Logical_and_expressionContext : public antlr4::ParserRuleContext {
  public:
    Logical_and_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_expressionContext *or_expression();
    Logical_and_expressionContext *logical_and_expression();
    antlr4::tree::TerminalNode *COND_AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logical_and_expressionContext* logical_and_expression();
  Logical_and_expressionContext* logical_and_expression(int precedence);
  class  Or_expressionContext : public antlr4::ParserRuleContext {
  public:
    Or_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Xor_expressionContext *xor_expression();
    Or_expressionContext *or_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_expressionContext* or_expression();
  Or_expressionContext* or_expression(int precedence);
  class  Xor_expressionContext : public antlr4::ParserRuleContext {
  public:
    Xor_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    And_expressionContext *and_expression();
    Xor_expressionContext *xor_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xor_expressionContext* xor_expression();
  Xor_expressionContext* xor_expression(int precedence);
  class  And_expressionContext : public antlr4::ParserRuleContext {
  public:
    And_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Equality_expressionContext *equality_expression();
    And_expressionContext *and_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_expressionContext* and_expression();
  And_expressionContext* and_expression(int precedence);
  class  Equality_expressionContext : public antlr4::ParserRuleContext {
  public:
    Equality_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Relational_expressionContext *relational_expression();
    Equality_expressionContext *equality_expression();
    Equality_operatorContext *equality_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Equality_expressionContext* equality_expression();
  Equality_expressionContext* equality_expression(int precedence);
  class  Equality_operatorContext : public antlr4::ParserRuleContext {
  public:
    Equality_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Equality_operatorContext* equality_operator();

  class  Relational_expressionContext : public antlr4::ParserRuleContext {
  public:
    Relational_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Shift_expressionContext *shift_expression();
    Relational_expressionContext *relational_expression();
    Relational_operatorContext *relational_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_expressionContext* relational_expression();
  Relational_expressionContext* relational_expression(int precedence);
  class  Relational_operatorContext : public antlr4::ParserRuleContext {
  public:
    Relational_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_operatorContext* relational_operator();

  class  Shift_expressionContext : public antlr4::ParserRuleContext {
  public:
    Shift_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Additive_expressionContext *additive_expression();
    Shift_expressionContext *shift_expression();
    Shift_operatorContext *shift_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_expressionContext* shift_expression();
  Shift_expressionContext* shift_expression(int precedence);
  class  Shift_operatorContext : public antlr4::ParserRuleContext {
  public:
    Shift_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Shift_operatorContext* shift_operator();

  class  Additive_expressionContext : public antlr4::ParserRuleContext {
  public:
    Additive_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multiplicative_expressionContext *multiplicative_expression();
    Additive_expressionContext *additive_expression();
    Additive_operatorContext *additive_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_expressionContext* additive_expression();
  Additive_expressionContext* additive_expression(int precedence);
  class  Additive_operatorContext : public antlr4::ParserRuleContext {
  public:
    Additive_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_operatorContext* additive_operator();

  class  Multiplicative_expressionContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cast_expressionContext *cast_expression();
    Multiplicative_expressionContext *multiplicative_expression();
    Multiplicative_operatorContext *multiplicative_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_expressionContext* multiplicative_expression();
  Multiplicative_expressionContext* multiplicative_expression(int precedence);
  class  Multiplicative_operatorContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_operatorContext* multiplicative_operator();

  class  Cast_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cast_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_expressionContext *unary_expression();
    Storage_expressionContext *storage_expression();
    Cast_expressionContext *cast_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cast_expressionContext* cast_expression();

  class  Unary_expressionContext : public antlr4::ParserRuleContext {
  public:
    Unary_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_expressionContext *postfix_expression();
    Inc_operatorContext *inc_operator();
    Unary_expressionContext *unary_expression();
    Unary_operatorContext *unary_operator();
    Cast_expressionContext *cast_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_expressionContext* unary_expression();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COND_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  Postfix_expressionContext : public antlr4::ParserRuleContext {
  public:
    Postfix_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    Storage_expressionContext *storage_expression();
    ExpressionContext *expression();
    Postfix_expressionContext *postfix_expression();
    Inc_operatorContext *inc_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Postfix_expressionContext* postfix_expression();
  Postfix_expressionContext* postfix_expression(int precedence);
  class  Inc_operatorContext : public antlr4::ParserRuleContext {
  public:
    Inc_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_operatorContext* inc_operator();

  class  Storage_expressionContext : public antlr4::ParserRuleContext {
  public:
    Storage_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Storage_identifierContext *storage_identifier();
    Storage_expressionContext *storage_expression();
    Initializer_collectionContext *initializer_collection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storage_expressionContext* storage_expression();
  Storage_expressionContext* storage_expression(int precedence);
  class  Initializer_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Initializer_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_listContext *initializer_list();
    Initializer_expressionContext *initializer_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_assignmentContext* initializer_assignment();

  class  Initializer_expressionContext : public antlr4::ParserRuleContext {
  public:
    Initializer_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_compositeContext *initializer_composite();
    Initializer_collectionContext *initializer_collection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_expressionContext* initializer_expression();

  class  Initializer_compositeContext : public antlr4::ParserRuleContext {
  public:
    Initializer_compositeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    Initializer_listContext *initializer_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_compositeContext* initializer_composite();

  class  Initializer_collectionContext : public antlr4::ParserRuleContext {
  public:
    Initializer_collectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);
    Initializer_listContext *initializer_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_collectionContext* initializer_collection();

  class  Initializer_listContext : public antlr4::ParserRuleContext {
  public:
    Initializer_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Initializer_valueContext *> initializer_value();
    Initializer_valueContext* initializer_value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NL();
    antlr4::tree::TerminalNode* NL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_listContext* initializer_list();

  class  Initializer_valueContext : public antlr4::ParserRuleContext {
  public:
    Initializer_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Initializer_keyContext *initializer_key();
    Initializer_expressionContext *initializer_expression();
    Conditional_expressionContext *conditional_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_valueContext* initializer_value();

  class  Initializer_keyContext : public antlr4::ParserRuleContext {
  public:
    Initializer_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    Storage_identifierContext *storage_identifier();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initializer_keyContext* initializer_key();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *HEXADECIMAL();
    antlr4::tree::TerminalNode *FLOATING_POINT_MEASUREMENT();
    antlr4::tree::TerminalNode *SIGNED_INTEGER_MEASUREMENT();
    antlr4::tree::TerminalNode *INTEGER_MEASUREMENT();
    antlr4::tree::TerminalNode *SIGNED_INTEGER();
    antlr4::tree::TerminalNode *FLOATING_POINT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *NULL_LITERAL();
    antlr4::tree::TerminalNode *NAN_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  Storage_identifierContext : public antlr4::ParserRuleContext {
  public:
    Storage_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *SCOPE_IDENTIFIER();
    Initializer_listContext *initializer_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Storage_identifierContext* storage_identifier();

  class  InoutContext : public antlr4::ParserRuleContext {
  public:
    InoutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InoutContext* inout();

  class  EolContext : public antlr4::ParserRuleContext {
  public:
    EolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EolContext* eol();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool logical_or_expressionSempred(Logical_or_expressionContext *_localctx, size_t predicateIndex);
  bool logical_and_expressionSempred(Logical_and_expressionContext *_localctx, size_t predicateIndex);
  bool or_expressionSempred(Or_expressionContext *_localctx, size_t predicateIndex);
  bool xor_expressionSempred(Xor_expressionContext *_localctx, size_t predicateIndex);
  bool and_expressionSempred(And_expressionContext *_localctx, size_t predicateIndex);
  bool equality_expressionSempred(Equality_expressionContext *_localctx, size_t predicateIndex);
  bool relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex);
  bool shift_expressionSempred(Shift_expressionContext *_localctx, size_t predicateIndex);
  bool additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex);
  bool multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex);
  bool postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex);
  bool storage_expressionSempred(Storage_expressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

