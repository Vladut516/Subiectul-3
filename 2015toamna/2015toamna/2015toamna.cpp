// 2015toamna.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert>
#include "2015toamna.h"
using namespace std;

void citire(int &n, int v[])
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
}

bool verifcif(int a, int b)
{
	while (b > 0)
	{
		if (b % 10 == a)
			return true;

		b /= 10;
	} return false;
}
//inca una mai clara
bool verifcifCom(int a,int poz_a,int  v[],int n)
{
	int	x[10] = { 0 }, ok = 1;
	while (a > 0)
	{
		x[a % 10]++;
		a /= 10;
	}

	for (int i = 0; i <= 9; i++)
	{
		ok = 1;
		if (x[i] > 0)
		{
			for (int j = poz_a; j < n; j++)
				if (verifcif(i, v[j]) == false)
					ok = 0;

			if (ok == 1)
				return true;
		}
		
	}	
	return false;
}


void inserare(int poz, int val, int v[], int &n)
{
	n++;
	for (int i = n; i > poz; i--)
		v[i] = v[i - 1];

	v[poz] = val;
}

void inserareaDiv(int n, int v[], int a,int poz)
{
	/*for(int i=n/2;i>=2;i--)
		if(n%i==0)
			inserare*/
}


int main()
{
	
    return 0;
}

