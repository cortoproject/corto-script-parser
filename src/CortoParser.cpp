
// Generated from Corto.g4 by ANTLR 4.7.1


#include "CortoListener.h"
#include "CortoVisitor.h"

#include "CortoParser.h"


#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif


using namespace antlrcpp;
using namespace antlr4;

CortoParser::CortoParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CortoParser::~CortoParser() {
  delete _interpreter;
}

std::string CortoParser::getGrammarFileName() const {
  return "Corto.g4";
}

const std::vector<std::string>& CortoParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CortoParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

CortoParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::StatementsContext* CortoParser::ProgramContext::statements() {
  return getRuleContext<CortoParser::StatementsContext>(0);
}


size_t CortoParser::ProgramContext::getRuleIndex() const {
  return CortoParser::RuleProgram;
}

void CortoParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void CortoParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any CortoParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ProgramContext* CortoParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CortoParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    statements();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

CortoParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::StatementContext *> CortoParser::StatementsContext::statement() {
  return getRuleContexts<CortoParser::StatementContext>();
}

CortoParser::StatementContext* CortoParser::StatementsContext::statement(size_t i) {
  return getRuleContext<CortoParser::StatementContext>(i);
}


size_t CortoParser::StatementsContext::getRuleIndex() const {
  return CortoParser::RuleStatements;
}

void CortoParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void CortoParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any CortoParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::StatementsContext* CortoParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, CortoParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__1)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__31)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__36)
      | (1ULL << CortoParser::T__37)
      | (1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39)
      | (1ULL << CortoParser::T__43)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::MEASUREMENT)
      | (1ULL << CortoParser::NUMERICAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::CHARACTER)
      | (1ULL << CortoParser::STRING)
      | (1ULL << CortoParser::EOL))) != 0)) {
      setState(76);
      statement();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CortoParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::StatementContext::EOL() {
  return getToken(CortoParser::EOL, 0);
}

CortoParser::ExpressionContext* CortoParser::StatementContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::DeclarationContext* CortoParser::StatementContext::declaration() {
  return getRuleContext<CortoParser::DeclarationContext>(0);
}


size_t CortoParser::StatementContext::getRuleIndex() const {
  return CortoParser::RuleStatement;
}

void CortoParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void CortoParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any CortoParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::StatementContext* CortoParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, CortoParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      match(CortoParser::EOL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      expression();
      setState(84);
      match(CortoParser::EOL);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(86);
      declaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

CortoParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Declaration_identifierContext* CortoParser::DeclarationContext::declaration_identifier() {
  return getRuleContext<CortoParser::Declaration_identifierContext>(0);
}

CortoParser::ScopeContext* CortoParser::DeclarationContext::scope() {
  return getRuleContext<CortoParser::ScopeContext>(0);
}

tree::TerminalNode* CortoParser::DeclarationContext::EOL() {
  return getToken(CortoParser::EOL, 0);
}

CortoParser::Object_expressionContext* CortoParser::DeclarationContext::object_expression() {
  return getRuleContext<CortoParser::Object_expressionContext>(0);
}

CortoParser::Initializer_assignmentContext* CortoParser::DeclarationContext::initializer_assignment() {
  return getRuleContext<CortoParser::Initializer_assignmentContext>(0);
}


size_t CortoParser::DeclarationContext::getRuleIndex() const {
  return CortoParser::RuleDeclaration;
}

void CortoParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void CortoParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any CortoParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::DeclarationContext* CortoParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CortoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(89);
      object_expression();
      break;
    }

    }
    setState(92);
    declaration_identifier();
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__1)
      | (1ULL << CortoParser::T__17)
      | (1ULL << CortoParser::T__40))) != 0)) {
      setState(93);
      initializer_assignment();
    }
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__3: {
        setState(96);
        scope();
        break;
      }

      case CortoParser::EOL: {
        setState(97);
        match(CortoParser::EOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_identifierContext ------------------------------------------------------------------

CortoParser::Declaration_identifierContext::Declaration_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::Object_identifierContext *> CortoParser::Declaration_identifierContext::object_identifier() {
  return getRuleContexts<CortoParser::Object_identifierContext>();
}

CortoParser::Object_identifierContext* CortoParser::Declaration_identifierContext::object_identifier(size_t i) {
  return getRuleContext<CortoParser::Object_identifierContext>(i);
}

CortoParser::Argument_declarationContext* CortoParser::Declaration_identifierContext::argument_declaration() {
  return getRuleContext<CortoParser::Argument_declarationContext>(0);
}

std::vector<CortoParser::Object_expressionContext *> CortoParser::Declaration_identifierContext::object_expression() {
  return getRuleContexts<CortoParser::Object_expressionContext>();
}

CortoParser::Object_expressionContext* CortoParser::Declaration_identifierContext::object_expression(size_t i) {
  return getRuleContext<CortoParser::Object_expressionContext>(i);
}


size_t CortoParser::Declaration_identifierContext::getRuleIndex() const {
  return CortoParser::RuleDeclaration_identifier;
}

void CortoParser::Declaration_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_identifier(this);
}

void CortoParser::Declaration_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_identifier(this);
}


antlrcpp::Any CortoParser::Declaration_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitDeclaration_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Declaration_identifierContext* CortoParser::declaration_identifier() {
  Declaration_identifierContext *_localctx = _tracker.createInstance<Declaration_identifierContext>(_ctx, getState());
  enterRule(_localctx, 8, CortoParser::RuleDeclaration_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(100);
      object_identifier();
      setState(102);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(101);
        argument_declaration();
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      object_identifier();
      setState(107); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(105);
        match(CortoParser::T__0);
        setState(106);
        object_identifier();
        setState(109); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CortoParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(111);
      object_expression();
      setState(114); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(112);
        match(CortoParser::T__0);
        setState(113);
        object_expression();
        setState(116); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == CortoParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_declarationContext ------------------------------------------------------------------

CortoParser::Argument_declarationContext::Argument_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::ArgumentContext *> CortoParser::Argument_declarationContext::argument() {
  return getRuleContexts<CortoParser::ArgumentContext>();
}

CortoParser::ArgumentContext* CortoParser::Argument_declarationContext::argument(size_t i) {
  return getRuleContext<CortoParser::ArgumentContext>(i);
}


size_t CortoParser::Argument_declarationContext::getRuleIndex() const {
  return CortoParser::RuleArgument_declaration;
}

void CortoParser::Argument_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument_declaration(this);
}

void CortoParser::Argument_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument_declaration(this);
}


antlrcpp::Any CortoParser::Argument_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitArgument_declaration(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Argument_declarationContext* CortoParser::argument_declaration() {
  Argument_declarationContext *_localctx = _tracker.createInstance<Argument_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, CortoParser::RuleArgument_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(120);
      match(CortoParser::T__1);
      setState(121);
      argument();
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CortoParser::T__0) {
        setState(122);
        match(CortoParser::T__0);
        setState(123);
        argument();
        setState(128);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(129);
      match(CortoParser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      match(CortoParser::T__1);
      setState(132);
      match(CortoParser::T__2);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

CortoParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Object_expressionContext* CortoParser::ArgumentContext::object_expression() {
  return getRuleContext<CortoParser::Object_expressionContext>(0);
}

tree::TerminalNode* CortoParser::ArgumentContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}


size_t CortoParser::ArgumentContext::getRuleIndex() const {
  return CortoParser::RuleArgument;
}

void CortoParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void CortoParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}


antlrcpp::Any CortoParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ArgumentContext* CortoParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 12, CortoParser::RuleArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    object_expression();
    setState(136);
    match(CortoParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

CortoParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::StatementsContext* CortoParser::ScopeContext::statements() {
  return getRuleContext<CortoParser::StatementsContext>(0);
}


size_t CortoParser::ScopeContext::getRuleIndex() const {
  return CortoParser::RuleScope;
}

void CortoParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void CortoParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


antlrcpp::Any CortoParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ScopeContext* CortoParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 14, CortoParser::RuleScope);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(CortoParser::T__3);
    setState(139);
    statements();
    setState(140);
    match(CortoParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

CortoParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Assignment_expressionContext* CortoParser::ExpressionContext::assignment_expression() {
  return getRuleContext<CortoParser::Assignment_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::ExpressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}


size_t CortoParser::ExpressionContext::getRuleIndex() const {
  return CortoParser::RuleExpression;
}

void CortoParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void CortoParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any CortoParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ExpressionContext* CortoParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, CortoParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      assignment_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(143);
      match(CortoParser::T__1);
      setState(144);
      expression();
      setState(145);
      match(CortoParser::T__2);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_expressionContext ------------------------------------------------------------------

CortoParser::Assignment_expressionContext::Assignment_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Conditional_expressionContext* CortoParser::Assignment_expressionContext::conditional_expression() {
  return getRuleContext<CortoParser::Conditional_expressionContext>(0);
}

CortoParser::Unary_expressionContext* CortoParser::Assignment_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

CortoParser::Assignment_operatorContext* CortoParser::Assignment_expressionContext::assignment_operator() {
  return getRuleContext<CortoParser::Assignment_operatorContext>(0);
}

CortoParser::Assignment_expressionContext* CortoParser::Assignment_expressionContext::assignment_expression() {
  return getRuleContext<CortoParser::Assignment_expressionContext>(0);
}


size_t CortoParser::Assignment_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAssignment_expression;
}

void CortoParser::Assignment_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_expression(this);
}

