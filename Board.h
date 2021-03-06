#ifndef BOARD_H
#define BOARD_H
#include "Exceptions.h"
#include "Player.h"
#include <cstdlib>
#include <vector>
#include <ctime>

class Board{
	char * board;
	Player players[2];
	int size;
	// int minimax(char * pboard, int turn, int depth); 
	int minimaxAB(char * pboard, int turn, int depth,int &alpha,int &beta); //With Alpha Beta pruning
public:
	Board();
	~Board();

	void displayBoard() const;
	void insert(int num, int turn) throw(Exceptions);
	void setPlayers(Player& p1, Player& p2);
	bool isComputer(int turn) const;
	bool winConditionsMet(char * pboard);
	bool isEmpty() const; //If board is filled, returns false.
	char* getBoard() const;
	// void computer(int turn);
	void computerAB(int turn);
	void suggestedMoves(int turn);
};

#include "Board.cpp"
#endif