
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
    setState(96);
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
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__3)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__35)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::IN)
      | (1ULL << CortoParser::USE)
      | (1ULL << CortoParser::REF)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING)
      | (1ULL << CortoParser::NL))) != 0)) {
      setState(98);
      statement();
      setState(103);
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

tree::TerminalNode* CortoParser::StatementContext::NL() {
  return getToken(CortoParser::NL, 0);
}

CortoParser::ExpressionContext* CortoParser::StatementContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::EolContext* CortoParser::StatementContext::eol() {
  return getRuleContext<CortoParser::EolContext>(0);
}

CortoParser::Use_statementContext* CortoParser::StatementContext::use_statement() {
  return getRuleContext<CortoParser::Use_statementContext>(0);
}

CortoParser::In_declarationContext* CortoParser::StatementContext::in_declaration() {
  return getRuleContext<CortoParser::In_declarationContext>(0);
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
    setState(111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(104);
      match(CortoParser::NL);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(105);
      expression();
      setState(106);
      eol();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(108);
      use_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(109);
      in_declaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(110);
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

//----------------- Scope_statementContext ------------------------------------------------------------------

CortoParser::Scope_statementContext::Scope_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Scope_statementContext::NL() {
  return getToken(CortoParser::NL, 0);
}

CortoParser::DeclarationContext* CortoParser::Scope_statementContext::declaration() {
  return getRuleContext<CortoParser::DeclarationContext>(0);
}


size_t CortoParser::Scope_statementContext::getRuleIndex() const {
  return CortoParser::RuleScope_statement;
}

void CortoParser::Scope_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope_statement(this);
}

void CortoParser::Scope_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope_statement(this);
}


antlrcpp::Any CortoParser::Scope_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitScope_statement(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Scope_statementContext* CortoParser::scope_statement() {
  Scope_statementContext *_localctx = _tracker.createInstance<Scope_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, CortoParser::RuleScope_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::NL: {
        enterOuterAlt(_localctx, 1);
        setState(113);
        match(CortoParser::NL);
        break;
      }

      case CortoParser::T__22:
      case CortoParser::IDENTIFIER:
      case CortoParser::SCOPE_IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(114);
        declaration();
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

//----------------- ScopeContext ------------------------------------------------------------------

CortoParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CortoParser::Scope_statementContext *> CortoParser::ScopeContext::scope_statement() {
  return getRuleContexts<CortoParser::Scope_statementContext>();
}

CortoParser::Scope_statementContext* CortoParser::ScopeContext::scope_statement(size_t i) {
  return getRuleContext<CortoParser::Scope_statementContext>(i);
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
  enterRule(_localctx, 8, CortoParser::RuleScope);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(CortoParser::T__0);
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::NL))) != 0)) {
      setState(118);
      scope_statement();
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(124);
    match(CortoParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Use_statementContext ------------------------------------------------------------------

CortoParser::Use_statementContext::Use_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Use_statementContext::USE() {
  return getToken(CortoParser::USE, 0);
}

std::vector<CortoParser::Storage_identifierContext *> CortoParser::Use_statementContext::storage_identifier() {
  return getRuleContexts<CortoParser::Storage_identifierContext>();
}

CortoParser::Storage_identifierContext* CortoParser::Use_statementContext::storage_identifier(size_t i) {
  return getRuleContext<CortoParser::Storage_identifierContext>(i);
}

tree::TerminalNode* CortoParser::Use_statementContext::TYPESYSTEM() {
  return getToken(CortoParser::TYPESYSTEM, 0);
}

tree::TerminalNode* CortoParser::Use_statementContext::AS() {
  return getToken(CortoParser::AS, 0);
}


size_t CortoParser::Use_statementContext::getRuleIndex() const {
  return CortoParser::RuleUse_statement;
}

void CortoParser::Use_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse_statement(this);
}

void CortoParser::Use_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse_statement(this);
}


antlrcpp::Any CortoParser::Use_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitUse_statement(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Use_statementContext* CortoParser::use_statement() {
  Use_statementContext *_localctx = _tracker.createInstance<Use_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, CortoParser::RuleUse_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(126);
      match(CortoParser::USE);
      setState(128);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CortoParser::TYPESYSTEM) {
        setState(127);
        match(CortoParser::TYPESYSTEM);
      }
      setState(130);
      storage_identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      match(CortoParser::USE);
      setState(132);
      storage_identifier();
      setState(135);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CortoParser::AS) {
        setState(133);
        match(CortoParser::AS);
        setState(134);
        storage_identifier();
      }
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

//----------------- In_declarationContext ------------------------------------------------------------------

CortoParser::In_declarationContext::In_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::In_declarationContext::IN() {
  return getToken(CortoParser::IN, 0);
}

CortoParser::DeclarationContext* CortoParser::In_declarationContext::declaration() {
  return getRuleContext<CortoParser::DeclarationContext>(0);
}


size_t CortoParser::In_declarationContext::getRuleIndex() const {
  return CortoParser::RuleIn_declaration;
}

void CortoParser::In_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIn_declaration(this);
}

void CortoParser::In_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIn_declaration(this);
}


antlrcpp::Any CortoParser::In_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitIn_declaration(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::In_declarationContext* CortoParser::in_declaration() {
  In_declarationContext *_localctx = _tracker.createInstance<In_declarationContext>(_ctx, getState());
  enterRule(_localctx, 12, CortoParser::RuleIn_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(CortoParser::IN);
    setState(140);
    declaration();
   
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

CortoParser::EolContext* CortoParser::DeclarationContext::eol() {
  return getRuleContext<CortoParser::EolContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::DeclarationContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::Initializer_assignmentContext* CortoParser::DeclarationContext::initializer_assignment() {
  return getRuleContext<CortoParser::Initializer_assignmentContext>(0);
}

CortoParser::Function_identifierContext* CortoParser::DeclarationContext::function_identifier() {
  return getRuleContext<CortoParser::Function_identifierContext>(0);
}

CortoParser::Initializer_listContext* CortoParser::DeclarationContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
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
  enterRule(_localctx, 14, CortoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(142);
        storage_expression(0);
        break;
      }

      }
      setState(145);
      declaration_identifier();
      setState(147);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CortoParser::T__5

      || _la == CortoParser::T__17) {
        setState(146);
        initializer_assignment();
      }
      setState(151);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::T__0: {
          setState(149);
          scope();
          break;
        }

        case CortoParser::EOF:
        case CortoParser::T__40:
        case CortoParser::NL: {
          setState(150);
          eol();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(154);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(153);
        storage_expression(0);
        break;
      }

      }
      setState(156);
      function_identifier();
      setState(158);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(157);
        initializer_list();
        break;
      }

      }
      setState(162);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::T__0: {
          setState(160);
          scope();
          break;
        }

        case CortoParser::EOF:
        case CortoParser::T__40:
        case CortoParser::NL: {
          setState(161);
          eol();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
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

//----------------- Function_identifierContext ------------------------------------------------------------------

CortoParser::Function_identifierContext::Function_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_identifierContext* CortoParser::Function_identifierContext::storage_identifier() {
  return getRuleContext<CortoParser::Storage_identifierContext>(0);
}

CortoParser::Argument_declarationContext* CortoParser::Function_identifierContext::argument_declaration() {
  return getRuleContext<CortoParser::Argument_declarationContext>(0);
}


size_t CortoParser::Function_identifierContext::getRuleIndex() const {
  return CortoParser::RuleFunction_identifier;
}

void CortoParser::Function_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_identifier(this);
}

