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
	while (N != 0)
	{
		int a, b;
		cin >> a >> b;
			if ((b - a) < 0)
			{
				cout << "Li > Ri";
				break;
			}
			else
				len += b - a;
		N--;
	}
	cout << "length of painted part =" << len << endl;
	system("pause");
}

