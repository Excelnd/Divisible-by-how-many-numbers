// divisible by how many numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n,T;
	int ans;
	cout << "Enter how many test cases you want = ";
	cin >> T;


	cout << endl;

	while (T--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (ans = (n % i == 0))
				//cout << i << " X " << n << " = " << i << endl;
				cout << n << " Divisible By" << " = " << i << endl;
		}
	}
    return 0;
}
