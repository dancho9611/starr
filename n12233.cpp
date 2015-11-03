// n12233.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n,br;
	cin >> n;
	br = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << br;
		}
		cout << endl;
		br += 2;
	}
    return 0;
}

