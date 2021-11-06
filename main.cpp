#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Board.cpp"
using namespace std;
enum Player{
    X='X',O='O'
}player;

int main() {
    cout << "Hi, welcome to tic-tac-toe!" << endl;
    int row;
    int column;
    int rows=0;
    int columns=0;
    int k=INT_MAX;
    string cheese;
    cout<<endl;
    cout <<"You can choose whether to play versus another person or an AI."<<endl;
    cout<<"Type \"Person\" to play against a person and \"AI\" to play against an AI"<<endl;
    //Will work on AI functionality later, for now will only be dealing with player v player//
    bool gameOver=false;
    bool AI=false;
    player=X;
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
    Board board(rows,columns);
    cout<<"The board is now set. Time to explain some of the rules."<<endl;

    cout<<"The player who uses X will go first, if you are playing with a friend, decide amongst yourselves"
          "who goes first. "<<endl;
    //Will be implemented once the AI gets implemented
    cout<<"If you are playing against an AI, we will randomly choose 0 or 1 for you to guess. If you get it right,"
          "you go first. Get it wrong, and the AI goes first."<<endl;
    cout<<"We will print out a blank board for you to see what it looks like"<<endl;
    board.printBoard();
    cout<<"To select where you want to play, write it in the form a,b where a is the x coordinate and b is the y coordinate"<<endl;
    cout<<"As an example, say we are X and we say 0,0 then the board will look like this"<<endl;
    board.addMove(0,0,player);
    board.printBoard();
    board.clear();
    cout<<"I hope you understand the rules now! Have fun!"<<endl;
    while(!gameOver)
    {
        cout<<"It is player "<<to_string(player)<<"'s turn. Here is the board. What move would you like to play? Type \"stop\" to stop"<<endl;
        board.printBoard();
        cin>>cheese;
        if(cheese=="stop")
            break;
        row=stoi(cheese.substr(0,cheese.find(",")));
        column=stoi(cheese.substr(cheese.find(",")+1));
        board.addMove(row,column,player);
        if(player=X)
            player=O;
        else
            player=X;
    }
    return 0;
}
