#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;
class Player
{
 private:
	int player;
	char* behaviour;
public:
	Player();
	void operator = ( int );
	void display();
	void setPlayer(int);
	void setBehaviour(int);
	int getPlayer();
	char* getBehaviour();
	friend ostream& operator <<(ostream&, const Player&);
};

