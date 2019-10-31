#include <iostream>

/*
    You are given the quiz scores of a student.
    You are to compute the final quiz score,
    which is the sum of all scores after dropping the lowest one.
*/


int findLowestScore(int*, int);
void scoreRemoval(int*, int);
int sumScores(int*, int);

int main(){
    const int SIZE = 6; // Will be the size of the array
    int quiz_scores[SIZE]; // Initializing the array quiz_scores with size 6
    int input; // Initializes integer input
    std::cout << "Please input the six quiz scores" << std::endl;
    for (int i = 0; i < SIZE; i++){
        std::cin >> input;
        quiz_scores[i] = input;
    }
    int smallest_pos = findLowestScore(quiz_scores, SIZE); // Calling the function that will find the position of lowest quiz score using a sorting algorithm.
    std::cout << "The position of the lowest score is " << smallest_pos << std::endl;

    scoreRemoval(quiz_scores, smallest_pos); // This next function uses an algorithm that removes a particular value from an array and decrements every following value in the array.
    int sum = 0;
    for (int i = 0; i < SIZE - 1; i++){
        sum = sum + quiz_scores[i];
    }
    std::cout << "The sum of all the scores after dropping the lowest one is: " << sum << std::endl;

    for (int i = 0; i < SIZE - 1; i++){
        std::cout << quiz_scores[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

int findLowestScore(int quiz_scores[], int SIZE){
    int lowest = quiz_scores[0];
    int smallest_pos;
    for (int pos = 0; pos < SIZE; pos++){
        if (quiz_scores[pos] < lowest){
            smallest_pos = pos;
        }
    }
    return smallest_pos;
}

void scoreRemoval(int quiz_scores[], int smallest_pos){
    const int SIZE = 6;
    for (int i = smallest_pos; i < SIZE; i++){
        quiz_scores[i] = quiz_scores[i + 1];
        }
    }
/*
int sumScores(int quiz_scores[], int SIZE){
    SIZE = 6;
    int sum = 0;
    for (int i = 0; i <= SIZE - 1; i++){
        int sum = sum + quiz_scores[i];
    }
    return sum;
}
*/

/*
Scan through the scores
Find the position of lowest one
Remove it from the array
Then sum the remaining scores
*/
