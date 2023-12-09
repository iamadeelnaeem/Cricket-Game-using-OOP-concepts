#include "Match.h"
Match::Match()
{
	score = 0;
	balls = 0;
	wickets = 0;
	overs = 0;
}
void Match::setmatch(int Ov)
{
	overs = Ov;
	balls = Ov * 6;
}
void Match::display()
{
	cout << score<<endl;
	cout << wickets<<endl;
	cout << overs<<endl;
	cout << balls<<endl;
}
int Match::Toss()
{
	int num, r, check = 1;
	cout << " \t Heads or Tails \n";
	cout << "1-Head \n 2-Tail \n";
	cout << "Enter your choice : ";
	cin >> num;
	switch (num)
	{
	   case 1:
		srand(time(NULL));
		r = (rand() % 2);
		if (r == 0)
		{
			int n;
			char ch;
			cout << "You won the toss" << endl;
			cout << "Would you like to bat or bowl ? " << endl;
			cout << "1-Bat \n 2-Bowl \n";
			cout << "Your choice ";
			cin >> n;

			switch (n)
			{
			 case 1:
				 return 1;
				break;
			 case 2:
				 return 2;
				 break;
			}
		}
		else if (r == 1)
		{
			cout << "You loss the toss and opponent choose the bat \n";
			return 3;
			break;
		}
	   case 2:
		srand(time(NULL));
		r = (rand() % 2);
		if (r == 0)
		{
			int n;
			char ch;
			cout << "You won the toss" << endl;
			cout << "Would you like to bat or bowl ? " << endl;
			cout << "1-Bat \n 2-Bowl \n";
			cout << "Your choice ";
			cin >> n;
			switch (n)
			{
			 case 1:
				return 4;
				break;
			 case 2:
				 return 5;
				break;
			}
		}
		else if (r == 1)
		{
			cout << "You loss the toss and opponent choose the bat \n";
			
			return 6;
			break;
		}
	}
}
int Match::getwickets()
{
	return wickets;

}
int Match::getballs()
{
	return balls;
}
bool Match::isStrike(int a)
{
	
	if (a == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Match::bowlingBehaviour()
{
	int check1=0;
	const int const_distanceV = 50;
	const int const_distanceH = 8;
	const int const_Height = 10;
	int angle=0;
	int distanceV=0;
	int distanceH=0;
	int height=0;
	cout << "Enter the distance of bowler feet ";
	cin >> distanceV;
	cout << "Enter distance of width of ball ";
	cin >> distanceH;
	cout << "Enter height of the ball ";
	cin >> height;
	cout << "Enter the angle ";
	cin >> angle;
	if (const_distanceV < distanceV)
	{
		check1 = 1;
		
		cout << "noBall"<<endl;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else if (check1 == 0 && const_distanceH < distanceH)
	      {
		       check1 = 2;
		      
		      cout << "Wide"<<endl;
			  cout << "remaining balls  " << balls << endl;
			  return check1;
	     }
	else  if (check1 == 0 && const_Height < height)
	       {
		       check1 = 3;
		       cout << "Bouncer"<<endl;
			   balls--;
			   cout << "remaining balls  " << balls << endl;
			   return check1;
	       }
	else if (check1 == 0 && angle < 85 || angle > 95)
	{
		check1 = 4;
		cout << "Spin" << endl;
		balls--;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else if (check1 == 0 && angle >= 85 || angle <= 95)
	{
		check1 = 5;
		cout << "Normal Ball" << endl;
		balls--;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	
}

int Match::bowlingComputer()
{
	int check1 = 0;
	const int const_distanceV = 50;
	const int const_distanceH = 8;
	const int const_Height = 10;

	srand(time(0));

	int angle =  (rand() %(100-80 +1)+0);
	int distanceV =  (rand() % (55-45+1)+45);
	int distanceH = (rand() % (10-7+1)+7);
	int height =  (rand() % (12-8+1)+8);
	
	if (const_distanceV < distanceV)
	{
		check1 = 1;
		
		cout << "noBall" << endl;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else if (check1 == 0 && const_distanceH < distanceH)
	{
		check1 = 2;
		score++;
		cout << "Wide" << endl;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else  if (check1 == 0 && const_Height < height)
	{
		check1 = 3;
		cout << "Bouncer" << endl;
		balls--;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else if (check1 == 0 && angle < 85 || angle > 95)
	{
		check1 = 4;
		cout << "Spin" << endl;
		balls--;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}
	else if (check1 == 0 && angle >= 85 || angle <= 95)
	{
		check1 = 5;
		cout << "Normal Ball" << endl;
		balls--;
		cout << "remaining balls  " << balls << endl;
		return check1;
	}

}
void Match::battingBehaviour(bool b, int c)
{
	int a=5;
	
	if (b==true && c==1)
	{
		score++;
		while (a==5)
		{
			a=(rand() % (6 - 4 + 1) + 4);
		}
		score = score + a;
		cout << "batsman hit " << a << endl;
		cout << "total score " << score << endl;

	} 
	else if ( b==true && c == 2)
	{
		
		a = 4;
		score = score + a;
		cout << "batsman hit " << a << endl;
		cout << "total score " << score << endl;
	}
	else if (b==true && c == 3)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else
		{
			a = 6;
			score = score + a;
			cout << "batsman hit " << a << endl;
			cout << "total score " << score << endl;
		}
	}
	else if (b==true && c == 4)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else if(rd==5)
		{
			wickets++;
			cout << " LBW \n";
		}
		else
		{
			while (a == 5 || a == 3)
			{
				a = (rand() % (6 - 0 + 1) + 0);
			}
			score = score + a;
			cout << "batsman hit " << a << endl;
			cout << "total score " << score << endl;
		}
	}
	else if (b == true && c == 5)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
		else
		{
			while (a == 5 || a == 3)
			{
				a = (rand() % (6 - 0 + 1) + 0);

			}
			score = score + a;
			cout << "batsman hit " << a << endl;
			cout << "total score " << score << endl;
		}
		
	}
	 if (b == false && c == 3)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
	}
	else if (b == false && c == 4)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		
		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
	    
	}
	else if (b == false && c == 5)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		
		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
		
	}

}
void Match::battingComputer(bool b, int c)
{
	int a = 5;

	if (b == true && c == 1)
	{
		score++;
		while (a == 5)
		{
			a = (rand() % (6 - 4 + 1) + 4);
		}
		score = score + a;
		cout << "batsman hit " << a << endl;
		cout << "total score " << score << endl;
	}
	else if (b == true && c == 2)
	{
		score++;
		a = 4;
		score = score + a;
		cout << "batsman hit " << a << endl;
		cout << "total score " << score << endl;
	}
	else if (b == true && c == 3)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else
		{
			a = 6;
			score = score + a;
		}
	}
	else if (b == true && c == 4)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
		else
		{
			while (a == 5 || a == 3)
			{
				a = (rand() % (6 - 0 + 1) + 0);
			}
			score = score + a;
			cout << "batsman hit " << a << endl;
			cout << "total score " << score << endl;
		}
	}
	else if (b == true && c == 5)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}
		else if (rd == 3)
		{
			wickets++;
			cout << " Catch out \n";
		}
		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
		else
		{
			while (a == 5 || a == 3)
			{
				a = (rand() % (6 - 0 + 1) + 0);

			}
			score = score + a;
			cout << "batsman hit " << a << endl;
			cout << "total score " << score << endl;
		}
	}

  if (b == false && c == 3)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}


	}
	else if (b == false && c == 4)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}

		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}

	}
	else if (b == false && c == 5)
	{
		int rd = (rand() % (6 - 0 + 1) + 0);
		if (rd == 1)
		{
			wickets++;
			cout << " Hit Wicket \n";
		}

		else if (rd == 5)
		{
			wickets++;
			cout << " LBW \n";
		}
	}
}
int Match::getscore()
{
	return score;
}