void CortoParser::Function_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_identifier(this);
}


antlrcpp::Any CortoParser::Function_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitFunction_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Function_identifierContext* CortoParser::function_identifier() {
  Function_identifierContext *_localctx = _tracker.createInstance<Function_identifierContext>(_ctx, getState());
  enterRule(_localctx, 16, CortoParser::RuleFunction_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    storage_identifier();
    setState(167);
    argument_declaration();
   
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

std::vector<CortoParser::Storage_identifierContext *> CortoParser::Declaration_identifierContext::storage_identifier() {
  return getRuleContexts<CortoParser::Storage_identifierContext>();
}

CortoParser::Storage_identifierContext* CortoParser::Declaration_identifierContext::storage_identifier(size_t i) {
  return getRuleContext<CortoParser::Storage_identifierContext>(i);
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
  enterRule(_localctx, 18, CortoParser::RuleDeclaration_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    storage_identifier();
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CortoParser::T__2) {
      setState(170);
      match(CortoParser::T__2);
      setState(171);
      storage_identifier();
      setState(176);
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
  enterRule(_localctx, 20, CortoParser::RuleArgument_declaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(177);
      match(CortoParser::T__3);
      setState(178);
      argument();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CortoParser::T__2) {
        setState(179);
        match(CortoParser::T__2);
        setState(180);
        argument();
        setState(185);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(186);
      match(CortoParser::T__4);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(188);
      match(CortoParser::T__3);
      setState(189);
      match(CortoParser::T__4);
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

CortoParser::Storage_expressionContext* CortoParser::ArgumentContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

tree::TerminalNode* CortoParser::ArgumentContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}

CortoParser::InoutContext* CortoParser::ArgumentContext::inout() {
  return getRuleContext<CortoParser::InoutContext>(0);
}

tree::TerminalNode* CortoParser::ArgumentContext::REF() {
  return getToken(CortoParser::REF, 0);
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
  enterRule(_localctx, 22, CortoParser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39)
      | (1ULL << CortoParser::IN))) != 0)) {
      setState(192);
      inout();
    }
    setState(195);
    storage_expression(0);
    setState(197);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::REF) {
      setState(196);
      match(CortoParser::REF);
    }
    setState(199);
    match(CortoParser::IDENTIFIER);
   
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
  enterRule(_localctx, 24, CortoParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    assignment_expression();
   
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

CortoParser::Storage_expressionContext* CortoParser::Assignment_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
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
  enterRule(_localctx, 26, CortoParser::RuleAssignment_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(203);
      conditional_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(204);
      storage_expression(0);
      setState(205);
      assignment_operator();
      setState(206);
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
  enterRule(_localctx, 28, CortoParser::RuleAssignment_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
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
  enterRule(_localctx, 30, CortoParser::RuleConditional_expression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    logical_or_expression(0);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::T__16) {
      setState(213);
      match(CortoParser::T__16);
      setState(214);
      expression();
      setState(215);
      match(CortoParser::T__17);
      setState(216);
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

tree::TerminalNode* CortoParser::Logical_or_expressionContext::COND_OR() {
  return getToken(CortoParser::COND_OR, 0);
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
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, CortoParser::RuleLogical_or_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(221);
    logical_and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_or_expression);
        setState(223);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(224);
        match(CortoParser::COND_OR);
        setState(225);
        logical_and_expression(0); 
      }
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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

tree::TerminalNode* CortoParser::Logical_and_expressionContext::COND_AND() {
  return getToken(CortoParser::COND_AND, 0);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CortoParser::RuleLogical_and_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    or_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Logical_and_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogical_and_expression);
        setState(234);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(235);
        match(CortoParser::COND_AND);
        setState(236);
        or_expression(0); 
      }
      setState(241);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CortoParser::RuleOr_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    xor_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(250);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Or_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr_expression);
        setState(245);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(246);
        match(CortoParser::T__18);
        setState(247);
        xor_expression(0); 
      }
      setState(252);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, CortoParser::RuleXor_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(254);
    and_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Xor_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXor_expression);
        setState(256);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(257);
        match(CortoParser::T__19);
        setState(258);
        and_expression(0); 
      }
      setState(263);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, CortoParser::RuleAnd_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(265);
    equality_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<And_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd_expression);
        setState(267);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(268);
        match(CortoParser::REF);
        setState(269);
        equality_expression(0); 
      }
      setState(274);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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

CortoParser::Equality_operatorContext* CortoParser::Equality_expressionContext::equality_operator() {
  return getRuleContext<CortoParser::Equality_operatorContext>(0);
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
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, CortoParser::RuleEquality_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(276);
    relational_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(284);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Equality_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEquality_expression);
        setState(278);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(279);
        equality_operator();
        setState(280);
        relational_expression(0); 
      }
      setState(286);
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

//----------------- Equality_operatorContext ------------------------------------------------------------------

CortoParser::Equality_operatorContext::Equality_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Equality_operatorContext::getRuleIndex() const {
  return CortoParser::RuleEquality_operator;
}

void CortoParser::Equality_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_operator(this);
}

void CortoParser::Equality_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_operator(this);
}


antlrcpp::Any CortoParser::Equality_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEquality_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Equality_operatorContext* CortoParser::equality_operator() {
  Equality_operatorContext *_localctx = _tracker.createInstance<Equality_operatorContext>(_ctx, getState());
  enterRule(_localctx, 44, CortoParser::RuleEquality_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__20

    || _la == CortoParser::T__21)) {
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

CortoParser::Relational_operatorContext* CortoParser::Relational_expressionContext::relational_operator() {
  return getRuleContext<CortoParser::Relational_operatorContext>(0);
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
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, CortoParser::RuleRelational_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    shift_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(298);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Relational_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelational_expression);
        setState(292);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(293);
        relational_operator();
        setState(294);
        shift_expression(0); 
      }
      setState(300);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_operatorContext ------------------------------------------------------------------

CortoParser::Relational_operatorContext::Relational_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Relational_operatorContext::getRuleIndex() const {
  return CortoParser::RuleRelational_operator;
}

void CortoParser::Relational_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_operator(this);
}

void CortoParser::Relational_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_operator(this);
}


