#include "tictactoe.h"
#include <iostream>

using namespace std;

char board[3][3] = { {'-','-' ,'-' }, { '-' ,'-' ,'-' }, { '-' ,'-' ,'-' } };

void game_class::start()
{
    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Starting game..." << endl;
    printBoard();

    int choose = 0;
    int cur_row = -1;
    int cur_col = -1;
    while (findWin()) {
        if (choose == 0) {
            cout << "It is X's turn!" << endl;
            choose++;
        }
        if (choose == 1) {
            cout << "It is O's turn!" << endl;
            choose--;
        }
    }
    
}

void game_class::printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }

        // Newline for new row
        cout << endl;
    }
}

void game_class::rows_cols() {

}