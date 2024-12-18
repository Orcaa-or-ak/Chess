#pragma once
#include "CQuanCo.h"
class CQuanHau:public CQuanCo
{
public:
	CQuanHau();
	CQuanHau(int m) :CQuanCo(m) {}
	~CQuanHau();
	int getLoai();
	void print();
	bool nuocDiHopLe(int x0, int y0, int x1, int y1);
};