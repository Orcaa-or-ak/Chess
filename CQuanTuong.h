#pragma once
#include "CQuanCo.h"
class CQuanTuong:public CQuanCo
{
public:
	CQuanTuong();
	CQuanTuong(int m) :CQuanCo(m) {}
	~CQuanTuong();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};

