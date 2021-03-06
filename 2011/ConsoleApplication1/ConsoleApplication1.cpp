// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void citire(int &n, int v[])
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

bool verificarePalindrom(int n)
{
	int copie = n, og = 0;
	while (copie > 0)
	{
		og = og * 10 + copie % 10;
		copie /= 10;
	}
	return og == n;
}

void inserareY(int &n, int v[],int x)
{
	if (n == 0)
	{
		v[0] = x;
		n++;
		return;
	}
	if (x > v[0])
	{
		for (int i = n; i >= 1; i--)
			v[i] = v[i - 1];
			
		v[0] = x;
		n++;
		return;
	}

	if (x < v[n - 1])
	{
		v[n++] = x;
		return;
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (v[i] == x)return;
		if (v[i] > x && v[i + 1] < x)
		{
			for (int j = n; j > i + 1; j--)
				v[j] = v[j - 1];

			v[i + 1] = x;
			n++;
			break;
		}
	}
	
}

void adaugareY(int n, int y[], int &k, int v[])
{
	for (int i = 0; i < n; i++)
		if (verificarePalindrom(v[i]))
			inserareY(k, y, v[i]);
	
}

void afisare(int n, int v[])
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}
int main()
{
	int v[100], y[100], n = 0, k=0;
	citire(n, v);
	adaugareY(n, y, k, v);
	afisare(k, y);

    return 0;
}

