cmake_minimum_required(VERSION 3.10)
project(Compiler_Generator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Compiler_Generator main.cpp Parser.cpp Parser.h Rule.cpp Rule.h LexicalAnalyzer.cpp LexicalAnalyzer.h Token.cpp Token.h DFA.cpp DFA.h SrcLine.cpp SrcLine.h CompleteNFA.cpp CompleteNFA.h State.cpp State.h NFACreator.cpp NFACreator.h BasicNFA.cpp BasicNFA.h ID_Generator.cpp ID_Generator.h)