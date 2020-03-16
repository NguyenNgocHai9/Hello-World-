#include "VT2.h"
#include "MT2.h"
#include <iostream>
#include <conio.h>

using namespace std;

VT2::VT2()
{
}

VT2::~VT2()
{
}

void VT2::nhapVT()
{
	cout << "\n Cap vec to: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nPhan tu thu " << i << " = ";
		cin >> x[i];
	}
}

void VT2::xuatVT()
{
	for (int i = 1; i <= n; i++)
	{
		cout << x[i] << " ";
	}
}
