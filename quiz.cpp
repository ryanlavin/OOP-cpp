#include "quizHeader.h"
#include <iostream>
#include <string>
#include <sstream>

Question::Question(){

}

Question::~Question(){
    // Nothing to delete
}

MCQuestion::MCQuestion(){

}

void Question::display(){
    std::cout << this->text << std::endl;
    return;
}

void Question::checkAnswer(std::string input){
    if(this->response == input){
        std::cout << "Correct" << std::endl;
        this->totalQuestions += 1;
        this->numberCorrect += 1;
    }
    else if(this->response != input){
        std::cout << "Incorrect" << std::endl;
        this->totalQuestions += 1;
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

void Question::displayScore(){
    std::cout << "Your score: " << numberCorrect/*(this->numberCorrect / this->totalQuestions)*100*/ << "%" << std::endl;
    return;
}

void MCQuestion::display(){
    Question::display();
    for(int i = 0; i < choices.size(); i++){
        std::cout << i+1 << ": " << choices[i] << std::endl;
    }
    return;
}

void MCQuestion::add_choice(std::string choice, bool correct){
    choices.push_back(choice);
    if(correct){
        std::ostringstream stream;
        stream << choices.size();
        std::string num_str = stream.str();
    }
}

