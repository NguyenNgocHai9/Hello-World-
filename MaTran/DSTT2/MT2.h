#pragma once
class MT2
{
private:
	double a[10][10];
	int n;
public:
	friend VT2 tich(const VT2 &y); 
	
	void nhapMT();
	void xuatMT();
	VT2 tich(const VT2 &y);
	MT2();
	~MT2();

};


