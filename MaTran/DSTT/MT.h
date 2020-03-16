#pragma once
class MT
{
private:
	double a[10][10]; 
	int n; 
public:
	friend class VT; 
	void nhapMT(); 
	void xuatMT(); 
	VT tich(const VT &y);
	MT();
	~MT();

};

