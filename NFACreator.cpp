//
// Created by ahmed on 3/23/19.
//

#include "NFACreator.h"


NFACreator::NFACreator() {
    // TODO Auto-generated constructor stub

}

NFACreator::~NFACreator() {
    // TODO Auto-generated destructor stub
}


BasicNFA* NFACreator::build_BasicNFA(Rule rule) {

    // convert rule to postfix.
    vector<char> elements = rule.toPostfix();
    vector<BasicNFA*> stack;

    for (char element : elements) {

        //check if the element is Alphabet
        if((element>='a'&& element<='z') || (element>='A' && element<='Z'))
        {
            char ch = element;
            // Epsilon
            if(ch == '@')ch = '\0';
            stack.push_back(new BasicNFA(ch));
            continue;
        }

        else if(element == '+')
        {
            //stack.back() Returns a reference to the last element in the vector
            BasicNFA* BN = stack.back();
            stack.pop_back();
            stack.push_back(PositiveClosureOperator(BN)) ;
        }

        else if(element == '|')
        {
            BasicNFA* BN1 = stack.back();
            stack.pop_back();
            BasicNFA* BN2 = stack.back();
            stack.pop_back();
            stack.push_back(OROperator(BN2,BN1));
        }

        else if(element.getContent() == '*')
        {
            BasicNFA* BN = stack.back();
            stack.pop_back() ;
            stack.push_back(KleeneClosureOperator(BN)) ;
        }

        // Concatenation operator will be represented by $
        else if(element == '$')
        {
            BasicNFA* BN1 = stack.back();
            stack.pop_back() ;
            BasicNFA* BN2 = stack.back();
            stack.pop_back() ;
            stack.push_back(ANDOperator(BN2,BN1));
        }
    }

    stack[0]->get_end()->set_acceptance(true);
    stack[0]->get_end()->set_matched_rule(rule);
}

BasicNFA* NFACreator::PositiveClosureOperator(BasicNFA* BN){
    BN->get_end()->add_transition('\0', BN->get_start());
    return BN;
}

BasicNFA* NFACreator::OROperator(BasicNFA* BN1, BasicNFA* BN2){
    BN1->get_start()->add_transition('\0', BN2->get_start());
    BN1->get_end()->add_transition('\0', BN2->get_end());
    //change the end state to the new one belong to BN2
    BN1->set_end(BN2->get_end());
    return BN1;
}

BasicNFA* NFACreator::KleeneClosureOperator(BasicNFA* BN){
    BN->get_start()->add_transition('\0', BN->get_end());
    BN->get_end()->add_transition('\0', BN->get_start());
    return BN;
}

BasicNFA* NFACreator::ANDOperator(BasicNFA* BN1, BasicNFA* BN2) {
    BN1->get_end()->add_transition('\0', BN2->get_start());
    BN1->set_end(BN2->get_end());
    return BN1;
}
