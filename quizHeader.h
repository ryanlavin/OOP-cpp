#include <string>

class Question {
public:
    Question(/*std::string, std::string*/);
    ~Question();

// Gets the values
    std::string get_question();
    std::string get_answer();

    void set_question(std::string str_question);
    void set_answer(std::string str_answer);
    void display();
    void checkAnswer(std::string response);

private:
    std::string text;
    std::string response;
};

class MCQuestion : public Question{
public:
    int get_answer();
    void set_answer(std::string int_answer);
    void add_choice(std::string choice, bool correct);
    void display() const;

private:
    int answer_int;
    std::vector<std::string> choices;
};
*/