void CortoParser::Assignment_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_expression(this);
}


antlrcpp::Any CortoParser::Assignment_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAssignment_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Assignment_expressionContext* CortoParser::assignment_expression() {
  Assignment_expressionContext *_localctx = _tracker.createInstance<Assignment_expressionContext>(_ctx, getState());
  enterRule(_localctx, 18, CortoParser::RuleAssignment_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(149);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(150);
      unary_expression();
      setState(151);
      assignment_operator();
      setState(152);
      assignment_expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_operatorContext ------------------------------------------------------------------

CortoParser::Assignment_operatorContext::Assignment_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Assignment_operatorContext::getRuleIndex() const {
  return CortoParser::RuleAssignment_operator;
}

void CortoParser::Assignment_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_operator(this);
}

void CortoParser::Assignment_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_operator(this);
}


antlrcpp::Any CortoParser::Assignment_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAssignment_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Assignment_operatorContext* CortoParser::assignment_operator() {
  Assignment_operatorContext *_localctx = _tracker.createInstance<Assignment_operatorContext>(_ctx, getState());
  enterRule(_localctx, 20, CortoParser::RuleAssignment_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__5)
      | (1ULL << CortoParser::T__6)
      | (1ULL << CortoParser::T__7)
      | (1ULL << CortoParser::T__8)
      | (1ULL << CortoParser::T__9)
      | (1ULL << CortoParser::T__10)
      | (1ULL << CortoParser::T__11)
      | (1ULL << CortoParser::T__12)
      | (1ULL << CortoParser::T__13)
      | (1ULL << CortoParser::T__14)
      | (1ULL << CortoParser::T__15))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_expressionContext ------------------------------------------------------------------

CortoParser::Conditional_expressionContext::Conditional_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Logical_or_expressionContext* CortoParser::Conditional_expressionContext::logical_or_expression() {
  return getRuleContext<CortoParser::Logical_or_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Conditional_expressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::Conditional_expressionContext* CortoParser::Conditional_expressionContext::conditional_expression() {
  return getRuleContext<CortoParser::Conditional_expressionContext>(0);
}


size_t CortoParser::Conditional_expressionContext::getRuleIndex() const {
  return CortoParser::RuleConditional_expression;
}

void CortoParser::Conditional_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional_expression(this);
}

void CortoParser::Conditional_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional_expression(this);
}


antlrcpp::Any CortoParser::Conditional_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitConditional_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Conditional_expressionContext* CortoParser::conditional_expression() {
  Conditional_expressionContext *_localctx = _tracker.createInstance<Conditional_expressionContext>(_ctx, getState());
  enterRule(_localctx, 22, CortoParser::RuleConditional_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    logical_or_expression(0);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::T__16) {
      setState(159);
      match(CortoParser::T__16);
      setState(160);
      expression();
      setState(161);
      match(CortoParser::T__17);
      setState(162);
      conditional_expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_or_expressionContext ------------------------------------------------------------------

CortoParser::Logical_or_expressionContext::Logical_or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Logical_and_expressionContext* CortoParser::Logical_or_expressionContext::logical_and_expression() {
  return getRuleContext<CortoParser::Logical_and_expressionContext>(0);
}

CortoParser::Logical_or_expressionContext* CortoParser::Logical_or_expressionContext::logical_or_expression() {
  return getRuleContext<CortoParser::Logical_or_expressionContext>(0);
}


size_t CortoParser::Logical_or_expressionContext::getRuleIndex() const {
  return CortoParser::RuleLogical_or_expression;
}

void CortoParser::Logical_or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_or_expression(this);
}

void CortoParser::Logical_or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_or_expression(this);
}


antlrcpp::Any CortoParser::Logical_or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLogical_or_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Logical_or_expressionContext* CortoParser::logical_or_expression() {
   return logical_or_expression(0);
}

CortoParser::Logical_or_expressionContext* CortoParser::logical_or_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Logical_or_expressionContext *_localctx = _tracker.createInstance<Logical_or_expressionContext>(_ctx, parentState);
  CortoParser::Logical_or_expressionContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, CortoParser::RuleLogical_or_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(167);
    logical_and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_or_expression);
        setState(169);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(170);
        match(CortoParser::T__18);
        setState(171);
        logical_and_expression(0); 
      }
      setState(176);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Logical_and_expressionContext ------------------------------------------------------------------

CortoParser::Logical_and_expressionContext::Logical_and_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Or_expressionContext* CortoParser::Logical_and_expressionContext::or_expression() {
  return getRuleContext<CortoParser::Or_expressionContext>(0);
}

CortoParser::Logical_and_expressionContext* CortoParser::Logical_and_expressionContext::logical_and_expression() {
  return getRuleContext<CortoParser::Logical_and_expressionContext>(0);
}


size_t CortoParser::Logical_and_expressionContext::getRuleIndex() const {
  return CortoParser::RuleLogical_and_expression;
}

void CortoParser::Logical_and_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_and_expression(this);
}

void CortoParser::Logical_and_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_and_expression(this);
}


antlrcpp::Any CortoParser::Logical_and_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLogical_and_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Logical_and_expressionContext* CortoParser::logical_and_expression() {
   return logical_and_expression(0);
}

CortoParser::Logical_and_expressionContext* CortoParser::logical_and_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Logical_and_expressionContext *_localctx = _tracker.createInstance<Logical_and_expressionContext>(_ctx, parentState);
  CortoParser::Logical_and_expressionContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, CortoParser::RuleLogical_and_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(178);
    or_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_and_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_and_expression);
        setState(180);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(181);
        match(CortoParser::T__19);
        setState(182);
        or_expression(0); 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Or_expressionContext ------------------------------------------------------------------

CortoParser::Or_expressionContext::Or_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Xor_expressionContext* CortoParser::Or_expressionContext::xor_expression() {
  return getRuleContext<CortoParser::Xor_expressionContext>(0);
}

CortoParser::Or_expressionContext* CortoParser::Or_expressionContext::or_expression() {
  return getRuleContext<CortoParser::Or_expressionContext>(0);
}


size_t CortoParser::Or_expressionContext::getRuleIndex() const {
  return CortoParser::RuleOr_expression;
}

void CortoParser::Or_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_expression(this);
}

void CortoParser::Or_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_expression(this);
}


antlrcpp::Any CortoParser::Or_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitOr_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Or_expressionContext* CortoParser::or_expression() {
   return or_expression(0);
}

CortoParser::Or_expressionContext* CortoParser::or_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Or_expressionContext *_localctx = _tracker.createInstance<Or_expressionContext>(_ctx, parentState);
  CortoParser::Or_expressionContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, CortoParser::RuleOr_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(189);
    xor_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr_expression);
        setState(191);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(192);
        match(CortoParser::T__20);
        setState(193);
        xor_expression(0); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Xor_expressionContext ------------------------------------------------------------------

