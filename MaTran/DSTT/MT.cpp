#include "MT.h"
#include "VT.h"
#include <iostream>
#include <conio.h>

using namespace std; 

MT::MT()
{
}

MT::~MT()
{
}

void MT::nhapMT()
{
	cout << "Bac cua ma tran : ";
	cin >> n; 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]= "; 
			cin>> a[i][j]; 
		}
	}
}

void MT::xuatMT()
{
	for (int i = 1; i <= n; i++)
	{
		cout << endl; 
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " "; 
		}
	}
}

VT MT::tich(const VT &y)
{
	VT z; 
	int i, j; 
	for (i = 1; i <= n; i++)
	{
		z.x[i] = 0.0; 
		for (j = 1; j <= n; j++)
		{
			z.x[i] += a[j][i] * y.x[j]; 
		}
	}
	z.n = n; 
	return z; 
}