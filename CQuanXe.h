#pragma once
#include "CQuanCo.h"
class CQuanXe:public CQuanCo
{
public:
	CQuanXe();
	CQuanXe(int m) :CQuanCo(m) {}
	~CQuanXe();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};

