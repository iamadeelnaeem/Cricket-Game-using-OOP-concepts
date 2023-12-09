
#pragma once
#include "Player.h"
class Team
{   private:
	Player team[16];
	int teamNo;
	
 public:
	 Team();
	 void setTeam();
	 void display();	 
};
