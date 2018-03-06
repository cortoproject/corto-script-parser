/* This is a managed file. Do not delete this comment. */

#include <corto/parser/parser.h>

#include "antlr4-runtime.h"
#include "CortoLexer.h"
#include "CortoParser.h"

using namespace antlr4;

extern "C"
int cortomain(int argc, char *argv[]) {
    int result = 0;

    if (argc > 1) {
        try {
            ANTLRFileStream input(argv[1]);
            CortoLexer lexer(&input);
            CommonTokenStream tokens(&lexer);
            tokens.fill();
            CortoParser parser(&tokens);

            tree::ParseTree* tree = parser.program();
            std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

        } catch(std::exception &e) {
            corto_throw("failed to parse file '%s'", argv[1]);
            result = -1;
        }
    } else {
        corto_throw("missing input file");
        result = -1;
    }

    return result;
}
