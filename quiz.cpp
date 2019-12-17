#include "quizHeader.h"
#include <iostream>
#include <string>

Question::Question(/*std::string question, std::string answer*/){
    //this->text = question;
    //this->response = answer;
}

Question::~Question(){
    // Nothing to delete
}

void Question::display(){
    std::cout << this->text << std::endl;
    return;
}

void Question::checkAnswer(std::string input){
    if(this->response == input){
        std::cout << "Correct!" << std::endl;
    }
    else if(this->response != input){
        std::cout << "Incorrect!" << std::endl;
    }
}

std::string Question::get_question(){
    return this->text;
}

std::string Question::get_answer(){
    return this->response;
}

void Question::set_question(std::string str_question){
    this->text = str_question;
    return;
}

void Question::set_answer(std::string str_answer){
    this->response = str_answer;
    return;
}
