#pragma once
#include "CQuanCo.h"
class CQuanMa:public CQuanCo
{public:
	CQuanMa();
	CQuanMa(int m) :CQuanCo(m) {}
	~CQuanMa();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};