CortoParser::Xor_expressionContext::Xor_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::And_expressionContext* CortoParser::Xor_expressionContext::and_expression() {
  return getRuleContext<CortoParser::And_expressionContext>(0);
}

CortoParser::Xor_expressionContext* CortoParser::Xor_expressionContext::xor_expression() {
  return getRuleContext<CortoParser::Xor_expressionContext>(0);
}


size_t CortoParser::Xor_expressionContext::getRuleIndex() const {
  return CortoParser::RuleXor_expression;
}

void CortoParser::Xor_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor_expression(this);
}

void CortoParser::Xor_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor_expression(this);
}


antlrcpp::Any CortoParser::Xor_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitXor_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Xor_expressionContext* CortoParser::xor_expression() {
   return xor_expression(0);
}

CortoParser::Xor_expressionContext* CortoParser::xor_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Xor_expressionContext *_localctx = _tracker.createInstance<Xor_expressionContext>(_ctx, parentState);
  CortoParser::Xor_expressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, CortoParser::RuleXor_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(200);
    and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(207);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Xor_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXor_expression);
        setState(202);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(203);
        match(CortoParser::T__21);
        setState(204);
        and_expression(0); 
      }
      setState(209);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- And_expressionContext ------------------------------------------------------------------

CortoParser::And_expressionContext::And_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Equality_expressionContext* CortoParser::And_expressionContext::equality_expression() {
  return getRuleContext<CortoParser::Equality_expressionContext>(0);
}

CortoParser::And_expressionContext* CortoParser::And_expressionContext::and_expression() {
  return getRuleContext<CortoParser::And_expressionContext>(0);
}


size_t CortoParser::And_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAnd_expression;
}

void CortoParser::And_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expression(this);
}

void CortoParser::And_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expression(this);
}


antlrcpp::Any CortoParser::And_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAnd_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::And_expressionContext* CortoParser::and_expression() {
   return and_expression(0);
}

CortoParser::And_expressionContext* CortoParser::and_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::And_expressionContext *_localctx = _tracker.createInstance<And_expressionContext>(_ctx, parentState);
  CortoParser::And_expressionContext *previousContext = _localctx;
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, CortoParser::RuleAnd_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(211);
    equality_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(218);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<And_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd_expression);
        setState(213);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(214);
        match(CortoParser::T__22);
        setState(215);
        equality_expression(0); 
      }
      setState(220);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Equality_expressionContext ------------------------------------------------------------------

CortoParser::Equality_expressionContext::Equality_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Relational_expressionContext* CortoParser::Equality_expressionContext::relational_expression() {
  return getRuleContext<CortoParser::Relational_expressionContext>(0);
}

CortoParser::Equality_expressionContext* CortoParser::Equality_expressionContext::equality_expression() {
  return getRuleContext<CortoParser::Equality_expressionContext>(0);
}


size_t CortoParser::Equality_expressionContext::getRuleIndex() const {
  return CortoParser::RuleEquality_expression;
}

void CortoParser::Equality_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expression(this);
}

void CortoParser::Equality_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expression(this);
}


antlrcpp::Any CortoParser::Equality_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEquality_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Equality_expressionContext* CortoParser::equality_expression() {
   return equality_expression(0);
}

CortoParser::Equality_expressionContext* CortoParser::equality_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Equality_expressionContext *_localctx = _tracker.createInstance<Equality_expressionContext>(_ctx, parentState);
  CortoParser::Equality_expressionContext *previousContext = _localctx;
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CortoParser::RuleEquality_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(222);
    relational_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(230);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
          setState(224);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(225);
          match(CortoParser::T__23);
          setState(226);
          relational_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
          setState(227);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(228);
          match(CortoParser::T__24);
          setState(229);
          relational_expression(0);
          break;
        }

        } 
      }
      setState(234);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_expressionContext ------------------------------------------------------------------

CortoParser::Relational_expressionContext::Relational_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Shift_expressionContext* CortoParser::Relational_expressionContext::shift_expression() {
  return getRuleContext<CortoParser::Shift_expressionContext>(0);
}

CortoParser::Relational_expressionContext* CortoParser::Relational_expressionContext::relational_expression() {
  return getRuleContext<CortoParser::Relational_expressionContext>(0);
}


size_t CortoParser::Relational_expressionContext::getRuleIndex() const {
  return CortoParser::RuleRelational_expression;
}

void CortoParser::Relational_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expression(this);
}

void CortoParser::Relational_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expression(this);
}


antlrcpp::Any CortoParser::Relational_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitRelational_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Relational_expressionContext* CortoParser::relational_expression() {
   return relational_expression(0);
}

CortoParser::Relational_expressionContext* CortoParser::relational_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Relational_expressionContext *_localctx = _tracker.createInstance<Relational_expressionContext>(_ctx, parentState);
  CortoParser::Relational_expressionContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CortoParser::RuleRelational_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(236);
    shift_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(252);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(250);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(238);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(239);
          match(CortoParser::T__25);
          setState(240);
          shift_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(241);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(242);
          match(CortoParser::T__26);
          setState(243);
          shift_expression(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(244);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(245);
          match(CortoParser::T__27);
          setState(246);
          shift_expression(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
          setState(247);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(248);
          match(CortoParser::T__28);
          setState(249);
          shift_expression(0);
          break;
        }

        } 
      }
      setState(254);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Shift_expressionContext ------------------------------------------------------------------

CortoParser::Shift_expressionContext::Shift_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Additive_expressionContext* CortoParser::Shift_expressionContext::additive_expression() {
  return getRuleContext<CortoParser::Additive_expressionContext>(0);
}

CortoParser::Shift_expressionContext* CortoParser::Shift_expressionContext::shift_expression() {
  return getRuleContext<CortoParser::Shift_expressionContext>(0);
}


size_t CortoParser::Shift_expressionContext::getRuleIndex() const {
  return CortoParser::RuleShift_expression;
}

void CortoParser::Shift_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_expression(this);
}

void CortoParser::Shift_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_expression(this);
}


antlrcpp::Any CortoParser::Shift_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitShift_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Shift_expressionContext* CortoParser::shift_expression() {
   return shift_expression(0);
}

CortoParser::Shift_expressionContext* CortoParser::shift_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Shift_expressionContext *_localctx = _tracker.createInstance<Shift_expressionContext>(_ctx, parentState);
  CortoParser::Shift_expressionContext *previousContext = _localctx;
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, CortoParser::RuleShift_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(256);
    additive_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(266);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(264);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Shift_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShift_expression);
          setState(258);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(259);
          match(CortoParser::T__29);
          setState(260);
          additive_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Shift_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleShift_expression);
          setState(261);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(262);
          match(CortoParser::T__30);
          setState(263);
          additive_expression(0);
          break;
        }

        } 
      }
      setState(268);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Additive_expressionContext ------------------------------------------------------------------

CortoParser::Additive_expressionContext::Additive_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Multiplicative_expressionContext* CortoParser::Additive_expressionContext::multiplicative_expression() {
  return getRuleContext<CortoParser::Multiplicative_expressionContext>(0);
}

CortoParser::Additive_expressionContext* CortoParser::Additive_expressionContext::additive_expression() {
  return getRuleContext<CortoParser::Additive_expressionContext>(0);
}


size_t CortoParser::Additive_expressionContext::getRuleIndex() const {
  return CortoParser::RuleAdditive_expression;
}

void CortoParser::Additive_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expression(this);
}

void CortoParser::Additive_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expression(this);
}


antlrcpp::Any CortoParser::Additive_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAdditive_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Additive_expressionContext* CortoParser::additive_expression() {
   return additive_expression(0);
}

CortoParser::Additive_expressionContext* CortoParser::additive_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Additive_expressionContext *_localctx = _tracker.createInstance<Additive_expressionContext>(_ctx, parentState);
  CortoParser::Additive_expressionContext *previousContext = _localctx;
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CortoParser::RuleAdditive_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(270);
    multiplicative_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(280);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(278);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
          setState(272);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(273);
          match(CortoParser::T__31);
          setState(274);
          multiplicative_expression(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
          setState(275);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(276);
          match(CortoParser::T__32);
          setState(277);
          multiplicative_expression(0);
          break;
        }

        } 
      }
      setState(282);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Multiplicative_expressionContext ------------------------------------------------------------------

