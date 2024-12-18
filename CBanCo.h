#pragma once
#include "CQuanCo.h"
#include "CQuanTot.h"
#include "CQuanHau.h"
#include "CQuanXe.h"
#include "CQuanMa.h"
#include "CQuanTuong.h"
#include "CQuanVua.h"
enum LOAI { TOT, XE, MA, TUONG, HAU, VUA };
class CBanCo
{
protected:
	CQuanCo* quanCo[8][8];
public:
	CBanCo();
	~CBanCo();
	bool coQuan(int x, int y);
	bool coTheDiChuyen(int x0, int y0, int x1, int y1);
	void print();
	void diChuyen(int m);
};

