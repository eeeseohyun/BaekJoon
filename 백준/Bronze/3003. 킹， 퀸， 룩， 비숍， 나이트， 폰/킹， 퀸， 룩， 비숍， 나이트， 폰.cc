#include<iomanip>
#include<iostream>
int main(){
    using namespace std;
    int nKing,nQueen,nRook,nBishop,nKnight,nPawn;
    cin >> nKing >> nQueen >> nRook >> nBishop >> nKnight >> nPawn;
    nKing = 1-nKing;
    nQueen = 1-nQueen;
    nRook =  2-nRook;
    nBishop = 2-nBishop;
    nKnight = 2-nKnight;
    nPawn = 8-nPawn;
    cout << nKing << " " << nQueen << " " << nRook << " "
        << nBishop << " " << nKnight << " " << nPawn;
}