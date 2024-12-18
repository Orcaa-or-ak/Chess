#pragma once
#include <iostream>
#include <cmath>
using namespace std;
#define TRANG 0
#define DEN 1
class CQuanCo
{
protected:
	int mau;
public:
	CQuanCo();
	CQuanCo(int m);
	int getMau();
	virtual int getLoai() = 0;
	virtual ~CQuanCo();
	virtual void print() = 0;
	virtual bool nuocDiHopLe(int x0, int y0, int x1, int y1) = 0;
};

