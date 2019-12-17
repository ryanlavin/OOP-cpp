#include "quizHeader.h"
#include <iostream>
#include <string>

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

int main(){

    Question q1;
    q1.set_question("What is the name of this program's writer?");
    q1.set_answer("Ryan");
    q1.display();
    std::string input;
    std::cin >> input;
    q1.checkAnswer(input);

/*
    MCQuestion* q2 = new Question("What do you wanna do?", 3);
    std::cout << q2.get_question() << std::endl;
    int input2;
    //std::cin >> input2;


    delete q2;
*/
    return 0;
}
