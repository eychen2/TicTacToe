#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

int main() {
    std::cout << "Hi, welcome to tic-tac-toe!" << std::endl;
    int rows=0;
    int columns=0;
    int k=INT_MAX;
    std::string cheese;
    std::cout<<std::endl;
    std::cout <<"You can choose whether to play versus another person or an AI."<<std::endl;
    std::cout<<"Type \"Person\" to play against a person and \"AI\" to play against an AI"<<std::endl;
    //Will work on AI functionality later, for now will only be dealing with player v player//
    bool gameOver=false;
    bool playerTurn=true;
    bool AI=false;
    std::cout<<"How many rows do you want to play with?"<<std::endl;
    std::cin>>rows;
    std::cout<<"How many columns do you want to play with?"<<std::endl;
    std::cin>>columns;
    std::cout<<"What \"In a row\" do you want to play with"<<std::endl;
    while(k>rows&&k>columns)
    {
        std::cin>>k;
        if(k>rows&&k>columns)
        {
            std::cout << "Not a valid \"In a row\" input."
                         "It must be less than or equal to the maximum of rows and columns" << std::endl;
            std::cout << "The number of rows is " << rows << " and the number of columns is " << columns << std::endl;
        }
    }

    return 0;
}