CortoParser::Multiplicative_expressionContext::Multiplicative_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Cast_expressionContext* CortoParser::Multiplicative_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}

CortoParser::Multiplicative_expressionContext* CortoParser::Multiplicative_expressionContext::multiplicative_expression() {
  return getRuleContext<CortoParser::Multiplicative_expressionContext>(0);
}


size_t CortoParser::Multiplicative_expressionContext::getRuleIndex() const {
  return CortoParser::RuleMultiplicative_expression;
}

void CortoParser::Multiplicative_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expression(this);
}

void CortoParser::Multiplicative_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expression(this);
}


antlrcpp::Any CortoParser::Multiplicative_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Multiplicative_expressionContext* CortoParser::multiplicative_expression() {
   return multiplicative_expression(0);
}

CortoParser::Multiplicative_expressionContext* CortoParser::multiplicative_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Multiplicative_expressionContext *_localctx = _tracker.createInstance<Multiplicative_expressionContext>(_ctx, parentState);
  CortoParser::Multiplicative_expressionContext *previousContext = _localctx;
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, CortoParser::RuleMultiplicative_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(284);
    cast_expression();
    _ctx->stop = _input->LT(-1);
    setState(297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(295);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(286);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(287);
          match(CortoParser::T__33);
          setState(288);
          cast_expression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(289);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(290);
          match(CortoParser::T__34);
          setState(291);
          cast_expression();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
          setState(292);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(293);
          match(CortoParser::T__35);
          setState(294);
          cast_expression();
          break;
        }

        } 
      }
      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Cast_expressionContext ------------------------------------------------------------------

CortoParser::Cast_expressionContext::Cast_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Unary_expressionContext* CortoParser::Cast_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

CortoParser::Object_expressionContext* CortoParser::Cast_expressionContext::object_expression() {
  return getRuleContext<CortoParser::Object_expressionContext>(0);
}

CortoParser::Cast_expressionContext* CortoParser::Cast_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}


size_t CortoParser::Cast_expressionContext::getRuleIndex() const {
  return CortoParser::RuleCast_expression;
}

void CortoParser::Cast_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast_expression(this);
}

void CortoParser::Cast_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast_expression(this);
}


antlrcpp::Any CortoParser::Cast_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitCast_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Cast_expressionContext* CortoParser::cast_expression() {
  Cast_expressionContext *_localctx = _tracker.createInstance<Cast_expressionContext>(_ctx, getState());
  enterRule(_localctx, 44, CortoParser::RuleCast_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__22:
      case CortoParser::T__31:
      case CortoParser::T__32:
      case CortoParser::T__33:
      case CortoParser::T__34:
      case CortoParser::T__36:
      case CortoParser::T__37:
      case CortoParser::T__38:
      case CortoParser::T__39:
      case CortoParser::T__43:
      case CortoParser::BOOLEAN:
      case CortoParser::IDENTIFIER:
      case CortoParser::MEASUREMENT:
      case CortoParser::NUMERICAL:
      case CortoParser::HEXADECIMAL:
      case CortoParser::CHARACTER:
      case CortoParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(300);
        unary_expression();
        break;
      }

      case CortoParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(301);
        match(CortoParser::T__1);
        setState(302);
        object_expression();
        setState(303);
        match(CortoParser::T__2);
        setState(304);
        cast_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

CortoParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Postfix_expressionContext* CortoParser::Unary_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::Unary_expressionContext* CortoParser::Unary_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

CortoParser::Unary_operatorContext* CortoParser::Unary_expressionContext::unary_operator() {
  return getRuleContext<CortoParser::Unary_operatorContext>(0);
}

CortoParser::Cast_expressionContext* CortoParser::Unary_expressionContext::cast_expression() {
  return getRuleContext<CortoParser::Cast_expressionContext>(0);
}


size_t CortoParser::Unary_expressionContext::getRuleIndex() const {
  return CortoParser::RuleUnary_expression;
}

void CortoParser::Unary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expression(this);
}

void CortoParser::Unary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expression(this);
}


antlrcpp::Any CortoParser::Unary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitUnary_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Unary_expressionContext* CortoParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 46, CortoParser::RuleUnary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(316);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__34:
      case CortoParser::T__43:
      case CortoParser::BOOLEAN:
      case CortoParser::IDENTIFIER:
      case CortoParser::MEASUREMENT:
      case CortoParser::NUMERICAL:
      case CortoParser::HEXADECIMAL:
      case CortoParser::CHARACTER:
      case CortoParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        postfix_expression(0);
        break;
      }

      case CortoParser::T__36: {
        enterOuterAlt(_localctx, 2);
        setState(309);
        match(CortoParser::T__36);
        setState(310);
        unary_expression();
        break;
      }

      case CortoParser::T__37: {
        enterOuterAlt(_localctx, 3);
        setState(311);
        match(CortoParser::T__37);
        setState(312);
        unary_expression();
        break;
      }

      case CortoParser::T__22:
      case CortoParser::T__31:
      case CortoParser::T__32:
      case CortoParser::T__33:
      case CortoParser::T__38:
      case CortoParser::T__39: {
        enterOuterAlt(_localctx, 4);
        setState(313);
        unary_operator();
        setState(314);
        cast_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operatorContext ------------------------------------------------------------------

CortoParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Unary_operatorContext::getRuleIndex() const {
  return CortoParser::RuleUnary_operator;
}

void CortoParser::Unary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator(this);
}

void CortoParser::Unary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator(this);
}


antlrcpp::Any CortoParser::Unary_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitUnary_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Unary_operatorContext* CortoParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 48, CortoParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__31)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_expressionContext ------------------------------------------------------------------

CortoParser::Postfix_expressionContext::Postfix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Primary_expressionContext* CortoParser::Postfix_expressionContext::primary_expression() {
  return getRuleContext<CortoParser::Primary_expressionContext>(0);
}

CortoParser::Postfix_expressionContext* CortoParser::Postfix_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Postfix_expressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::Initializer_compositeContext* CortoParser::Postfix_expressionContext::initializer_composite() {
  return getRuleContext<CortoParser::Initializer_compositeContext>(0);
}

tree::TerminalNode* CortoParser::Postfix_expressionContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}


size_t CortoParser::Postfix_expressionContext::getRuleIndex() const {
  return CortoParser::RulePostfix_expression;
}

void CortoParser::Postfix_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_expression(this);
}

void CortoParser::Postfix_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_expression(this);
}


antlrcpp::Any CortoParser::Postfix_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitPostfix_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Postfix_expressionContext* CortoParser::postfix_expression() {
   return postfix_expression(0);
}

CortoParser::Postfix_expressionContext* CortoParser::postfix_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Postfix_expressionContext *_localctx = _tracker.createInstance<Postfix_expressionContext>(_ctx, parentState);
  CortoParser::Postfix_expressionContext *previousContext = _localctx;
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, CortoParser::RulePostfix_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(321);
    primary_expression();
    _ctx->stop = _input->LT(-1);
    setState(339);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(337);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(323);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(324);
          match(CortoParser::T__40);
          setState(325);
          expression();
          setState(326);
          match(CortoParser::T__41);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(328);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(329);
          initializer_composite();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(330);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(331);
          match(CortoParser::T__42);
          setState(332);
          match(CortoParser::IDENTIFIER);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(333);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(334);
          match(CortoParser::T__36);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
          setState(335);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(336);
          match(CortoParser::T__37);
          break;
        }

        } 
      }
      setState(341);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Initializer_assignmentContext ------------------------------------------------------------------

CortoParser::Initializer_assignmentContext::Initializer_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_expressionContext* CortoParser::Initializer_assignmentContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
}

CortoParser::Initializer_listContext* CortoParser::Initializer_assignmentContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_assignmentContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_assignment;
}

void CortoParser::Initializer_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_assignment(this);
}

void CortoParser::Initializer_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_assignment(this);
}


