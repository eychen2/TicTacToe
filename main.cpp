#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void printBoard(vector<vector<char>> &board)
{
    cout<<endl;
    for(unsigned int i=0; i<board.size();++i)
    {
        cout<<board.size()-i-1<<"| ";
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

int main() {
    cout << "Hi, welcome to tic-tac-toe!" << endl;
    int rows=0;
    int columns=0;
    int k=INT_MAX;
    string cheese;
    cout<<endl;
    cout <<"You can choose whether to play versus another person or an AI."<<endl;
    cout<<"Type \"Person\" to play against a person and \"AI\" to play against an AI"<<endl;
    //Will work on AI functionality later, for now will only be dealing with player v player//
    bool gameOver=false;
    bool playerTurn=true;
    bool AI=false;
    cout<<"How many rows do you want to play with?"<<endl;
    cin>>rows;
    cout<<"How many columns do you want to play with?"<<endl;
    cin>>columns;
    cout<<"What \"In a row\" do you want to play with"<<endl;
    while(k>rows&&k>columns)
    {
        cin>>k;
        if(k>rows&&k>columns)
        {
            cout << "Not a valid \"In a row\" input."
                         "It must be less than or equal to the maximum of rows and columns" << endl;
            cout << "The number of rows is " << rows << " and the number of columns is " << columns << endl;
        }
    }
    vector<vector<char>> board;
    for(unsigned int i=0; i<rows;++i)
    {
        vector<char> temp;
        board.emplace_back(temp);
        for(unsigned int j=0; j<columns;++j)
            board[i].emplace_back('X');
    }
    printBoard(board);
    return 0;
}
