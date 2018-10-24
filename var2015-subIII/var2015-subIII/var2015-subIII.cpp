// var2015-subIII.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void citire(int v[][50], int &n,int &m)
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> v[i][j];
}



bool e_prim(int n)
{
	if (n <= 1)return 0;
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0) return false;

	return true;
}
void constuireX(int x[],int n,int m,int v[][50])
{

	int k = 0;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			x[++k] = v[j][i];
}

void afisare(int x[], int n)
{
	for (int i = 1; i <= n; i++)
		cout << x[i] << " ";

		cout << endl;
}

void eliminiarePrimaCif(int &n)
{
	int copie = 0, p = 1, uc;
	while (n / 10 % 10 > 0)
	{
		uc = n % 10;
		copie = uc * p + copie;
		n /= 10;
		p = p * 10;
	}
	n = copie;
}

bool verifStea(int n)
{
	while (n > 0)
	{
		if (e_prim(n) == false)
			return false;
		else
			eliminiarePrimaCif(n);
	}
	return true;
}

int main()
{
	int v[50][50], x[300], n, m, nr;

	//citire(v, n, m);
	//constuireX(x, n, m, v);
	//afisare(x,  n*m );
	if (verifStea(283))
		cout << "DA";
	else
		cout << "nu";
	
    return 0;
}

