#include "MT.h"
#include "VT.h"
#include <iostream>
#include <conio.h>

using namespace std; 

int main()
{
	MT a; 
	VT b, c; 
	cout << "\nNhap ma tran A: "; 
	a.nhapMT(); 
	a.xuatMT(); 
	cout << "\nNhap vec to b"; 
	b.nhapVT(); 
	c = a.tich(b); 
	cout << "Tich cua ma tran A va vec to b vua nhap = "; 
	c.xuatVT(); 
	cout << endl;
	system("pause"); 
	return 0; 
}