antlrcpp::Any CortoParser::Relational_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitRelational_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Relational_operatorContext* CortoParser::relational_operator() {
  Relational_operatorContext *_localctx = _tracker.createInstance<Relational_operatorContext>(_ctx, getState());
  enterRule(_localctx, 48, CortoParser::RuleRelational_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__23)
      | (1ULL << CortoParser::T__24)
      | (1ULL << CortoParser::T__25))) != 0))) {
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

CortoParser::Shift_operatorContext* CortoParser::Shift_expressionContext::shift_operator() {
  return getRuleContext<CortoParser::Shift_operatorContext>(0);
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
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, CortoParser::RuleShift_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(304);
    additive_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(312);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Shift_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShift_expression);
        setState(306);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(307);
        shift_operator();
        setState(308);
        additive_expression(0); 
      }
      setState(314);
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

//----------------- Shift_operatorContext ------------------------------------------------------------------

CortoParser::Shift_operatorContext::Shift_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Shift_operatorContext::getRuleIndex() const {
  return CortoParser::RuleShift_operator;
}

void CortoParser::Shift_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift_operator(this);
}

void CortoParser::Shift_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift_operator(this);
}


antlrcpp::Any CortoParser::Shift_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitShift_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Shift_operatorContext* CortoParser::shift_operator() {
  Shift_operatorContext *_localctx = _tracker.createInstance<Shift_operatorContext>(_ctx, getState());
  enterRule(_localctx, 52, CortoParser::RuleShift_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__26

    || _la == CortoParser::T__27)) {
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

CortoParser::Additive_operatorContext* CortoParser::Additive_expressionContext::additive_operator() {
  return getRuleContext<CortoParser::Additive_operatorContext>(0);
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
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, CortoParser::RuleAdditive_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(318);
    multiplicative_expression(0);
    _ctx->stop = _input->LT(-1);
    setState(326);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Additive_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAdditive_expression);
        setState(320);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(321);
        additive_operator();
        setState(322);
        multiplicative_expression(0); 
      }
      setState(328);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Additive_operatorContext ------------------------------------------------------------------

CortoParser::Additive_operatorContext::Additive_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Additive_operatorContext::getRuleIndex() const {
  return CortoParser::RuleAdditive_operator;
}

void CortoParser::Additive_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_operator(this);
}

void CortoParser::Additive_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_operator(this);
}


antlrcpp::Any CortoParser::Additive_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitAdditive_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Additive_operatorContext* CortoParser::additive_operator() {
  Additive_operatorContext *_localctx = _tracker.createInstance<Additive_operatorContext>(_ctx, getState());
  enterRule(_localctx, 56, CortoParser::RuleAdditive_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__28

    || _la == CortoParser::T__29)) {
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

CortoParser::Multiplicative_operatorContext* CortoParser::Multiplicative_expressionContext::multiplicative_operator() {
  return getRuleContext<CortoParser::Multiplicative_operatorContext>(0);
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
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, CortoParser::RuleMultiplicative_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(332);
    cast_expression();
    _ctx->stop = _input->LT(-1);
    setState(340);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Multiplicative_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMultiplicative_expression);
        setState(334);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(335);
        multiplicative_operator();
        setState(336);
        cast_expression(); 
      }
      setState(342);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Multiplicative_operatorContext ------------------------------------------------------------------

CortoParser::Multiplicative_operatorContext::Multiplicative_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Multiplicative_operatorContext::getRuleIndex() const {
  return CortoParser::RuleMultiplicative_operator;
}

void CortoParser::Multiplicative_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_operator(this);
}

void CortoParser::Multiplicative_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_operator(this);
}


antlrcpp::Any CortoParser::Multiplicative_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Multiplicative_operatorContext* CortoParser::multiplicative_operator() {
  Multiplicative_operatorContext *_localctx = _tracker.createInstance<Multiplicative_operatorContext>(_ctx, getState());
  enterRule(_localctx, 60, CortoParser::RuleMultiplicative_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__31)
      | (1ULL << CortoParser::T__32))) != 0))) {
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

//----------------- Cast_expressionContext ------------------------------------------------------------------

CortoParser::Cast_expressionContext::Cast_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Unary_expressionContext* CortoParser::Cast_expressionContext::unary_expression() {
  return getRuleContext<CortoParser::Unary_expressionContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Cast_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
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
  enterRule(_localctx, 62, CortoParser::RuleCast_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(351);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(345);
      unary_expression();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(346);
      match(CortoParser::T__3);
      setState(347);
      storage_expression(0);
      setState(348);
      match(CortoParser::T__4);
      setState(349);
      cast_expression();
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

//----------------- Unary_expressionContext ------------------------------------------------------------------

CortoParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Postfix_expressionContext* CortoParser::Unary_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::Inc_operatorContext* CortoParser::Unary_expressionContext::inc_operator() {
  return getRuleContext<CortoParser::Inc_operatorContext>(0);
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
  enterRule(_localctx, 64, CortoParser::RuleUnary_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__3:
      case CortoParser::T__22:
      case CortoParser::BOOLEAN:
      case CortoParser::NULL_LITERAL:
      case CortoParser::IDENTIFIER:
      case CortoParser::SCOPE_IDENTIFIER:
      case CortoParser::HEXADECIMAL:
      case CortoParser::SIGNED_INTEGER_MEASUREMENT:
      case CortoParser::INTEGER_MEASUREMENT:
      case CortoParser::FLOATING_POINT_MEASUREMENT:
      case CortoParser::INTEGER:
      case CortoParser::SIGNED_INTEGER:
      case CortoParser::FLOATING_POINT:
      case CortoParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(353);
        postfix_expression(0);
        break;
      }

      case CortoParser::T__34:
      case CortoParser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(354);
        inc_operator();
        setState(355);
        unary_expression();
        break;
      }

      case CortoParser::T__28:
      case CortoParser::T__29:
      case CortoParser::T__30:
      case CortoParser::T__33:
      case CortoParser::REF:
      case CortoParser::COND_NOT: {
        enterOuterAlt(_localctx, 3);
        setState(357);
        unary_operator();
        setState(358);
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

tree::TerminalNode* CortoParser::Unary_operatorContext::COND_NOT() {
  return getToken(CortoParser::COND_NOT, 0);
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
  enterRule(_localctx, 66, CortoParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::REF)
      | (1ULL << CortoParser::COND_NOT))) != 0))) {
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

CortoParser::LiteralContext* CortoParser::Postfix_expressionContext::literal() {
  return getRuleContext<CortoParser::LiteralContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Postfix_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::ExpressionContext* CortoParser::Postfix_expressionContext::expression() {
  return getRuleContext<CortoParser::ExpressionContext>(0);
}

CortoParser::Postfix_expressionContext* CortoParser::Postfix_expressionContext::postfix_expression() {
  return getRuleContext<CortoParser::Postfix_expressionContext>(0);
}

CortoParser::Inc_operatorContext* CortoParser::Postfix_expressionContext::inc_operator() {
  return getRuleContext<CortoParser::Inc_operatorContext>(0);
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
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, CortoParser::RulePostfix_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::BOOLEAN:
      case CortoParser::NULL_LITERAL:
      case CortoParser::HEXADECIMAL:
      case CortoParser::SIGNED_INTEGER_MEASUREMENT:
      case CortoParser::INTEGER_MEASUREMENT:
      case CortoParser::FLOATING_POINT_MEASUREMENT:
      case CortoParser::INTEGER:
      case CortoParser::SIGNED_INTEGER:
      case CortoParser::FLOATING_POINT:
      case CortoParser::STRING: {
        setState(365);
        literal();
        break;
      }

      case CortoParser::T__22:
      case CortoParser::IDENTIFIER:
      case CortoParser::SCOPE_IDENTIFIER: {
        setState(366);
        storage_expression(0);
        break;
      }

      case CortoParser::T__3: {
        setState(367);
        match(CortoParser::T__3);
        setState(368);
        expression();
        setState(369);
        match(CortoParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(377);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Postfix_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RulePostfix_expression);
        setState(373);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(374);
        inc_operator(); 
      }
      setState(379);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Inc_operatorContext ------------------------------------------------------------------

CortoParser::Inc_operatorContext::Inc_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CortoParser::Inc_operatorContext::getRuleIndex() const {
  return CortoParser::RuleInc_operator;
}

void CortoParser::Inc_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc_operator(this);
}

void CortoParser::Inc_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc_operator(this);
}


antlrcpp::Any CortoParser::Inc_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInc_operator(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Inc_operatorContext* CortoParser::inc_operator() {
  Inc_operatorContext *_localctx = _tracker.createInstance<Inc_operatorContext>(_ctx, getState());
  enterRule(_localctx, 70, CortoParser::RuleInc_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    _la = _input->LA(1);
    if (!(_la == CortoParser::T__34

    || _la == CortoParser::T__35)) {
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

//----------------- Storage_expressionContext ------------------------------------------------------------------

CortoParser::Storage_expressionContext::Storage_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CortoParser::Storage_identifierContext* CortoParser::Storage_expressionContext::storage_identifier() {
  return getRuleContext<CortoParser::Storage_identifierContext>(0);
}

CortoParser::Storage_expressionContext* CortoParser::Storage_expressionContext::storage_expression() {
  return getRuleContext<CortoParser::Storage_expressionContext>(0);
}

CortoParser::Initializer_collectionContext* CortoParser::Storage_expressionContext::initializer_collection() {
  return getRuleContext<CortoParser::Initializer_collectionContext>(0);
}


size_t CortoParser::Storage_expressionContext::getRuleIndex() const {
  return CortoParser::RuleStorage_expression;
}

void CortoParser::Storage_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorage_expression(this);
}

void CortoParser::Storage_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorage_expression(this);
}


antlrcpp::Any CortoParser::Storage_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStorage_expression(this);
  else
    return visitor->visitChildren(this);
}


CortoParser::Storage_expressionContext* CortoParser::storage_expression() {
   return storage_expression(0);
}

CortoParser::Storage_expressionContext* CortoParser::storage_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CortoParser::Storage_expressionContext *_localctx = _tracker.createInstance<Storage_expressionContext>(_ctx, parentState);
  CortoParser::Storage_expressionContext *previousContext = _localctx;
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, CortoParser::RuleStorage_expression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(383);
    storage_identifier();
    _ctx->stop = _input->LT(-1);
    setState(389);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Storage_expressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStorage_expression);
        setState(385);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(386);
        initializer_collection(); 
      }
      setState(391);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
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

