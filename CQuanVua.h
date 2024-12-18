#pragma once
#include "CQuanCo.h"
class CQuanVua:public CQuanCo
{
public:
	CQuanVua();
	CQuanVua(int m) :CQuanCo(m) {}
	~CQuanVua();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};

