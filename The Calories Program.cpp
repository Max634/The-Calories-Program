// The Calories Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	    int calories[5] = { 0 };
		for (int sub = 0; sub < 5; sub += 1)
		{
			cout << "\nCalories for day " << sub + 1 << ": ";
			cin >> calories[sub];
		}
		cout << "\n------------Results-------------\n";
		for (int sub = 0; sub < 5; sub += 1)
		{
			cout << "\nCalories for day " << sub + 1 << ": " << calories[sub] << endl;
		}
		system("pause");
		return 0;
	
}