antlrcpp::Any CortoParser::Initializer_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_assignment(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_assignmentContext* CortoParser::initializer_assignment() {
  Initializer_assignmentContext *_localctx = _tracker.createInstance<Initializer_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 52, CortoParser::RuleInitializer_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(345);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__1:
      case CortoParser::T__40: {
        enterOuterAlt(_localctx, 1);
        setState(342);
        initializer_expression();
        break;
      }

      case CortoParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(343);
        match(CortoParser::T__17);
        setState(344);
        initializer_list();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_expressionContext ------------------------------------------------------------------

CortoParser::Initializer_expressionContext::Initializer_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_compositeContext* CortoParser::Initializer_expressionContext::initializer_composite() {
  return getRuleContext<CortoParser::Initializer_compositeContext>(0);
}

CortoParser::Initializer_collectionContext* CortoParser::Initializer_expressionContext::initializer_collection() {
  return getRuleContext<CortoParser::Initializer_collectionContext>(0);
}


size_t CortoParser::Initializer_expressionContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_expression;
}

void CortoParser::Initializer_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_expression(this);
}

void CortoParser::Initializer_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_expression(this);
}


antlrcpp::Any CortoParser::Initializer_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_expressionContext* CortoParser::initializer_expression() {
  Initializer_expressionContext *_localctx = _tracker.createInstance<Initializer_expressionContext>(_ctx, getState());
  enterRule(_localctx, 54, CortoParser::RuleInitializer_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(349);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(347);
        initializer_composite();
        break;
      }

      case CortoParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(348);
        initializer_collection();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_compositeContext ------------------------------------------------------------------

CortoParser::Initializer_compositeContext::Initializer_compositeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_listContext* CortoParser::Initializer_compositeContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_compositeContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_composite;
}

void CortoParser::Initializer_compositeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_composite(this);
}

void CortoParser::Initializer_compositeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_composite(this);
}


antlrcpp::Any CortoParser::Initializer_compositeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_composite(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_compositeContext* CortoParser::initializer_composite() {
  Initializer_compositeContext *_localctx = _tracker.createInstance<Initializer_compositeContext>(_ctx, getState());
  enterRule(_localctx, 56, CortoParser::RuleInitializer_composite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(CortoParser::T__1);
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__1)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__31)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__36)
      | (1ULL << CortoParser::T__37)
      | (1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39)
      | (1ULL << CortoParser::T__43)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::MEASUREMENT)
      | (1ULL << CortoParser::NUMERICAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::CHARACTER)
      | (1ULL << CortoParser::STRING))) != 0)) {
      setState(352);
      initializer_list();
    }
    setState(355);
    match(CortoParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_collectionContext ------------------------------------------------------------------

CortoParser::Initializer_collectionContext::Initializer_collectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_listContext* CortoParser::Initializer_collectionContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Initializer_collectionContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_collection;
}

void CortoParser::Initializer_collectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_collection(this);
}

void CortoParser::Initializer_collectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_collection(this);
}


antlrcpp::Any CortoParser::Initializer_collectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_collection(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_collectionContext* CortoParser::initializer_collection() {
  Initializer_collectionContext *_localctx = _tracker.createInstance<Initializer_collectionContext>(_ctx, getState());
  enterRule(_localctx, 58, CortoParser::RuleInitializer_collection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(CortoParser::T__40);
    setState(359);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__1)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__31)
      | (1ULL << CortoParser::T__32)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__36)
      | (1ULL << CortoParser::T__37)
      | (1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39)
      | (1ULL << CortoParser::T__43)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::MEASUREMENT)
      | (1ULL << CortoParser::NUMERICAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::CHARACTER)
      | (1ULL << CortoParser::STRING))) != 0)) {
      setState(358);
      initializer_list();
    }
    setState(361);
    match(CortoParser::T__41);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_listContext ------------------------------------------------------------------

CortoParser::Initializer_listContext::Initializer_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::Initializer_valueContext *> CortoParser::Initializer_listContext::initializer_value() {
  return getRuleContexts<CortoParser::Initializer_valueContext>();
}

CortoParser::Initializer_valueContext* CortoParser::Initializer_listContext::initializer_value(size_t i) {
  return getRuleContext<CortoParser::Initializer_valueContext>(i);
}


size_t CortoParser::Initializer_listContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_list;
}

void CortoParser::Initializer_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_list(this);
}

void CortoParser::Initializer_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_list(this);
}


antlrcpp::Any CortoParser::Initializer_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_list(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_listContext* CortoParser::initializer_list() {
  Initializer_listContext *_localctx = _tracker.createInstance<Initializer_listContext>(_ctx, getState());
  enterRule(_localctx, 60, CortoParser::RuleInitializer_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    initializer_value();
    setState(368);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CortoParser::T__0) {
      setState(364);
      match(CortoParser::T__0);
      setState(365);
      initializer_value();
      setState(370);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_valueContext ------------------------------------------------------------------

CortoParser::Initializer_valueContext::Initializer_valueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Initializer_keyContext* CortoParser::Initializer_valueContext::initializer_key() {
  return getRuleContext<CortoParser::Initializer_keyContext>(0);
}

CortoParser::Initializer_expressionContext* CortoParser::Initializer_valueContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Initializer_valueContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}


size_t CortoParser::Initializer_valueContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_value;
}

void CortoParser::Initializer_valueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_value(this);
}

void CortoParser::Initializer_valueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_value(this);
}


antlrcpp::Any CortoParser::Initializer_valueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_value(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_valueContext* CortoParser::initializer_value() {
  Initializer_valueContext *_localctx = _tracker.createInstance<Initializer_valueContext>(_ctx, getState());
  enterRule(_localctx, 62, CortoParser::RuleInitializer_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(371);
      initializer_key();
      setState(375);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::T__1:
        case CortoParser::T__40: {
          setState(372);
          initializer_expression();
          break;
        }

        case CortoParser::T__17: {
          setState(373);
          match(CortoParser::T__17);
          setState(374);
          expression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(377);
      expression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Initializer_keyContext ------------------------------------------------------------------

CortoParser::Initializer_keyContext::Initializer_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CortoParser::Initializer_keyContext::IDENTIFIER() {
  return getTokens(CortoParser::IDENTIFIER);
}

tree::TerminalNode* CortoParser::Initializer_keyContext::IDENTIFIER(size_t i) {
  return getToken(CortoParser::IDENTIFIER, i);
}

CortoParser::ConstantContext* CortoParser::Initializer_keyContext::constant() {
  return getRuleContext<CortoParser::ConstantContext>(0);
}

CortoParser::Object_identifierContext* CortoParser::Initializer_keyContext::object_identifier() {
  return getRuleContext<CortoParser::Object_identifierContext>(0);
}


size_t CortoParser::Initializer_keyContext::getRuleIndex() const {
  return CortoParser::RuleInitializer_key;
}

void CortoParser::Initializer_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer_key(this);
}

void CortoParser::Initializer_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer_key(this);
}


antlrcpp::Any CortoParser::Initializer_keyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInitializer_key(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Initializer_keyContext* CortoParser::initializer_key() {
  Initializer_keyContext *_localctx = _tracker.createInstance<Initializer_keyContext>(_ctx, getState());
  enterRule(_localctx, 64, CortoParser::RuleInitializer_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(390);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(380);
      match(CortoParser::IDENTIFIER);
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CortoParser::T__42) {
        setState(381);
        match(CortoParser::T__42);
        setState(382);
        match(CortoParser::IDENTIFIER);
        setState(387);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(388);
      constant();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(389);
      object_identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_expressionContext ------------------------------------------------------------------

CortoParser::Primary_expressionContext::Primary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::ConstantContext* CortoParser::Primary_expressionContext::constant() {
  return getRuleContext<CortoParser::ConstantContext>(0);
}

CortoParser::Object_expressionContext* CortoParser::Primary_expressionContext::object_expression() {
  return getRuleContext<CortoParser::Object_expressionContext>(0);
}


size_t CortoParser::Primary_expressionContext::getRuleIndex() const {
  return CortoParser::RulePrimary_expression;
}

void CortoParser::Primary_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expression(this);
}

void CortoParser::Primary_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expression(this);
}


antlrcpp::Any CortoParser::Primary_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitPrimary_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Primary_expressionContext* CortoParser::primary_expression() {
  Primary_expressionContext *_localctx = _tracker.createInstance<Primary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 66, CortoParser::RulePrimary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::BOOLEAN:
      case CortoParser::MEASUREMENT:
      case CortoParser::NUMERICAL:
      case CortoParser::HEXADECIMAL:
      case CortoParser::CHARACTER:
      case CortoParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(392);
        constant();
        break;
      }

      case CortoParser::T__34:
      case CortoParser::T__43:
      case CortoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(393);
        object_expression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

CortoParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::ConstantContext::BOOLEAN() {
  return getToken(CortoParser::BOOLEAN, 0);
}

tree::TerminalNode* CortoParser::ConstantContext::MEASUREMENT() {
  return getToken(CortoParser::MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::ConstantContext::NUMERICAL() {
  return getToken(CortoParser::NUMERICAL, 0);
}

tree::TerminalNode* CortoParser::ConstantContext::HEXADECIMAL() {
  return getToken(CortoParser::HEXADECIMAL, 0);
}

tree::TerminalNode* CortoParser::ConstantContext::CHARACTER() {
  return getToken(CortoParser::CHARACTER, 0);
}

tree::TerminalNode* CortoParser::ConstantContext::STRING() {
  return getToken(CortoParser::STRING, 0);
}


size_t CortoParser::ConstantContext::getRuleIndex() const {
  return CortoParser::RuleConstant;
}

void CortoParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void CortoParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


antlrcpp::Any CortoParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::ConstantContext* CortoParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 68, CortoParser::RuleConstant);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::MEASUREMENT)
      | (1ULL << CortoParser::NUMERICAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::CHARACTER)
      | (1ULL << CortoParser::STRING))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_expressionContext ------------------------------------------------------------------

CortoParser::Object_expressionContext::Object_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Object_identifierContext* CortoParser::Object_expressionContext::object_identifier() {
  return getRuleContext<CortoParser::Object_identifierContext>(0);
}

std::vector<CortoParser::Initializer_expressionContext *> CortoParser::Object_expressionContext::initializer_expression() {
  return getRuleContexts<CortoParser::Initializer_expressionContext>();
}

CortoParser::Initializer_expressionContext* CortoParser::Object_expressionContext::initializer_expression(size_t i) {
  return getRuleContext<CortoParser::Initializer_expressionContext>(i);
}


size_t CortoParser::Object_expressionContext::getRuleIndex() const {
  return CortoParser::RuleObject_expression;
}

void CortoParser::Object_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_expression(this);
}

void CortoParser::Object_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_expression(this);
}


