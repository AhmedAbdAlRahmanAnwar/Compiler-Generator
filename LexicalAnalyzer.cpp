//
// Created by ab_shams on 20/03/19.
//


#include "LexicalAnalyzer.h"

LexicalAnalyzer::LexicalAnalyzer(string rulesFilePath, string srcFilepath) {

    rfPath = rulesFilePath;
    sfPath = srcFilepath;

}

void LexicalAnalyzer::analyze() {
    readRulesFile();

    for(int i = 0; i < exprs.size(); i++){
        cout << exprs.at(i).LHS << " = " << exprs.at(i).RHS << endl;
    }
    prepareRules();


    //call el function bta3t anwar w eb3at feha parameters lhs & rhs
    for (Rule r : rules){

    }

}

void LexicalAnalyzer::prepareRules() {
    vector<char> temp;
    for (int i = 0; i < exprs.size(); i++) {
        for (int j = 0; j < exprs.at(i).RHS.length(); j++) {
            if (exprs.at(i).RHS.at(j) != ' ') {
                temp.push_back(exprs.at(i).RHS.at(j));
            }
        }
        rules.push_back(Rule(exprs.at(i).LHS,temp,i+1));
        temp.clear();
    }
    for (int i = 0; i < rules.size();++i){
        cout << rules.at(i).getLHS() << "   " << rules.at(i).getRuleNumber() << endl;
    }
}

string LexicalAnalyzer::handleRHS(string str) {
    string str2;
    string  temp;
    int i, j = 0, k;
    for (i = 0; i < str.size(); i++) {
        if (str.at(i) == '=' || str.at(i) == '!' ||
            str.at(i) == '<' || str.at(i) == '>') {
            k = i + 1;
            while(k < str.size()) {
                if (str.at(k) == ' ') {
                } else if (str.at(k) == '|') {
                    str2 = str2 + str.substr(i, 1) + " ";
                    break;
                } else {
                    str2 = str2 + str.substr(i, 1) + " & ";
                    break;
                }
                k++;
            }
            if (k == str.size()) {
                str2 = str2 + str.substr(i, 1);
            }
            j = i + 1;
        } else if (str.at(i) == ' ' || str.at(i) == '(' ||
                   str.at(i) == '+' || str.at(i) == ')' ||
                   str.at(i) == '*' || str.at(i) == '-' ||
                   str.at(i) == '|' || str.at(i) == '\\' ||
                   str.at(i) == '.' || str.at(i) == '_') {
            temp = str.substr(j, i-j);
            if (i != j) {
                str2 = str2 + temp + " ";
            }
            j = i + 1;
            if (str.at(i) == ' ' && i != 0 && str.at(i-1) != ' ') {
                int found = 0;
                k = i - 1;
                while(k >= 0) {
                    if (str.at(k) == '|' || str.at(k) == '(' || str.at(k) == '\\'
                        || str.at(k) == '=' || str.at(k) == '!' ||
                        str.at(k) == '<' || str.at(k) == '>' ||
                        str.at(k) == '+' || str.at(k) == '*') {
                        break;
                    } else if (str.at(k) != '|' && str.at(k) != ' ') {
                        found++;
                        break;
                    }
                    k--;
                }
                k = i + 1;
                while(k < str.size()) {
                    if (str.at(k) == '|' || str.at(k) == ')' ||
                        str.at(k) == '+' || str.at(k) == '*') {
                        break;
                    } else if (str.at(k) != '|' && str.at(k) != ' ') {
                        found++;
                        break;
                    }
                    k++;
                }
                if (found == 2) {
                    str2 = str2 + "& ";
                }
            }
            if (str.at(i) == '(') {
                k = i - 1;
                while(k >= 0) {
                    if (str.at(k) == '|' || str.at(k) == ' ') {
                        break;
                    } else if (str.at(k) != '|') {
                        str2 = str2 + "& ";
                        break;
                    }
                    k--;
                }
            }
            if (str.at(i) == ' ') {
            } else if (str.at(i) == '.' || str.at(i) == '_') {
                temp = str.substr(i, 1);
                if (str.at(i+1) == ' ') {
                    str2 = str2 + temp + " ";
                } else if (str.at(i+1) != ' ') {
                    str2 = str2 + temp + " & ";
                }
            } else {
                temp = str.substr(i, 1);
                str2 = str2 + temp + " ";
            }
            if (str.at(i) == '+' || str.at(i) == '*') {
                k = i + 1;
                while(k < str.size()) {
                    if (str.at(k) == ' '){
                    } else if (str.at(k) == '|') {
                        break;
                    } else {
                        str2 = str2 + "& ";
                        break;
                    }
                    k++;
                }
            }
        }
    }
    temp = str.substr(j, i-j);
    str2 = str2 + temp;
    return str2;
}

