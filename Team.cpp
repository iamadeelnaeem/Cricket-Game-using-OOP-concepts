#include "Team.h"
Team::Team()
{
	teamNo = 0;
	for (int x = 0; x < 16; x++)
	{
		team[x] = 0;
	}
}
void Team::setTeam()
{
	int i = 0;
	for (int x = 0; x < 16; x++)
	{
		++i;
		team[x].setPlayer(i);
	}
	int r;
	for (int x = 0; x < 16; x++)
	{
		r = (rand() % 3);
		team[x].setBehaviour(r);
	}
}
void Team::display()
{
	for (int x = 0; x < 16; x++)
	{
		cout << team[x].getPlayer() << endl;
	}
	for (int x = 0; x < 16; x++)
	{
		cout << team[x].getBehaviour() << endl;
	}
}