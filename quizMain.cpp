#include "quizHeader.h"
#include <iostream>
#include <string>
/*
bool checkAnswer(std::string input, Question q1){
    bool answer;
    if(input == q1.get_answer()){
        answer = true;
        std::cout << "Correct!" << std::endl;
        return answer;
    }
    else if (input != q1.get_answer()){
        answer = false;
        std::cout << "Incorrect!" << std::endl;
        return answer;
    }
    return answer;
}
*/
int main(){

    Question q1;
    q1.set_question("What is the name of this program's writer?");
    q1.set_answer("Ryan");
    q1.display();
    std::string input;
    std::cin >> input;
    q1.checkAnswer(input);

    MCQuestion q2;
    q2.set_question("What year did the United States declare independence");
    q2.set_answer("3");
    q2.add_choice("1777", false);
    q2.add_choice("1775", false);
    q2.add_choice("1776", true);
    q2.add_choice("1989", false);
    q2.display();
    std::string input2;
    std::cin >> input2;

    q2.checkAnswer(input2);


    return 0;
}
