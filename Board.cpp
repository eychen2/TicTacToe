//
// Created by echen on 10/18/2021.
//

#include "Board.h"
Board::Board(int rows_, int columns_)
{
    rows=rows_;
    columns=columns_;
    for(unsigned int i=0; i<rows;++i)
    {
        vector<char> temp;
        board.emplace_back(temp);
        for(unsigned int j=0; j<columns;++j)
            board[i].emplace_back(' ');
    }
}
void Board::printBoard()
{
    for(unsigned int i=0; i<board.size();++i)
    {
        cout<<"|";
        for(unsigned int j=0; j<board[i].size();++j)
        {
            cout<<board[i].at(j)<<" ";
        }
        cout<<endl;
    }
    cout<<"   ";
    for(unsigned int i=0; i<2*board[0].size()-1;++i)
        cout<<"-";
    cout<<endl;
    cout<<"   ";
    for(unsigned int i=0; i<board[0].size();++i)
        cout<<i <<" ";
    cout<<endl;
}
void Board::addMove(int row, int column, char input)
{
    board[rows-1-row].at(column)=input;
}
void Board::delMove(int row, int column)
{
    board[rows-1-column].at(column)=' ';
}
void Board::clear()
{
    for(unsigned int i=0; i<rows;++i)
    {
        vector<char> temp;
        for(unsigned int j=0; j<columns;++j)
            board[i].at(j)=' ';
    }
}
