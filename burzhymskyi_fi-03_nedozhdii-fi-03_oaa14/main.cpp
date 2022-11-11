#include "Parser.h"
#include "Tree.h"

int main() {

//    Tree a;
//    std::string b = "fmc";
//
//    //a.insert("abc");//todo check in when two letters in a row
//    a.insert("a");
//    a.insert("ab c");
//    a.insert("fm");
//    a.insert("bc");
//    a.insert("fmc");
//    a.insert("fml");
//    a.insert("fmlc");
//    a.insert("fmlk");
//    a.search();
//    a.insert("fmlkncd");
//    a.insert("fmlknfd");
//    a.insert("ghj");
//    a.printTree();
//    a.search();
//    a.insert("gmj");
//    a.search();
//    a.printTree();
    Parser p;
    for (std::string line; std::getline(std::cin, line, ';');)
    {
        if(!p.insert(line))
            return 0;
    }
    return 0;
}
