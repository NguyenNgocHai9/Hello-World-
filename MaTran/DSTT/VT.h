#pragma once
class VT
{
private:
	double x[10]; 
	int n; 
public:
	friend class MT; 
	void nhapVT(); 
	void xuatVT(); 
	VT();
	~VT();
};