string LexicalAnalyzer::handleKeywords(string str) {
    string str2,temp;
    stringstream ss(str);

    while (ss >> temp){
        for(int i = 0; i < temp.size(); i++){
            if (temp.size() - 1  == i ){
                str2 = str2 + temp.substr(i, 1);
            } else {
                str2 = str2 + temp.substr(i, 1) + " & ";
            }
        }
        str2 = str2 + " | ";
    }
    str2 = str2.substr(0, str2.size() - 3);

    return str2;
}

string LexicalAnalyzer::handlePunctuations(string str) {
    string str2;
    for(int i = 0; i < str.size(); i++) {
        if (str.at(i) == '\\') {
            str2 = str2 + str.substr(i, 1) + " ";
        } else if (str.at(i) != ' ') {
            str2 = str2 + str.substr(i, 1) + " | ";
        }
    }
    str2 = str2.substr(0, str2.size() - 3);
    return str2;
}

// Function to verify whether a string is operator symbol or not.
bool LexicalAnalyzer::IsOperator(string C)  {
    if(C == "+" || C == "-" || C == "*" || C == "|" || C== "&") {
        return true;
    }
    return false;
}

// Function to perform an operation and return output.
bool LexicalAnalyzer::HasHigherPrecedence(string op1, string op2) {
    string ops[] = {"|", "&", "#", "-"};
    if (op2 == "+" || op2 == "*"){
        op2 = "#";
    }
    if (op1 == "+" || op1 == "*"){
        op1 = "#";
    }
    int i1 = 0, i2 = 0, i = 0;
    for(i = 0; i < 4; i++) {
        if(ops[i] == op1) {
            i1 = i;
        }
        if (ops[i] == op2) {
            i2 = i;
        }
    }
    if (i1 > i2) {
        return true;
    }
    return false;
}

string LexicalAnalyzer::InfixToPostfix(string str) {
    // Declaring a Stack from Standard template library in C++.
    stack<string> S;
    string postfix = ""; // Initialize postfix as empty string.
    string temp;
    stringstream ss(str);
    bool isBackSlashed = false;
    while(ss >> temp) {
        if (isBackSlashed) {
            postfix = postfix + temp + " ";
            isBackSlashed = false;
        } else if (temp == "\\") {
            postfix = postfix + temp + " ";
            isBackSlashed = true;
        } // If string is operator, pop two elements from stack, perform operation and push the result back.
        else if(IsOperator(temp)) {
            while(!S.empty() && S.top() != "(" && HasHigherPrecedence(S.top(),temp))
            {
                postfix = postfix + S.top() + " " ;
                S.pop();
            }
            S.push(temp);
        } else if (temp == "(") {
            S.push(temp);
        } else if(temp == ")") {
            while(!S.empty() && S.top() !=  "(") {
                postfix = postfix + S.top() + " " ;
                S.pop();
            }
            S.pop();
        } // Else if string is an operand
        else {
            postfix = postfix + temp + " ";
        }
    }

    while(!S.empty()) {
        postfix = postfix + S.top() + " ";
        S.pop();
    }

    return postfix;
}