CortoParser::Initializer_listContext* CortoParser::Initializer_assignmentContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}

CortoParser::Initializer_expressionContext* CortoParser::Initializer_assignmentContext::initializer_expression() {
  return getRuleContext<CortoParser::Initializer_expressionContext>(0);
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
  enterRule(_localctx, 74, CortoParser::RuleInitializer_assignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(396);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__17: {
        enterOuterAlt(_localctx, 1);
        setState(392);
        match(CortoParser::T__17);
        setState(393);
        initializer_list();
        break;
      }

      case CortoParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(394);
        match(CortoParser::T__5);
        setState(395);
        initializer_expression();
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
  enterRule(_localctx, 76, CortoParser::RuleInitializer_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(400);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(398);
        initializer_composite();
        break;
      }

      case CortoParser::T__36: {
        enterOuterAlt(_localctx, 2);
        setState(399);
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

std::vector<tree::TerminalNode *> CortoParser::Initializer_compositeContext::NL() {
  return getTokens(CortoParser::NL);
}

tree::TerminalNode* CortoParser::Initializer_compositeContext::NL(size_t i) {
  return getToken(CortoParser::NL, i);
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
  enterRule(_localctx, 78, CortoParser::RuleInitializer_composite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(CortoParser::T__0);
    setState(404);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(403);
      match(CortoParser::NL);
      break;
    }

    }
    setState(407);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__0)
      | (1ULL << CortoParser::T__3)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__35)
      | (1ULL << CortoParser::T__36)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::REF)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING))) != 0)) {
      setState(406);
      initializer_list();
    }
    setState(410);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::NL) {
      setState(409);
      match(CortoParser::NL);
    }
    setState(412);
    match(CortoParser::T__1);
   
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

std::vector<tree::TerminalNode *> CortoParser::Initializer_collectionContext::NL() {
  return getTokens(CortoParser::NL);
}

tree::TerminalNode* CortoParser::Initializer_collectionContext::NL(size_t i) {
  return getToken(CortoParser::NL, i);
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
  enterRule(_localctx, 80, CortoParser::RuleInitializer_collection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    match(CortoParser::T__36);
    setState(416);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(415);
      match(CortoParser::NL);
      break;
    }

    }
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__0)
      | (1ULL << CortoParser::T__3)
      | (1ULL << CortoParser::T__22)
      | (1ULL << CortoParser::T__28)
      | (1ULL << CortoParser::T__29)
      | (1ULL << CortoParser::T__30)
      | (1ULL << CortoParser::T__33)
      | (1ULL << CortoParser::T__34)
      | (1ULL << CortoParser::T__35)
      | (1ULL << CortoParser::T__36)
      | (1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::REF)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::COND_NOT)
      | (1ULL << CortoParser::IDENTIFIER)
      | (1ULL << CortoParser::SCOPE_IDENTIFIER)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
      | (1ULL << CortoParser::STRING))) != 0)) {
      setState(418);
      initializer_list();
    }
    setState(422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CortoParser::NL) {
      setState(421);
      match(CortoParser::NL);
    }
    setState(424);
    match(CortoParser::T__37);
   
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

std::vector<tree::TerminalNode *> CortoParser::Initializer_listContext::NL() {
  return getTokens(CortoParser::NL);
}

