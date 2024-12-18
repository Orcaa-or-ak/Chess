#pragma once
#include "CQuanCo.h"
class CQuanTot:public CQuanCo
{
private:
	bool moved;
public:
	CQuanTot();
	CQuanTot(int m) :CQuanCo(m) { moved = false; }
	~CQuanTot();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};

