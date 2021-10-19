//
// Created by echen on 10/18/2021.
//
#include <vector>
using namespace std;
class Board {
private:
    vector<vector<char>> board;
    int rows,columns;
public:
    Board(int rows_, int columns_);
    void printBoard();
    void addMove(int row, int column, char input);
    void delMove(int row, int column);
    void clear();
};


