// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void citire(int n, int v[])
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
}
int main()
{
    return 0;
}

