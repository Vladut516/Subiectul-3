// vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int diofantic(int n,int s[],int a, int b,int c)
{
	int nr = 0;
	for (int i = 1; i <= n; i++)
		cin >> s[i];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (s[i] != s[j] && (a*s[i] * s[i] + b * s[j] * s[j] == c))
				nr++;

	return nr;
}

int main()
{
	int n, s[100], a, b, c;
	cout << diofantic(n, s, 1, 1, 25);
	/*if (nr(7) == 1)
		cout << "da";
	else
		cout << "nu";*/
    return 0;
}

