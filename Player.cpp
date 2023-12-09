#include "Player.h"
Player::Player()
{
	player = 0;
	behaviour = NULL;
	
}
 void Player :: operator = (int i)
{
		player = i;
}
void Player::display()
{
	  cout  <<	player<<endl;
	cout << behaviour<<endl;
}
void Player::setPlayer(int pl)
{
	player = pl;
}
void Player::setBehaviour(int a)
{  
	if(a==0)
	{ 
		char ch[] = "batsman";
		behaviour = new char[strlen(ch)+1];
		strcpy(behaviour, ch);
	}
	else if (a == 1)
	{
		char ch[] = "bowler";
		behaviour = new char[strlen(ch) + 1];
		strcpy(behaviour, ch);
	}else if (a == 2)
	{
		char ch[] = "All rounder";
		behaviour = new char[strlen(ch) + 1];
		strcpy(behaviour, ch);
	}
}
ostream & operator <<(ostream& out, const Player& rhs)
{
	out << rhs.player << endl;
	return out;
}
int Player::getPlayer()
{
	return player;
}
char* Player::getBehaviour()
{
	return behaviour;
}
