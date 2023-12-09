#pragma once
#include "Team.h"
class Match
{
 private:
	  int overs;
	  int wickets;
	  int score;
	  int balls;
	 

 public:
	 Match();
	void setmatch(int Ov);
	void display();
	int Toss();
	bool isStrike(int);
	int bowlingBehaviour();
	int bowlingComputer();
	void battingBehaviour(bool,int);
	void battingComputer(bool,int);
	void Play();
	int getballs();
	int getwickets();
	int getscore();

};