tree::TerminalNode* CortoParser::Initializer_listContext::NL(size_t i) {
  return getToken(CortoParser::NL, i);
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
  enterRule(_localctx, 82, CortoParser::RuleInitializer_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    initializer_value();
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CortoParser::T__2) {
      setState(427);
      match(CortoParser::T__2);
      setState(429);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CortoParser::NL) {
        setState(428);
        match(CortoParser::NL);
      }
      setState(431);
      initializer_value();
      setState(436);
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
  enterRule(_localctx, 84, CortoParser::RuleInitializer_value);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(437);
      initializer_key();
      setState(438);
      match(CortoParser::T__17);
      setState(441);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CortoParser::T__0:
        case CortoParser::T__36: {
          setState(439);
          initializer_expression();
          break;
        }

        case CortoParser::T__3:
        case CortoParser::T__22:
        case CortoParser::T__28:
        case CortoParser::T__29:
        case CortoParser::T__30:
        case CortoParser::T__33:
        case CortoParser::T__34:
        case CortoParser::T__35:
        case CortoParser::BOOLEAN:
        case CortoParser::REF:
        case CortoParser::NULL_LITERAL:
        case CortoParser::COND_NOT:
        case CortoParser::IDENTIFIER:
        case CortoParser::SCOPE_IDENTIFIER:
        case CortoParser::HEXADECIMAL:
        case CortoParser::SIGNED_INTEGER_MEASUREMENT:
        case CortoParser::INTEGER_MEASUREMENT:
        case CortoParser::FLOATING_POINT_MEASUREMENT:
        case CortoParser::INTEGER:
        case CortoParser::SIGNED_INTEGER:
        case CortoParser::FLOATING_POINT:
        case CortoParser::STRING: {
          setState(440);
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
      setState(443);
      initializer_expression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(444);
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

CortoParser::LiteralContext* CortoParser::Initializer_keyContext::literal() {
  return getRuleContext<CortoParser::LiteralContext>(0);
}

CortoParser::Storage_identifierContext* CortoParser::Initializer_keyContext::storage_identifier() {
  return getRuleContext<CortoParser::Storage_identifierContext>(0);
}

tree::TerminalNode* CortoParser::Initializer_keyContext::STRING() {
  return getToken(CortoParser::STRING, 0);
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
  enterRule(_localctx, 86, CortoParser::RuleInitializer_key);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(447);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(448);
      storage_identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(449);
      match(CortoParser::STRING);
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

//----------------- LiteralContext ------------------------------------------------------------------

CortoParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::LiteralContext::BOOLEAN() {
  return getToken(CortoParser::BOOLEAN, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::HEXADECIMAL() {
  return getToken(CortoParser::HEXADECIMAL, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::FLOATING_POINT_MEASUREMENT() {
  return getToken(CortoParser::FLOATING_POINT_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::SIGNED_INTEGER_MEASUREMENT() {
  return getToken(CortoParser::SIGNED_INTEGER_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::INTEGER_MEASUREMENT() {
  return getToken(CortoParser::INTEGER_MEASUREMENT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::SIGNED_INTEGER() {
  return getToken(CortoParser::SIGNED_INTEGER, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::FLOATING_POINT() {
  return getToken(CortoParser::FLOATING_POINT, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::INTEGER() {
  return getToken(CortoParser::INTEGER, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::STRING() {
  return getToken(CortoParser::STRING, 0);
}

tree::TerminalNode* CortoParser::LiteralContext::NULL_LITERAL() {
  return getToken(CortoParser::NULL_LITERAL, 0);
}


size_t CortoParser::LiteralContext::getRuleIndex() const {
  return CortoParser::RuleLiteral;
}

void CortoParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void CortoParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any CortoParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::LiteralContext* CortoParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 88, CortoParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::BOOLEAN)
      | (1ULL << CortoParser::NULL_LITERAL)
      | (1ULL << CortoParser::HEXADECIMAL)
      | (1ULL << CortoParser::SIGNED_INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER_MEASUREMENT)
      | (1ULL << CortoParser::FLOATING_POINT_MEASUREMENT)
      | (1ULL << CortoParser::INTEGER)
      | (1ULL << CortoParser::SIGNED_INTEGER)
      | (1ULL << CortoParser::FLOATING_POINT)
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

//----------------- Storage_identifierContext ------------------------------------------------------------------

CortoParser::Storage_identifierContext::Storage_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::Storage_identifierContext::IDENTIFIER() {
  return getToken(CortoParser::IDENTIFIER, 0);
}

tree::TerminalNode* CortoParser::Storage_identifierContext::SCOPE_IDENTIFIER() {
  return getToken(CortoParser::SCOPE_IDENTIFIER, 0);
}

CortoParser::Initializer_listContext* CortoParser::Storage_identifierContext::initializer_list() {
  return getRuleContext<CortoParser::Initializer_listContext>(0);
}


size_t CortoParser::Storage_identifierContext::getRuleIndex() const {
  return CortoParser::RuleStorage_identifier;
}

void CortoParser::Storage_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStorage_identifier(this);
}

void CortoParser::Storage_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStorage_identifier(this);
}


antlrcpp::Any CortoParser::Storage_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitStorage_identifier(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::Storage_identifierContext* CortoParser::storage_identifier() {
  Storage_identifierContext *_localctx = _tracker.createInstance<Storage_identifierContext>(_ctx, getState());
  enterRule(_localctx, 90, CortoParser::RuleStorage_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(460);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CortoParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(454);
        match(CortoParser::IDENTIFIER);
        break;
      }

      case CortoParser::SCOPE_IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(455);
        match(CortoParser::SCOPE_IDENTIFIER);
        break;
      }

      case CortoParser::T__22: {
        enterOuterAlt(_localctx, 3);
        setState(456);
        match(CortoParser::T__22);
        setState(457);
        initializer_list();
        setState(458);
        match(CortoParser::T__23);
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

//----------------- InoutContext ------------------------------------------------------------------

CortoParser::InoutContext::InoutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::InoutContext::IN() {
  return getToken(CortoParser::IN, 0);
}


size_t CortoParser::InoutContext::getRuleIndex() const {
  return CortoParser::RuleInout;
}

void CortoParser::InoutContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInout(this);
}

void CortoParser::InoutContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInout(this);
}


antlrcpp::Any CortoParser::InoutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitInout(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::InoutContext* CortoParser::inout() {
  InoutContext *_localctx = _tracker.createInstance<InoutContext>(_ctx, getState());
  enterRule(_localctx, 92, CortoParser::RuleInout);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CortoParser::T__38)
      | (1ULL << CortoParser::T__39)
      | (1ULL << CortoParser::IN))) != 0))) {
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

//----------------- EolContext ------------------------------------------------------------------

CortoParser::EolContext::EolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CortoParser::EolContext::NL() {
  return getToken(CortoParser::NL, 0);
}

tree::TerminalNode* CortoParser::EolContext::EOF() {
  return getToken(CortoParser::EOF, 0);
}


size_t CortoParser::EolContext::getRuleIndex() const {
  return CortoParser::RuleEol;
}

void CortoParser::EolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEol(this);
}

void CortoParser::EolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CortoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEol(this);
}


antlrcpp::Any CortoParser::EolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CortoVisitor*>(visitor))
    return parserVisitor->visitEol(this);
  else
    return visitor->visitChildren(this);
}

CortoParser::EolContext* CortoParser::eol() {
  EolContext *_localctx = _tracker.createInstance<EolContext>(_ctx, getState());
  enterRule(_localctx, 94, CortoParser::RuleEol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    _la = _input->LA(1);
    if (!(((((_la - -1) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - -1)) & ((1ULL << (CortoParser::EOF - -1))
      | (1ULL << (CortoParser::T__40 - -1))
      | (1ULL << (CortoParser::NL - -1)))) != 0))) {
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

bool CortoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return logical_or_expressionSempred(dynamic_cast<Logical_or_expressionContext *>(context), predicateIndex);
    case 17: return logical_and_expressionSempred(dynamic_cast<Logical_and_expressionContext *>(context), predicateIndex);
    case 18: return or_expressionSempred(dynamic_cast<Or_expressionContext *>(context), predicateIndex);
    case 19: return xor_expressionSempred(dynamic_cast<Xor_expressionContext *>(context), predicateIndex);
    case 20: return and_expressionSempred(dynamic_cast<And_expressionContext *>(context), predicateIndex);
    case 21: return equality_expressionSempred(dynamic_cast<Equality_expressionContext *>(context), predicateIndex);
    case 23: return relational_expressionSempred(dynamic_cast<Relational_expressionContext *>(context), predicateIndex);
    case 25: return shift_expressionSempred(dynamic_cast<Shift_expressionContext *>(context), predicateIndex);
    case 27: return additive_expressionSempred(dynamic_cast<Additive_expressionContext *>(context), predicateIndex);
    case 29: return multiplicative_expressionSempred(dynamic_cast<Multiplicative_expressionContext *>(context), predicateIndex);
    case 34: return postfix_expressionSempred(dynamic_cast<Postfix_expressionContext *>(context), predicateIndex);
    case 36: return storage_expressionSempred(dynamic_cast<Storage_expressionContext *>(context), predicateIndex);

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
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::relational_expressionSempred(Relational_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::shift_expressionSempred(Shift_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::additive_expressionSempred(Additive_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::multiplicative_expressionSempred(Multiplicative_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CortoParser::postfix_expressionSempred(Postfix_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CortoParser::storage_expressionSempred(Storage_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

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
  "program", "statements", "statement", "scope_statement", "scope", "use_statement", 
  "in_declaration", "declaration", "function_identifier", "declaration_identifier", 
  "argument_declaration", "argument", "expression", "assignment_expression", 
  "assignment_operator", "conditional_expression", "logical_or_expression", 
  "logical_and_expression", "or_expression", "xor_expression", "and_expression", 
  "equality_expression", "equality_operator", "relational_expression", "relational_operator", 
  "shift_expression", "shift_operator", "additive_expression", "additive_operator", 
  "multiplicative_expression", "multiplicative_operator", "cast_expression", 
  "unary_expression", "unary_operator", "postfix_expression", "inc_operator", 
  "storage_expression", "initializer_assignment", "initializer_expression", 
  "initializer_composite", "initializer_collection", "initializer_list", 
  "initializer_value", "initializer_key", "literal", "storage_identifier", 
  "inout", "eol"
};

std::vector<std::string> CortoParser::_literalNames = {
  "", "'{'", "'}'", "','", "'('", "')'", "'='", "'*='", "'/='", "'%='", 
  "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", "'?'", "':'", 
  "'|'", "'^'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'<<'", "'>>'", 
  "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'++'", "'--'", "'['", "']'", 
  "'out'", "'inout'", "';'", "", "'in'", "'use'", "'as'", "'typesystem'", 
  "'&'", "'null'"
};

std::vector<std::string> CortoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "BOOLEAN", "IN", "USE", "AS", "TYPESYSTEM", "REF", 
  "NULL_LITERAL", "COND_AND", "COND_OR", "COND_NOT", "IDENTIFIER", "SCOPE_IDENTIFIER", 
  "HEXADECIMAL", "SIGNED_INTEGER_MEASUREMENT", "INTEGER_MEASUREMENT", "FLOATING_POINT_MEASUREMENT", 
  "INTEGER", "SIGNED_INTEGER", "FLOATING_POINT", "STRING", "NL", "WS"
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
    0x3, 0x41, 0x1d5, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x7, 0x3, 0x66, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x69, 0xb, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x72, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x76, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x7a, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x7d, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x83, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x8a, 0xa, 0x7, 0x5, 0x7, 0x8c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x5, 0x9, 0x92, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x96, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x9a, 0xa, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x9d, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xa1, 0xa, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0xa5, 0xa, 0x9, 0x5, 0x9, 0xa7, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xaf, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xb2, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0xb8, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xbb, 0xb, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc1, 0xa, 0xc, 
    0x3, 0xd, 0x5, 0xd, 0xc4, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc8, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xd3, 0xa, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xdd, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xe5, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0xe8, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0xf0, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xf3, 0xb, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0xfb, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xfe, 0xb, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0x106, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x109, 0xb, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x111, 
    0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x114, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x11d, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x120, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x7, 0x19, 0x12b, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x12e, 0xb, 
    0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x139, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x13c, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x147, 
    0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x14a, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x7, 0x1f, 0x155, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x158, 0xb, 
    0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x162, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x16b, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x176, 0xa, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x17a, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 
    0x17d, 0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x186, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 
    0x189, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x18f, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x193, 0xa, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x197, 0xa, 0x29, 0x3, 0x29, 0x5, 0x29, 
    0x19a, 0xa, 0x29, 0x3, 0x29, 0x5, 0x29, 0x19d, 0xa, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1a3, 0xa, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x1a6, 0xa, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1a9, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1b0, 
    0xa, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1b3, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 
    0x1b6, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x1bc, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1c0, 0xa, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1c5, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x5, 0x2f, 0x1cf, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x2, 0xe, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x30, 0x34, 0x38, 0x3c, 0x46, 0x4a, 0x32, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 
    0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 
    0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x2, 0xd, 0x3, 0x2, 0x8, 0x12, 0x3, 
    0x2, 0x17, 0x18, 0x3, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 
    0x1f, 0x20, 0x3, 0x2, 0x21, 0x23, 0x6, 0x2, 0x1f, 0x21, 0x24, 0x24, 
    0x31, 0x31, 0x35, 0x35, 0x3, 0x2, 0x25, 0x26, 0x5, 0x2, 0x2c, 0x2c, 
    0x32, 0x32, 0x38, 0x3f, 0x4, 0x2, 0x29, 0x2a, 0x2d, 0x2d, 0x4, 0x3, 
    0x2b, 0x2b, 0x40, 0x40, 0x2, 0x1de, 0x2, 0x62, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x6, 0x71, 0x3, 0x2, 0x2, 0x2, 0x8, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x77, 0x3, 0x2, 0x2, 0x2, 0xc, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x14, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x22, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x123, 0x3, 0x2, 0x2, 0x2, 0x32, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x131, 0x3, 0x2, 0x2, 0x2, 0x36, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x13f, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x14d, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x159, 0x3, 0x2, 0x2, 0x2, 0x40, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x44, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x175, 0x3, 0x2, 0x2, 0x2, 0x48, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x180, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x192, 0x3, 0x2, 0x2, 0x2, 0x50, 0x194, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1bf, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0x4, 0x3, 0x2, 
    0x63, 0x3, 0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 0x5, 0x6, 0x4, 0x2, 0x65, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x72, 0x7, 0x40, 
    0x2, 0x2, 0x6b, 0x6c, 0x5, 0x1a, 0xe, 0x2, 0x6c, 0x6d, 0x5, 0x60, 0x31, 
    0x2, 0x6d, 0x72, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x72, 0x5, 0xc, 0x7, 0x2, 
    0x6f, 0x72, 0x5, 0xe, 0x8, 0x2, 0x70, 0x72, 0x5, 0x10, 0x9, 0x2, 0x71, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x7, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 0x7, 0x40, 
    0x2, 0x2, 0x74, 0x76, 0x5, 0x10, 0x9, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x8, 0x5, 0x2, 0x79, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x4, 
    0x2, 0x2, 0x7f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x2e, 0x2, 
    0x2, 0x81, 0x83, 0x7, 0x30, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x8c, 0x5, 0x5c, 0x2f, 0x2, 0x85, 0x86, 0x7, 0x2e, 0x2, 0x2, 0x86, 0x89, 
    0x5, 0x5c, 0x2f, 0x2, 0x87, 0x88, 0x7, 0x2f, 0x2, 0x2, 0x88, 0x8a, 0x5, 
    0x5c, 0x2f, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8c, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x7, 0x2d, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x5, 0x4a, 0x26, 0x2, 0x91, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x95, 0x5, 0x14, 0xb, 0x2, 0x94, 0x96, 0x5, 0x4c, 
    0x27, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 0x5, 0xa, 0x6, 0x2, 
    0x98, 0x9a, 0x5, 0x60, 0x31, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 
    0x5, 0x4a, 0x26, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x12, 
    0xa, 0x2, 0x9f, 0xa1, 0x5, 0x54, 0x2b, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa5, 0x5, 0xa, 0x6, 0x2, 0xa3, 0xa5, 0x5, 0x60, 0x31, 0x2, 0xa4, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0x91, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x5c, 
    0x2f, 0x2, 0xa9, 0xaa, 0x5, 0x16, 0xc, 0x2, 0xaa, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xb0, 0x5, 0x5c, 0x2f, 0x2, 0xac, 0xad, 0x7, 0x5, 0x2, 0x2, 
    0xad, 0xaf, 0x5, 0x5c, 0x2f, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0x15, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x6, 0x2, 0x2, 0xb4, 0xb9, 0x5, 0x18, 
    0xd, 0x2, 0xb5, 0xb6, 0x7, 0x5, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x18, 0xd, 
    0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x7, 0x7, 0x2, 0x2, 0xbd, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 
    0x6, 0x2, 0x2, 0xbf, 0xc1, 0x7, 0x7, 0x2, 0x2, 0xc0, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc4, 0x5, 0x5e, 0x30, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc7, 0x5, 0x4a, 0x26, 0x2, 0xc6, 0xc8, 0x7, 0x31, 0x2, 0x2, 0xc7, 0xc6, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x36, 0x2, 0x2, 0xca, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x5, 0x1c, 0xf, 0x2, 0xcc, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xd3, 0x5, 0x20, 0x11, 0x2, 0xce, 0xcf, 0x5, 0x4a, 0x26, 
    0x2, 0xcf, 0xd0, 0x5, 0x1e, 0x10, 0x2, 0xd0, 0xd1, 0x5, 0x1c, 0xf, 0x2, 
    0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xd3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 
    0x9, 0x2, 0x2, 0x2, 0xd5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xdc, 0x5, 
    0x22, 0x12, 0x2, 0xd7, 0xd8, 0x7, 0x13, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x1a, 
    0xe, 0x2, 0xd9, 0xda, 0x7, 0x14, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x20, 0x11, 
    0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0x21, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x8, 0x12, 0x1, 0x2, 0xdf, 0xe0, 0x5, 0x24, 0x13, 0x2, 0xe0, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0xc, 0x3, 0x2, 0x2, 0xe2, 0xe3, 0x7, 
    0x34, 0x2, 0x2, 0xe3, 0xe5, 0x5, 0x24, 0x13, 0x2, 0xe4, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x8, 0x13, 0x1, 0x2, 0xea, 
    0xeb, 0x5, 0x26, 0x14, 0x2, 0xeb, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 
    0xc, 0x3, 0x2, 0x2, 0xed, 0xee, 0x7, 0x33, 0x2, 0x2, 0xee, 0xf0, 0x5, 
    0x26, 0x14, 0x2, 0xef, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf5, 0x8, 0x14, 0x1, 0x2, 0xf5, 0xf6, 0x5, 0x28, 0x15, 0x2, 0xf6, 
    0xfc, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0xc, 0x3, 0x2, 0x2, 0xf8, 0xf9, 
    0x7, 0x15, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0x28, 0x15, 0x2, 0xfa, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x8, 0x15, 0x1, 0x2, 
    0x100, 0x101, 0x5, 0x2a, 0x16, 0x2, 0x101, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x103, 0xc, 0x3, 0x2, 0x2, 0x103, 0x104, 0x7, 0x16, 0x2, 0x2, 
    0x104, 0x106, 0x5, 0x2a, 0x16, 0x2, 0x105, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x29, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x8, 0x16, 0x1, 0x2, 0x10b, 
    0x10c, 0x5, 0x2c, 0x17, 0x2, 0x10c, 0x112, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0xc, 0x3, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x31, 0x2, 0x2, 0x10f, 
    0x111, 0x5, 0x2c, 0x17, 0x2, 0x110, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x8, 0x17, 0x1, 0x2, 0x116, 0x117, 
    0x5, 0x30, 0x19, 0x2, 0x117, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
    0xc, 0x3, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x2e, 0x18, 0x2, 0x11a, 0x11b, 
    0x5, 0x30, 0x19, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x9, 
    0x3, 0x2, 0x2, 0x122, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x8, 0x19, 
    0x1, 0x2, 0x124, 0x125, 0x5, 0x34, 0x1b, 0x2, 0x125, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x127, 0xc, 0x3, 0x2, 0x2, 0x127, 0x128, 0x5, 0x32, 
    0x1a, 0x2, 0x128, 0x129, 0x5, 0x34, 0x1b, 0x2, 0x129, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12e, 0x3, 0x2, 
    0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x130, 0x9, 0x4, 0x2, 0x2, 0x130, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x132, 0x8, 0x1b, 0x1, 0x2, 0x132, 0x133, 0x5, 0x38, 0x1d, 0x2, 
    0x133, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0xc, 0x3, 0x2, 0x2, 
    0x135, 0x136, 0x5, 0x36, 0x1c, 0x2, 0x136, 0x137, 0x5, 0x38, 0x1d, 0x2, 
    0x137, 0x139, 0x3, 0x2, 0x2, 0x2, 0x138, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x13c, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x9, 0x5, 0x2, 0x2, 0x13e, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x8, 0x1d, 0x1, 0x2, 0x140, 
    0x141, 0x5, 0x3c, 0x1f, 0x2, 0x141, 0x148, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x143, 0xc, 0x3, 0x2, 0x2, 0x143, 0x144, 0x5, 0x3a, 0x1e, 0x2, 0x144, 
    0x145, 0x5, 0x3c, 0x1f, 0x2, 0x145, 0x147, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x142, 0x3, 0x2, 0x2, 0x2, 0x147, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x148, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 
    0x9, 0x6, 0x2, 0x2, 0x14c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x8, 
    0x1f, 0x1, 0x2, 0x14e, 0x14f, 0x5, 0x40, 0x21, 0x2, 0x14f, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x150, 0x151, 0xc, 0x3, 0x2, 0x2, 0x151, 0x152, 0x5, 
    0x3e, 0x20, 0x2, 0x152, 0x153, 0x5, 0x40, 0x21, 0x2, 0x153, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x150, 0x3, 0x2, 0x2, 0x2, 0x155, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15a, 0x9, 0x7, 0x2, 0x2, 0x15a, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x162, 0x5, 0x42, 0x22, 0x2, 0x15c, 0x15d, 0x7, 0x6, 0x2, 
    0x2, 0x15d, 0x15e, 0x5, 0x4a, 0x26, 0x2, 0x15e, 0x15f, 0x7, 0x7, 0x2, 
    0x2, 0x15f, 0x160, 0x5, 0x40, 0x21, 0x2, 0x160, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x161, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x41, 0x3, 0x2, 0x2, 0x2, 0x163, 0x16b, 0x5, 0x46, 0x24, 
    0x2, 0x164, 0x165, 0x5, 0x48, 0x25, 0x2, 0x165, 0x166, 0x5, 0x42, 0x22, 
    0x2, 0x166, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x5, 0x44, 0x23, 
    0x2, 0x168, 0x169, 0x5, 0x40, 0x21, 0x2, 0x169, 0x16b, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x163, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x16c, 0x16d, 0x9, 0x8, 0x2, 0x2, 0x16d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x16e, 
    0x16f, 0x8, 0x24, 0x1, 0x2, 0x16f, 0x176, 0x5, 0x5a, 0x2e, 0x2, 0x170, 
    0x176, 0x5, 0x4a, 0x26, 0x2, 0x171, 0x172, 0x7, 0x6, 0x2, 0x2, 0x172, 
    0x173, 0x5, 0x1a, 0xe, 0x2, 0x173, 0x174, 0x7, 0x7, 0x2, 0x2, 0x174, 
    0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x175, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x175, 0x171, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x17b, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0xc, 0x4, 0x2, 0x2, 0x178, 
    0x17a, 0x5, 0x48, 0x25, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 
    0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x9, 0x9, 0x2, 0x2, 0x17f, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x181, 0x8, 0x26, 0x1, 0x2, 0x181, 0x182, 0x5, 
    0x5c, 0x2f, 0x2, 0x182, 0x187, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0xc, 
    0x3, 0x2, 0x2, 0x184, 0x186, 0x5, 0x52, 0x2a, 0x2, 0x185, 0x183, 0x3, 
    0x2, 0x2, 0x2, 0x186, 0x189, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 
    0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x14, 
    0x2, 0x2, 0x18b, 0x18f, 0x5, 0x54, 0x2b, 0x2, 0x18c, 0x18d, 0x7, 0x8, 
    0x2, 0x2, 0x18d, 0x18f, 0x5, 0x4e, 0x28, 0x2, 0x18e, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x193, 0x5, 0x50, 0x29, 0x2, 0x191, 0x193, 0x5, 0x52, 0x2a, 
    0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x7, 0x3, 0x2, 0x2, 
    0x195, 0x197, 0x7, 0x40, 0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x19a, 0x5, 0x54, 0x2b, 0x2, 0x199, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x19d, 0x7, 0x40, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x7, 0x4, 0x2, 0x2, 0x19f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1a0, 
    0x1a2, 0x7, 0x27, 0x2, 0x2, 0x1a1, 0x1a3, 0x7, 0x40, 0x2, 0x2, 0x1a2, 
    0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x5, 0x54, 0x2b, 0x2, 0x1a5, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x40, 0x2, 0x2, 0x1a8, 
    0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x28, 0x2, 0x2, 0x1ab, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1b4, 0x5, 0x56, 0x2c, 0x2, 0x1ad, 
    0x1af, 0x7, 0x5, 0x2, 0x2, 0x1ae, 0x1b0, 0x7, 0x40, 0x2, 0x2, 0x1af, 
    0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 
    0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x5, 0x56, 0x2c, 0x2, 0x1b2, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b4, 
    0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 
    0x5, 0x58, 0x2d, 0x2, 0x1b8, 0x1bb, 0x7, 0x14, 0x2, 0x2, 0x1b9, 0x1bc, 
    0x5, 0x4e, 0x28, 0x2, 0x1ba, 0x1bc, 0x5, 0x1a, 0xe, 0x2, 0x1bb, 0x1b9, 
    0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1c0, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c0, 0x5, 0x4e, 0x28, 0x2, 0x1be, 0x1c0, 
    0x5, 0x1a, 0xe, 0x2, 0x1bf, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x1c5, 0x5, 0x5a, 0x2e, 0x2, 0x1c2, 0x1c5, 0x5, 
    0x5c, 0x2f, 0x2, 0x1c3, 0x1c5, 0x7, 0x3f, 0x2, 0x2, 0x1c4, 0x1c1, 0x3, 
    0x2, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c3, 0x3, 
    0x2, 0x2, 0x2, 0x1c5, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x9, 0xa, 
    0x2, 0x2, 0x1c7, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cf, 0x7, 0x36, 
    0x2, 0x2, 0x1c9, 0x1cf, 0x7, 0x37, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x19, 
    0x2, 0x2, 0x1cb, 0x1cc, 0x5, 0x54, 0x2b, 0x2, 0x1cc, 0x1cd, 0x7, 0x1a, 
    0x2, 0x2, 0x1cd, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1c8, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x9, 0xb, 0x2, 
    0x2, 0x1d1, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x9, 0xc, 0x2, 0x2, 
    0x1d3, 0x61, 0x3, 0x2, 0x2, 0x2, 0x34, 0x67, 0x71, 0x75, 0x7b, 0x82, 
    0x89, 0x8b, 0x91, 0x95, 0x99, 0x9c, 0xa0, 0xa4, 0xa6, 0xb0, 0xb9, 0xc0, 
    0xc3, 0xc7, 0xd2, 0xdc, 0xe6, 0xf1, 0xfc, 0x107, 0x112, 0x11e, 0x12c, 
    0x13a, 0x148, 0x156, 0x161, 0x16a, 0x175, 0x17b, 0x187, 0x18e, 0x192, 
    0x196, 0x199, 0x19c, 0x1a2, 0x1a5, 0x1a8, 0x1af, 0x1b4, 0x1bb, 0x1bf, 
    0x1c4, 0x1ce, 
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
