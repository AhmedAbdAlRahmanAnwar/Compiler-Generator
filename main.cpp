
#include "LexicalAnalyzer.h"
using namespace std;

int main () {
    LexicalAnalyzer la("/home/ab_shams/CLionProjects/Compiler Generator/rules.txt"
                       ,"/home/ab_shams/CLionProjects/Compiler Generator/src.txt");

    la.analyze();
}