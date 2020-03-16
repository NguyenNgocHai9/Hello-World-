#include "VT.h"
#include "MT.h"
#include <iostream>
#include <conio.h>

using namespace std; 

VT::VT()
{
}

VT::~VT()
{
}

void VT::nhapVT()
{
	cout << "\n Cap vec to: "; 
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nPhan tu thu " << i << " = "; 
		cin >> x[i]; 
	}
}

void VT::xuatVT()
{
	for (int i = 1; i <= n; i++)
	{
		cout << x[i] << " "; 
	}
}

