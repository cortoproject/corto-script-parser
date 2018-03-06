# script-parser
This project contains the ANTLR-generated parser for the corto scripting language. The project contains a CortoBaseVisitor class which 
can be overridden to walk over the generated parser tree.

## Dependencies
This project depends on:
- `corto/antlr4` (antlr4 tool - https://github.com/cortoproject/antlr4)
- `corto/antlr4/cpp` (antlr4 C++ runtime - https://github.com/cortoproject/antlr4-cpp)

## Regenerate parser
To regenerate the parser after making changes to the `Corto.g4` file, run the following commands (from the project root):
```bash
cd src
corto antlr4 -Dlanguage=Cpp -visitor Corto.g4
mv *.h ../include/
```


