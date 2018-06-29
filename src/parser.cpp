/* This is a managed file. Do not delete this comment. */

#include <corto/script/parser/parser.h>

#include "antlr4-runtime.h"
#include "CortoLexer.h"
#include "CortoParser.h"

using namespace antlr4;

extern "C"
int cortomain(int argc, char *argv[]) {
    int result = 0;

    if (argc > 1) {
        FILE *f = fopen(argv[1], "r");
        if (f) fclose(f);
        if (f) {
            try {
                ANTLRFileStream input(argv[1]);
                CortoLexer lexer(&input);
                CommonTokenStream tokens(&lexer);
                tokens.fill();
                for (auto token : tokens.getTokens()) {
                    std::cout << token->toString() << std::endl;
                }
                CortoParser parser(&tokens);
                tree::ParseTree* tree = parser.program();
                std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
            } catch(std::exception &e) {
                printf("failed to parse file '%s'\n", argv[1]);
                result = -1;
            }
        } else {
            ANTLRInputStream input(argv[1]);
            CortoLexer lexer(&input);
            CommonTokenStream tokens(&lexer);
            tokens.fill();
            for (auto token : tokens.getTokens()) {
                std::cout << token->toString() << std::endl;
            }
            CortoParser parser(&tokens);
            tree::ParseTree* tree = parser.program();
            std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
        }
    }

    return result;
}
