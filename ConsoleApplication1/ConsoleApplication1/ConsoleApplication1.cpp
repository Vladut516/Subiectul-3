// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void inserareelem( int v[])
{
	int i = 1, j, k = 0;
	while (k <= 200 && i<200)
	{
		for (j = 2; j*j <= i; j++)
			if (i%j == 0)v[++k] = j;

		i++;
	}

}
int pr_cif(int n)
{
	int uc = n & 10;
	while (n > 0) {
		uc = n & 10;
		n /= 10;
	}
	return uc;
}

int ulti_cif(int n)
{
	return n % 10;
}

int cif_max(int n)
{
	int maxi = n & 10;
	while (n > 0)
	{
		if (maxi < n % 10)
			maxi = n % 10;

	}
	return maxi;
}

void matrice(int a[][10],int n,int v[])
{
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++)
		{
			if (i + j==n+1)
				a[i][j] = cif_max(v[n*n + i * i]);

			else if (i + j < n + 1)
				a[i][j] = ulti_cif(v[n*n + i + j]);

			else a[i][j] = pr_cif(v[n*n + i + j]);

		}
}

void afisare(int a[][10],int n)
{
	for (int i = 1; i <= n; i++)
	{	for (int j = 1; j <= n; j++)
		{
			cout << a[i][j];
		} cout << endl;
	}
}
int main()
{
	int x[200], n, A[10][10];
	cout << "n=";
	cin >> n;
	inserareelem(x);
	matrice(A, n, x);
	afisare(A, n);
	
    return 0;
}