void LexicalAnalyzer::readSrcFile(){

    string line;

    char c;
    int lineNum = 0,colNum = 0;
    int flag = 0;

    stringstream ss;

    ifstream myfile(sfPath);
    if (myfile.is_open())
    {

        lineNum = 0;
        while ( getline (myfile,line) ) {

            ++lineNum;

            cout << "Line num ";
            cout << lineNum << endl;

            if (line.empty())
                continue;
        }
        myfile.close();
    }

    else cout << "Unable to open file";

}

void LexicalAnalyzer::readRulesFile() {

    stringstream ss;
    struct Regulars reg;
    bool keywordExist = false;
    ifstream myfile(rfPath);
    if (myfile.is_open())
    {

        string line;
        int count = 0;
        while ( getline (myfile,line) ) {
            ++count;
            if (line.at(0) == '['){
                // hnadle punctuation
                /*cout << "punctuation"<< count << ": "  << line.substr(1,line.length() - 2) << endl;
                cout << handlePunctuations(line.substr(1,line.length() - 2)) << endl;
                cout << "Postfix: " << InfixToPostfix(handlePunctuations(line.substr(1,line.length() - 2))) << endl;*/
                reg.LHS = "punctuation";
                reg.RHS = InfixToPostfix(handlePunctuations(line.substr(1,line.length() - 2)));
                exprs.push_back(reg);
                continue;
            }
            else if (line.at(0) == '{' ){
                // handle keywords

                /*cout << "keyword"<< count <<": " << line.substr(1,line.length() - 2) << endl;
                cout << handleKeywords(line.substr(1,line.length() - 2)) << endl;
                cout << "Postfix: " << InfixToPostfix(handleKeywords(line.substr(1,line.length() - 2))) << endl;*/
                if (keywordExist) {
                    for(int k = 0; k < exprs.size(); k++) {
                        if (exprs.at(k).LHS == "keyword") {
                            exprs.at(k).RHS = exprs.at(k).RHS + InfixToPostfix(handleKeywords(line.substr(1,line.length() - 2))) + "|";
                            break;
                        }
                    }
                } else {
                    reg.LHS = "keyword";
                    reg.RHS = InfixToPostfix(handleKeywords(line.substr(1,line.length() - 2)));
                    exprs.insert(exprs.begin(), reg);
                    keywordExist = true;
                }
                continue;
            }

            string LHS;
            string RHS;
            string s;
            stringstream ss(line);

            ss >> LHS;

            if (LHS.at(LHS.length()-1) == ':'){
                // rule is str
                while (ss >> s){
                    RHS = RHS + " " + s ;
                }

                RHS = RHS.substr(1,RHS.length());

                /*cout << LHS << " " << RHS << endl;
                cout << handleRHS(RHS) << endl;
                cout << "Postfix: " << InfixToPostfix(handleRHS(RHS)) << endl;*/
                reg.LHS = LHS.substr(0,LHS.length()-1);
                reg.RHS = SubDefIntoExpr(InfixToPostfix(handleRHS(RHS)));
                exprs.push_back(reg);
            }else {
                if (ss >> s){
                    if (s == "="){
                        // rule is Regulars
                        char c;

                        while (ss >> s)
                            RHS  = RHS + " " + s;


                        RHS = RHS.substr(1,RHS.length());
                        /*cout << LHS << " ==> " ;
                        cout << RHS << endl;
                        cout << handleRHS(RHS) << endl;
                        cout << "Postfix: " << InfixToPostfix(handleRHS(RHS)) << endl;*/
                        reg.LHS = LHS;
                        reg.RHS = InfixToPostfix(handleRHS(RHS));
                        defs.push_back(reg);
                        //handle Regulars RHS
                    }
                }
            }
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

string LexicalAnalyzer::searchForDef(string str) {
    for (int i = 0; i < defs.size(); i++) {
        if (defs.at(i).LHS == str) {
            str = defs.at(i).RHS;
            str = SubDefIntoExpr(str);
            break;
        }
    }
    return str;
}

string LexicalAnalyzer::SubDefIntoExpr(string str) {
    string temp;
    stringstream ss(str);
    string str2;
    while (ss >> temp){
        str2 = str2 + searchForDef(temp) + " ";
    }
    return str2;
}

