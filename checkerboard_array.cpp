#include <iostream>
#include <iomanip>

int main(){
    const int COLUMNS = 8;
    const int ROWS = 8;
    int board[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            board[i][j] = (j+i) % 2;
        }
    }
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
            std::cout << std::setw(8) << board[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
