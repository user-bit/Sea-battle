#include "stdafx.h"
#include "iostream"


using namespace std;

int main()
{
	const int N = 5;
	int BattleShip[N][N] = { 0 };
	int x, y;

	for (int i = 0; i < 4; i++) 
	{
		x = rand() % N;
		y = rand() % N;
		BattleShip[x][y] = 1;
	}

	
	
	

	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			cout << BattleShip[j][i];
		}
		cout << endl;
	}


	while (true)
	{
		cout << "Enter the coordinates of the shot" << endl;

		cin >> x;
		cin >> y;
		
		if (BattleShip[x][y] == 1)
		{
			cout << "Killed" <<endl;
			BattleShip[x][y] = 0;
			bool ship_wounds = false;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (BattleShip[i][j])
					{
						ship_wounds = true;
					}
				}
			}
			if (ship_wounds == false) {
				cout << "You win" << endl;
				break;
			}
		}
		
		else
		{
			cout << "Did not kill" << endl;
		}
	}
	
	return 0;
}
