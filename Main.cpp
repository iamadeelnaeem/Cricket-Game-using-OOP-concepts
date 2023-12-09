#include "Match.h"
#include<fstream>
#include<string>
using namespace std;

void selectTeam();
int main()
{
	int a = 0;
	int check = 1;
	int check2 = 0;
	int check3 = 0;
	srand(time(0));
	Match team1,team2;
	Team t1, t2;
	int x = 1;
	while (x == 1)
	{
		cout << "\t\t**WelCome** \n";
		cout << "\tSelect an option (1-3) \n";
		cout << "1 - Play \n" << "2 - Rules \n" << "3 - Exit \n";

		int num, overs;
		cout << "Enter your option : ";
		cin >> num;

		switch (num)
		{
		 case 1:
                         selectTeam();
			 cout << "how many over you want to play : ";
			 cin >> overs;
			 team1.setmatch(overs);
			 team2.setmatch(overs);
			 char ch;
			 check3 = team1.Toss();
			 check2 = check3;
			if (check3 == 1)
			{
				while (check == 1)
				{
					cout << "did batsman strike (y/n) ? ";
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
					} 
					else if (ch == 'N' || ch == 'n')
					{
						team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
					}
					if (team2.getballs() == 0)
					{
						check = 0;
					}
					else if (team1.getwickets() == 10)
					{
						check = 0;
					}

				}
			}
			else if (check3 == 2)
			{
				while (check == 1)
				{

					int a;
					a = (rand() % 2);
					if (a == 0)
					{
						team2.battingComputer(true, team1.bowlingBehaviour());
					}
					else if (a == 1)
					{
						team2.battingComputer(false, team1.bowlingBehaviour());
					}
					if (team1.getballs() == 0)
					{
						check = 0;
					}
					else if (team2.getwickets() == 10)
					{
						check = 0;
					}

				}
			}
			else if (check3 == 3)
			{
				int a;
				while (check == 1)
				{
					a = (rand() % 2);
					if (a == 0)
					{
						team2.battingComputer(true, team1.bowlingBehaviour());
					}
					else if (a == 1)
					{
						team2.battingComputer(false, team1.bowlingBehaviour());
					}
					if (team1.getballs() == 0)
					{
						check = 0;
					}
					else if (team2.getwickets() == 10)
					{
						check = 0;
					}
				}
			}
			else if (check3 == 4)
			{
				while (check == 1)
				{
					cout << "did batsman strike (y/n) ? ";
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
					}
					else if (ch == 'N' || ch == 'n')
					{
						team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
					}
					if (team2.getballs() == 0)
					{
						check = 0;
					}
					else if (team1.getwickets() == 10)
					{
						check = 0;
					}

				}
			}
			else if (check3 == 5)
			{
				while (check == 1)
				{
					int a;
					a = (rand() % 2);
					if (a == 0)
					{
						team2.battingComputer(true, team1.bowlingBehaviour());
					}
					else if (a == 1)
					{
						team2.battingComputer(false, team1.bowlingBehaviour());
					}
					if (team1.getballs() == 0)
					{
						check = 0;
					}
					else if (team2.getwickets() == 10)
					{
						check = 0;
					}

				}
			}
			else if (check3 == 6)
			{
				while (check == 1)
				{
					int a;
					a = (rand() % 2);
					if (a == 0)
					{
						team2.battingComputer(true, team1.bowlingBehaviour());
					}
					else if (a == 1)
					{
						team2.battingComputer(false, team1.bowlingBehaviour());
					}
					if (team1.getballs() == 0)
					{
						check = 0;
					}
					else if (team2.getwickets() == 10)
					{
						check = 0;
					}
				}
			}
			check = 1;
			cout << "2nd innings: " << endl;
			if (check2 == 1)
				{
					while (check == 1)
					{
						a = (rand() % 2);
						if (a == 0)
						{
							team2.battingComputer(true, team1.bowlingBehaviour());
						}
						else if (a == 1)
						{
							team2.battingComputer(false, team1.bowlingBehaviour());
						}
						if (team1.getballs() == 0)
						{
							check = 0;
						}
						else if (team2.getwickets() == 10)
						{
							check = 0;
						}
					}
				}
				else if (check2 == 2)
				{
					while (check == 1)
					{

						cout << "did batsman strike (y/n) ? ";
						cin >> ch;
						if (ch == 'Y' || ch == 'y')
						{
							team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
						}
						else if (ch == 'N' || ch == 'n')
						{
							team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
						}
						if (team2.getballs() == 0)
						{
							check = 0;
						}
						else if (team1.getwickets() == 10)
						{
							check = 0;
						}

					}
				}
				else if (check2 == 3)
				{
					cout << "did batsman strike (y/n) ? ";
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
					}
					else if (ch == 'N' || ch == 'n')
					{
						team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
					}
					if (team2.getballs() == 0)
					{
						check = 0;
					}
					else if (team1.getwickets() == 10)
					{
						check = 0;
					}
				}
				else if (check2 == 4)
				{
					while (check == 1)
					{
						int a;
						a = (rand() % 2);
						if (a == 0)
						{
							team2.battingComputer(true, team1.bowlingBehaviour());
						}
						else if (a == 1)
						{
							team2.battingComputer(false, team1.bowlingBehaviour());
						}
						if (team1.getballs() == 0)
						{
							check = 0;
						}
						else if (team2.getwickets() == 10)
						{
							check = 0;
						}

					}
				}
				else if (check2 == 5)
				{
					cout << "did batsman strike (y/n) ? ";
					cin >> ch;
					if (ch == 'Y' || ch == 'y')
					{
						team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
					}
					else if (ch == 'N' || ch == 'n')
					{
						team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
					}
					if (team2.getballs() == 0)
					{
						check = 0;
					}
					else if (team1.getwickets() == 10)
					{
						check = 0;
					}
				}
				else if (check2 == 6)
				{
					while (check == 1)
					{
						cout << "did batsman strike (y/n) ? ";
						cin >> ch;
						if (ch == 'Y' || ch == 'y')
						{
							team1.battingBehaviour(team1.isStrike(1), team2.bowlingComputer());
						}
						else if (ch == 'N' || ch == 'n')
						{
							team1.battingBehaviour(team1.isStrike(0), team2.bowlingComputer());
						}
						if (team2.getballs() == 0)
						{
							check = 0;
						}
						else if (team1.getwickets() == 10)
						{
							check = 0;
						}
					}
				}
				cout << "Score of first team: " << team1.getscore() << endl;
				cout << "Score of 2nd team: " << team2.getscore() << endl;
				if (team1.getscore() > team2.getscore())
				{
					cout << "congratualation you have Won the match"<<endl;
				}
				else if(team1.getscore() < team2.getscore())
				{
					cout << "Alas!you lost the game"<<endl;
				}
		  

			break;
		 case 2:
			cout << "\t*Rules*\n";
			cout << "- Bowling and batting must be continuously being called till one of the team wins the match 	(or in case of match draw) \n";
			cout << "- Whenever a bowling function is called, this will decrement the number of ballsleft. \n";
			cout << "- Whenever a batting function is called, this might (or might not) increment the score. \n";
			cout << "- Whenever a batsman is declared as ‘’out’’, number of wickets of relevant team gets decremented \n";
			cout << "- In case of noball, update the attributes: +1 score, +1 ball \n";
			cout << "- In case of wide, +1 score \n";
			break;
		 case 3:
			cout << "\t*exit*\n";
			exit(0);
			x = 0;
			break;
		}
		int n = 1;
		while (n == 1)
		{
			char ch;
			cout << "Do you want to play again (Y/N) ? ";
			cin >> ch;
			if (ch != 'Y' && ch!='y'&&ch != 'N' && ch != 'n')
			{
				n = 1;
			}
			else if (ch == 'Y' || ch=='y')
			{
				n = 0;
			}
			else if (ch == 'N' || ch=='n')
			{
				n = 0;
				x = 0;
			}
		}
	}
	
	system("pause");
	return 0;
}
void selectTeam()
{
	int n;
	cout << "\t* Select your team from the following *\n";
	cout << "1-Pakistan \n2-Australia \n3-New Zealand \n4-Zimbabwe \n5-Sri Linka \n";
	cin >> n;
	cout << "\tSelect your squad of 11 players from the following." << endl;
	string in;
	fstream nameFile;
	switch (n)
	{
	case 1:
		nameFile.open("TextFPLayers.txt", ios::in);
		if (nameFile)
		{
			getline(nameFile, in);
			for (int i = 0; i < 16; i++)
			{
				cout << in << endl;
				getline(nameFile, in);
			}
			nameFile.close();
		}
		else
		{
			cout << "Error : cannot file Textplayers \n";
		}
		break;
	case 2:
		nameFile.open("TextFPLayers.txt", ios::in);
		if (nameFile)
		{
			nameFile.seekg(221, ios::beg);
			for (int i = 0; i <= 16; i++)
			{
				cout << in << endl;
				getline(nameFile, in);
			}
			nameFile.close();
		}
		else
		{
			cout << "Error : cannot file Textplayers \n";
		}
		break;
	case 3:
		nameFile.open("TextFPLayers.txt", ios::in);
		if (nameFile)
		{
			nameFile.seekg(516, ios::beg);
			for (int i = 0; i <= 16; i++)
			{
				cout << in << endl;
				getline(nameFile, in);
			}
			nameFile.close();
		}
		else
		{
			cout << "Error : cannot file Textplayers \n";
		}
		break;
	case 4:
		nameFile.open("TextFPLayers.txt", ios::in);
		if (nameFile)
		{
			nameFile.seekg(788, ios::beg);
			for (int i = 0; i <= 16; i++)
			{
				cout << in << endl;
				getline(nameFile, in);
			}
			nameFile.close();
		}
		else
		{
			cout << "Error : cannot file Textplayers \n";
		}
		break;
	case 5:
		nameFile.open("TextFPLayers.txt", ios::in);
		if (nameFile)
		{
			nameFile.seekg(1090, ios::beg);
			for (int i = 0; i <= 16; i++)
			{
				cout << in << endl;
				getline(nameFile, in);
			}
			nameFile.close();
		}
		else
		{
			cout << "Error : cannot file Textplayers \n";
		}
		break;
	}
	int arr[11];
	cout << "Enter the number to select the relevant player." << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << i + 1 << " "<< "Player ID ";
		cin >> arr[i];
	}
	cout << "Here is your selected team squade" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << i + 1 << " "<< "Player ID "  << arr[i] << endl;;
	}
	char ch;
	int id, p ;
	cout << "Do you want to modify the batting order 	(Y / N) ? " << endl;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
	{
		cout << "Please enter the id number of the players which needs to be modified : " << endl;
		cin >> id;
		cout << "Please specify the position number in the team to insert the player : " << endl;
		cin >> p;
		for (int i = 0; i < 11; i++)
		{
			if (arr[i] == id)
			{
				arr[i] = arr[p];
				arr[p] = id;
			}
		}
		cout << "Display the modified list" << endl;
		for (int i = 0; i < 11; i++)
		{
			cout  << i + 1 << " " <<"Player ID " <<  arr[i] << endl;;
		}
	}
	else if (ch == 'N'||ch=='n')
	{
		cout << endl;
	}
}