antlrcpp::Any CortoParser::Object_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitObject_expression(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Object_expressionContext* CortoParser::object_expression() {
  Object_expressionContext *_localctx = _tracker.createInstance<Object_expressionContext>(_ctx, getState());
  enterRule(_localctx, 70, CortoParser::RuleObject_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(398);
    object_identifier();
    setState(402);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(399);
        initializer_expression(); 
      }
      setState(404);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_identifierContext ------------------------------------------------------------------

CortoParser::Object_identifierContext::Object_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CortoParser::Object_identifierContext::IDENTIFIER() {
  return getTokens(CortoParser::IDENTIFIER);
}

tree::TerminalNode* CortoParser::Object_identifierContext::IDENTIFIER(size_t i) {
  return getToken(CortoParser::IDENTIFIER, i);
}


size_t CortoParser::Object_identifierContext::getRuleIndex() const {
  return CortoParser::RuleObject_identifier;
}

void CortoParser::Object_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_identifier(this);
}

void CortoParser::Object_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_identifier(this);
}


antlrcpp::Any CortoParser::Object_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitObject_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Object_identifierContext* CortoParser::object_identifier() {
  Object_identifierContext *_localctx = _tracker.createInstance<Object_identifierContext>(_ctx, getState());
  enterRule(_localctx, 72, CortoParser::RuleObject_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(417);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__43: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        match(CortoParser::T__43);
        break;
      }

      case CortoParser::T__34:
      case CortoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(407);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CortoParser::T__34) {
          setState(406);
          match(CortoParser::T__34);
        }
        setState(409);
        match(CortoParser::IDENTIFIER);
        setState(414);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(410);
            match(CortoParser::T__34);
            setState(411);
            match(CortoParser::IDENTIFIER); 
          }
          setState(416);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CortoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return logical_or_expressionSempred(dynamic_cast<Logical_or_expressionContext *>(context), predicateIndex);
    case 13: return logical_and_expressionSempred(dynamic_cast<Logical_and_expressionContext *>(context), predicateIndex);
    case 14: return or_expressionSempred(dynamic_cast<Or_expressionContext *>(context), predicateIndex);
    case 15: return xor_expressionSempred(dynamic_cast<Xor_expressionContext *>(context), predicateIndex);
    case 16: return and_expressionSempred(dynamic_cast<And_expressionContext *>(context), predicateIndex);
    case 17: return equality_expressionSempred(dynamic_cast<Equality_expressionContext *>(context), predicateIndex);
    case 18: return relational_expressionSempred(dynamic_cast<Relational_expressionContext *>(context), predicateIndex);
    case 19: return shift_expressionSempred(dynamic_cast<Shift_expressionContext *>(context), predicateIndex);
    case 20: return additive_expressionSempred(dynamic_cast<Additive_expressionContext *>(context), predicateIndex);
    case 21: return multiplicative_expressionSempred(dynamic_cast<Multiplicative_expressionContext *>(context), predicateIndex);
    case 25: return postfix_expressionSempred(dynamic_cast<Postfix_expressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CortoParser::logical_or_expressionSempred(Logical_or_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::logical_and_expressionSempred(Logical_and_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::or_expressionSempred(Or_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::xor_expressionSempred(Xor_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::and_expressionSempred(And_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::equality_expressionSempred(Equality_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 4);
    case 8: return precpred(_ctx, 3);
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::shift_expressionSempred(Shift_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 2);
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 2);
    case 14: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 15: return precpred(_ctx, 3);
    case 16: return precpred(_ctx, 2);
    case 17: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 18: return precpred(_ctx, 5);
    case 19: return precpred(_ctx, 4);
    case 20: return precpred(_ctx, 3);
    case 21: return precpred(_ctx, 2);
    case 22: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> CortoParser::_decisionToDFA;
atn::PredictionContextCache CortoParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CortoParser::_atn;
std::vector<uint16_t> CortoParser::_serializedATN;

std::vector<std::string> CortoParser::_ruleNames = {
  "program", "statements", "statement", "declaration", "declaration_identifier", 
  "argument_declaration", "argument", "scope", "expression", "assignment_expression", 
  "assignment_operator", "conditional_expression", "logical_or_expression", 
  "logical_and_expression", "or_expression", "xor_expression", "and_expression", 
  "equality_expression", "relational_expression", "shift_expression", "additive_expression", 
  "multiplicative_expression", "cast_expression", "unary_expression", "unary_operator", 
  "postfix_expression", "initializer_assignment", "initializer_expression", 
  "initializer_composite", "initializer_collection", "initializer_list", 
  "initializer_value", "initializer_key", "primary_expression", "constant", 
  "object_expression", "object_identifier"
};

std::vector<std::string> CortoParser::_literalNames = {
  "", "','", "'('", "')'", "'{'", "'}'", "'='", "'*='", "'/='", "'%='", 
  "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'?'", "':'", 
  "'||'", "'&&'", "'|'", "'^'", "'&'", "'=='", "'!='", "'<'", "'>'", "'<='", 
  "'>='", "'<<'", "'>>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'++'", "'--'", 
  "'~'", "'!'", "'['", "']'", "'.'", "'root/'"
};

std::vector<std::string> CortoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "BOOLEAN", "IDENTIFIER", "MEASUREMENT", 
  "NUMERICAL", "INTEGER", "SIGNED_INTEGER", "FLOATING_POINT", "HEXADECIMAL", 
  "CHARACTER", "STRING", "EOL", "WS"
};

dfa::Vocabulary CortoParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CortoParser::_tokenNames;

CortoParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x1a6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 
    0x50, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x53, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x5a, 0xa, 0x4, 0x3, 0x5, 0x5, 
    0x5, 0x5d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x61, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x65, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x69, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x6e, 0xa, 0x6, 
    0xd, 0x6, 0xe, 0x6, 0x6f, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x6, 0x6, 0x75, 
    0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x76, 0x5, 0x6, 0x79, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x7f, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x82, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x88, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x96, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x9d, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa7, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xaf, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0xb2, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xba, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xbd, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x7, 0x10, 0xc5, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xc8, 
    0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xd0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xd3, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 
    0x12, 0xdb, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xde, 0xb, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x7, 0x13, 0xe9, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xec, 
    0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xfd, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x100, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x10b, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x10e, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x7, 0x16, 0x119, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x11c, 0xb, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 
    0x17, 0x12a, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x12d, 0xb, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x135, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x13f, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x154, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x157, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x15c, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x160, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x164, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x16a, 0xa, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x171, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x174, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x17a, 0xa, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x17d, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x182, 
    0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x185, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x189, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x18d, 
    0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x7, 0x25, 0x193, 
    0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x196, 0xb, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x5, 0x26, 0x19a, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 
    0x19f, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x1a2, 0xb, 0x26, 0x5, 0x26, 
    0x1a4, 0xa, 0x26, 0x3, 0x26, 0x2, 0xd, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x34, 0x27, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0x5, 0x3, 0x2, 0x8, 0x12, 
    0x5, 0x2, 0x19, 0x19, 0x22, 0x24, 0x29, 0x2a, 0x5, 0x2, 0x2f, 0x2f, 
    0x31, 0x32, 0x36, 0x38, 0x2, 0x1ba, 0x2, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x6, 0x59, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x78, 0x3, 0x2, 0x2, 0x2, 0xc, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x89, 0x3, 0x2, 0x2, 0x2, 0x10, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x95, 0x3, 0x2, 0x2, 0x2, 0x14, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd4, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x101, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x140, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x36, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x38, 0x15f, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x161, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x167, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x188, 0x3, 0x2, 0x2, 0x2, 0x44, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x4, 0x3, 0x2, 0x4d, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x5, 0x6, 0x4, 0x2, 0x4f, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x5a, 0x7, 0x39, 0x2, 
    0x2, 0x55, 0x56, 0x5, 0x12, 0xa, 0x2, 0x56, 0x57, 0x7, 0x39, 0x2, 0x2, 
    0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x8, 0x5, 0x2, 0x59, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x59, 0x55, 0x3, 0x2, 0x2, 0x2, 0x59, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x5, 
    0x48, 0x25, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x5, 0xa, 0x6, 
    0x2, 0x5f, 0x61, 0x5, 0x36, 0x1c, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x65, 0x5, 0x10, 0x9, 0x2, 0x63, 0x65, 0x7, 0x39, 0x2, 0x2, 0x64, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x68, 0x5, 0x4a, 0x26, 0x2, 0x67, 0x69, 0x5, 0xc, 
    0x7, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x79, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x5, 0x4a, 0x26, 0x2, 
    0x6b, 0x6c, 0x7, 0x3, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x4a, 0x26, 0x2, 0x6d, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x74, 0x5, 0x48, 0x25, 0x2, 0x72, 0x73, 0x7, 0x3, 
    0x2, 0x2, 0x73, 0x75, 0x5, 0x48, 0x25, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x78, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 
    0x4, 0x2, 0x2, 0x7b, 0x80, 0x5, 0xe, 0x8, 0x2, 0x7c, 0x7d, 0x7, 0x3, 
    0x2, 0x2, 0x7d, 0x7f, 0x5, 0xe, 0x8, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x5, 0x2, 0x2, 0x84, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x4, 0x2, 0x2, 0x86, 0x88, 0x7, 
    0x5, 0x2, 0x2, 0x87, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0xd, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x48, 0x25, 
    0x2, 0x8a, 0x8b, 0x7, 0x30, 0x2, 0x2, 0x8b, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8d, 0x7, 0x6, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x4, 0x3, 0x2, 0x8e, 
    0x8f, 0x7, 0x7, 0x2, 0x2, 0x8f, 0x11, 0x3, 0x2, 0x2, 0x2, 0x90, 0x96, 
    0x5, 0x14, 0xb, 0x2, 0x91, 0x92, 0x7, 0x4, 0x2, 0x2, 0x92, 0x93, 0x5, 
    0x12, 0xa, 0x2, 0x93, 0x94, 0x7, 0x5, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x90, 0x3, 0x2, 0x2, 0x2, 0x95, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x13, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9d, 0x5, 0x18, 0xd, 0x2, 
    0x98, 0x99, 0x5, 0x30, 0x19, 0x2, 0x99, 0x9a, 0x5, 0x16, 0xc, 0x2, 0x9a, 
    0x9b, 0x5, 0x14, 0xb, 0x2, 0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x97, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x9, 0x2, 0x2, 0x2, 0x9f, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa1, 0xa2, 0x7, 0x13, 0x2, 
    0x2, 0xa2, 0xa3, 0x5, 0x12, 0xa, 0x2, 0xa3, 0xa4, 0x7, 0x14, 0x2, 0x2, 
    0xa4, 0xa5, 0x5, 0x18, 0xd, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x8, 0xe, 0x1, 0x2, 0xa9, 0xaa, 0x5, 
    0x1c, 0xf, 0x2, 0xaa, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0xc, 0x3, 
    0x2, 0x2, 0xac, 0xad, 0x7, 0x15, 0x2, 0x2, 0xad, 0xaf, 0x5, 0x1c, 0xf, 
    0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 
    0x8, 0xf, 0x1, 0x2, 0xb4, 0xb5, 0x5, 0x1e, 0x10, 0x2, 0xb5, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0xc, 0x3, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x16, 
    0x2, 0x2, 0xb8, 0xba, 0x5, 0x1e, 0x10, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x8, 0x10, 0x1, 0x2, 0xbf, 0xc0, 
    0x5, 0x20, 0x11, 0x2, 0xc0, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0xc, 
    0x3, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x17, 0x2, 0x2, 0xc3, 0xc5, 0x5, 0x20, 
    0x11, 0x2, 0xc4, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xca, 0x8, 0x11, 0x1, 0x2, 0xca, 0xcb, 0x5, 0x22, 0x12, 0x2, 0xcb, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0xc, 0x3, 0x2, 0x2, 0xcd, 0xce, 0x7, 
    0x18, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x22, 0x12, 0x2, 0xcf, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x8, 0x12, 0x1, 0x2, 0xd5, 
    0xd6, 0x5, 0x24, 0x13, 0x2, 0xd6, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 
    0xc, 0x3, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x19, 0x2, 0x2, 0xd9, 0xdb, 0x5, 
    0x24, 0x13, 0x2, 0xda, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0x23, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe0, 0x8, 0x13, 0x1, 0x2, 0xe0, 0xe1, 0x5, 0x26, 0x14, 0x2, 0xe1, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0xc, 0x4, 0x2, 0x2, 0xe3, 0xe4, 
    0x7, 0x1a, 0x2, 0x2, 0xe4, 0xe9, 0x5, 0x26, 0x14, 0x2, 0xe5, 0xe6, 0xc, 
    0x3, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x1b, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x26, 
    0x14, 0x2, 0xe8, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x8, 0x14, 0x1, 0x2, 0xee, 0xef, 
    0x5, 0x28, 0x15, 0x2, 0xef, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 
    0x6, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x1c, 0x2, 0x2, 0xf2, 0xfd, 0x5, 0x28, 
    0x15, 0x2, 0xf3, 0xf4, 0xc, 0x5, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x1d, 0x2, 
    0x2, 0xf5, 0xfd, 0x5, 0x28, 0x15, 0x2, 0xf6, 0xf7, 0xc, 0x4, 0x2, 0x2, 
    0xf7, 0xf8, 0x7, 0x1e, 0x2, 0x2, 0xf8, 0xfd, 0x5, 0x28, 0x15, 0x2, 0xf9, 
    0xfa, 0xc, 0x3, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x1f, 0x2, 0x2, 0xfb, 0xfd, 
    0x5, 0x28, 0x15, 0x2, 0xfc, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0x100, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x8, 0x15, 0x1, 0x2, 
    0x102, 0x103, 0x5, 0x2a, 0x16, 0x2, 0x103, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0xc, 0x4, 0x2, 0x2, 0x105, 0x106, 0x7, 0x20, 0x2, 0x2, 
    0x106, 0x10b, 0x5, 0x2a, 0x16, 0x2, 0x107, 0x108, 0xc, 0x3, 0x2, 0x2, 
    0x108, 0x109, 0x7, 0x21, 0x2, 0x2, 0x109, 0x10b, 0x5, 0x2a, 0x16, 0x2, 
    0x10a, 0x104, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x8, 0x16, 0x1, 0x2, 0x110, 
    0x111, 0x5, 0x2c, 0x17, 0x2, 0x111, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x113, 0xc, 0x4, 0x2, 0x2, 0x113, 0x114, 0x7, 0x22, 0x2, 0x2, 0x114, 
    0x119, 0x5, 0x2c, 0x17, 0x2, 0x115, 0x116, 0xc, 0x3, 0x2, 0x2, 0x116, 
    0x117, 0x7, 0x23, 0x2, 0x2, 0x117, 0x119, 0x5, 0x2c, 0x17, 0x2, 0x118, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x118, 0x115, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x8, 0x17, 0x1, 0x2, 0x11e, 0x11f, 
    0x5, 0x2e, 0x18, 0x2, 0x11f, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 
    0xc, 0x5, 0x2, 0x2, 0x121, 0x122, 0x7, 0x24, 0x2, 0x2, 0x122, 0x12a, 
    0x5, 0x2e, 0x18, 0x2, 0x123, 0x124, 0xc, 0x4, 0x2, 0x2, 0x124, 0x125, 
    0x7, 0x25, 0x2, 0x2, 0x125, 0x12a, 0x5, 0x2e, 0x18, 0x2, 0x126, 0x127, 
    0xc, 0x3, 0x2, 0x2, 0x127, 0x128, 0x7, 0x26, 0x2, 0x2, 0x128, 0x12a, 
    0x5, 0x2e, 0x18, 0x2, 0x129, 0x120, 0x3, 0x2, 0x2, 0x2, 0x129, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x135, 0x5, 0x30, 0x19, 0x2, 0x12f, 0x130, 0x7, 
    0x4, 0x2, 0x2, 0x130, 0x131, 0x5, 0x48, 0x25, 0x2, 0x131, 0x132, 0x7, 
    0x5, 0x2, 0x2, 0x132, 0x133, 0x5, 0x2e, 0x18, 0x2, 0x133, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x134, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x136, 0x13f, 0x5, 0x34, 
    0x1b, 0x2, 0x137, 0x138, 0x7, 0x27, 0x2, 0x2, 0x138, 0x13f, 0x5, 0x30, 
    0x19, 0x2, 0x139, 0x13a, 0x7, 0x28, 0x2, 0x2, 0x13a, 0x13f, 0x5, 0x30, 
    0x19, 0x2, 0x13b, 0x13c, 0x5, 0x32, 0x1a, 0x2, 0x13c, 0x13d, 0x5, 0x2e, 
    0x18, 0x2, 0x13d, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x9, 0x3, 0x2, 0x2, 0x141, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x143, 0x8, 0x1b, 0x1, 0x2, 0x143, 0x144, 0x5, 0x44, 0x23, 0x2, 
    0x144, 0x155, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0xc, 0x7, 0x2, 0x2, 
    0x146, 0x147, 0x7, 0x2b, 0x2, 0x2, 0x147, 0x148, 0x5, 0x12, 0xa, 0x2, 
    0x148, 0x149, 0x7, 0x2c, 0x2, 0x2, 0x149, 0x154, 0x3, 0x2, 0x2, 0x2, 
    0x14a, 0x14b, 0xc, 0x6, 0x2, 0x2, 0x14b, 0x154, 0x5, 0x3a, 0x1e, 0x2, 
    0x14c, 0x14d, 0xc, 0x5, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x2d, 0x2, 0x2, 
    0x14e, 0x154, 0x7, 0x30, 0x2, 0x2, 0x14f, 0x150, 0xc, 0x4, 0x2, 0x2, 
    0x150, 0x154, 0x7, 0x27, 0x2, 0x2, 0x151, 0x152, 0xc, 0x3, 0x2, 0x2, 
    0x152, 0x154, 0x7, 0x28, 0x2, 0x2, 0x153, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x153, 0x14c, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x154, 0x157, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x35, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15c, 0x5, 0x38, 0x1d, 0x2, 0x159, 
    0x15a, 0x7, 0x14, 0x2, 0x2, 0x15a, 0x15c, 0x5, 0x3e, 0x20, 0x2, 0x15b, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x5, 0x3a, 0x1e, 0x2, 0x15e, 
    0x160, 0x5, 0x3c, 0x1f, 0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x39, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 
    0x7, 0x4, 0x2, 0x2, 0x162, 0x164, 0x5, 0x3e, 0x20, 0x2, 0x163, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x5, 0x2, 0x2, 0x166, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x169, 0x7, 0x2b, 0x2, 0x2, 0x168, 0x16a, 0x5, 
    0x3e, 0x20, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 
    0x2, 0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x7, 
    0x2c, 0x2, 0x2, 0x16c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x172, 0x5, 
    0x40, 0x21, 0x2, 0x16e, 0x16f, 0x7, 0x3, 0x2, 0x2, 0x16f, 0x171, 0x5, 
    0x40, 0x21, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 0x174, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x173, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x179, 0x5, 0x42, 0x22, 0x2, 0x176, 0x17a, 0x5, 0x38, 
    0x1d, 0x2, 0x177, 0x178, 0x7, 0x14, 0x2, 0x2, 0x178, 0x17a, 0x5, 0x12, 
    0xa, 0x2, 0x179, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 0x5, 0x12, 
    0xa, 0x2, 0x17c, 0x175, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x183, 0x7, 0x30, 
    0x2, 0x2, 0x17f, 0x180, 0x7, 0x2d, 0x2, 0x2, 0x180, 0x182, 0x7, 0x30, 
    0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x185, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x189, 0x3, 0x2, 0x2, 0x2, 0x185, 0x183, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x189, 0x5, 0x46, 0x24, 0x2, 0x187, 0x189, 0x5, 0x4a, 
    0x26, 0x2, 0x188, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 
    0x2, 0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x18d, 0x5, 0x46, 0x24, 0x2, 0x18b, 0x18d, 0x5, 0x48, 0x25, 
    0x2, 0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x9, 0x4, 0x2, 0x2, 
    0x18f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x190, 0x194, 0x5, 0x4a, 0x26, 0x2, 
    0x191, 0x193, 0x5, 0x38, 0x1d, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x196, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x49, 0x3, 0x2, 0x2, 0x2, 0x196, 
    0x194, 0x3, 0x2, 0x2, 0x2, 0x197, 0x1a4, 0x7, 0x2e, 0x2, 0x2, 0x198, 
    0x19a, 0x7, 0x25, 0x2, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 
    0x1a0, 0x7, 0x30, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x25, 0x2, 0x2, 0x19d, 
    0x19f, 0x7, 0x30, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
    0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a2, 
    0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x197, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x31, 0x51, 
    0x59, 0x5c, 0x60, 0x64, 0x68, 0x6f, 0x76, 0x78, 0x80, 0x87, 0x95, 0x9c, 
    0xa6, 0xb0, 0xbb, 0xc6, 0xd1, 0xdc, 0xe8, 0xea, 0xfc, 0xfe, 0x10a, 0x10c, 
    0x118, 0x11a, 0x129, 0x12b, 0x134, 0x13e, 0x153, 0x155, 0x15b, 0x15f, 
    0x163, 0x169, 0x172, 0x179, 0x17c, 0x183, 0x188, 0x18c, 0x194, 0x199, 
    0x1a0, 0x1a3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CortoParser::Initializer CortoParser::_init;
