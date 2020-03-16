#pragma once
class VT2
{
private:
	double x[10];
	int n;
public:
	friend VT2 tich(const VT2 &y); 
	void nhapVT();
	void xuatVT();
	VT2();
	~VT2();
};
