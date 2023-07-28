#pragma once
// #ifndef TICTACTOE.H
// #define TICTACTOE.H
//known as "header guards" - prevent redeclaration of any identifiers such as types, enums, classes, and static variables
//used to prevent code from being included multiple times

class game_class
{
public:
    void start();
    void printBoard();

private:
    void change_board();
    int rows_choose();
    int col_choose();
    bool findWin();
};


// #endif