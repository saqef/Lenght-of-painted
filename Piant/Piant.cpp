// Piant.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
	string str = "";
	int N=0,len=0;
	cout << "N=?\n";
	cin >> N;
	cout << "Li & Ri=?" << endl;
	getline(cin, str);
	while (N != 0)
	{
		getline(cin, str);
		if (!str.empty())
		{
			str.erase(0, str.find_first_not_of(" "));
			int a = stoi(str);
			str.erase(0, str.find_first_of(" "));
			int b = stoi(str);
			if ((b - a) < 0)
			{
				cout << "Li > Ri";
				break;
			}
			else
				len += b - a;
		}
		else
		{
			cout << "Parametrs are empty. Repeat...\n";
		}
		N--;
	}
	cout << "length of painted part =" << len << endl;
	system("pause");
}

