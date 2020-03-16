#include "MT2.h"
#include "VT2.h"
#include <iostream>
#include <conio.h>

using namespace std;

MT2::MT2()
{
}

MT2::~MT2()
{
}

void MT2::nhapMT()
{
	cout << "Bac cua ma tran : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

void MT2::xuatMT()
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

VT2 MT2::tich(const VT2 &y)
{
	VT2 z;
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