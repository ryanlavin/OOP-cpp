#include <string>
#include <vector>

class Question {
public:
    Question();
    ~Question();

// Gets the values
    std::string get_question();
    std::string get_answer();

    void set_question(std::string str_question);
    void set_answer(std::string str_answer);
    void display();
    void checkAnswer(std::string response);
    void displayScore();

private:
    std::string text, response;
    int totalQuestions, numberCorrect;
};

class MCQuestion : public Question{
public:
    MCQuestion();
    //s~MCQuestion();
    int get_answer();
    //void set_answer(int int_answer);
    void add_choice(std::string choice, bool correct);
    virtual void display();

private:
    int answer_int;
    std::vector<std::string> choices;
};

