#include "CBanCo.h"
#include "stdlib.h"
#include "string.h"

CBanCo::CBanCo()
{
	quanCo[0][0] = new CQuanXe(DEN);
	quanCo[0][1] = new CQuanMa(DEN);
	quanCo[0][2] = new CQuanTuong(DEN);
	quanCo[0][3] = new CQuanHau(DEN);
	quanCo[0][4] = new CQuanVua(DEN);
	quanCo[0][5] = new CQuanTuong(DEN);
	quanCo[0][6] = new CQuanMa(DEN);
	quanCo[0][7] = new CQuanXe(DEN);
	for (int i = 0; i < 8; i++)
	{
		quanCo[1][i] = new CQuanTot(DEN);
		for (int j = 2; j < 6; j++)
			quanCo[j][i] = NULL;
		quanCo[6][i] = new CQuanTot(TRANG);
	}
	quanCo[7][0] = new CQuanXe(TRANG);
	quanCo[7][1] = new CQuanMa(TRANG);
	quanCo[7][2] = new CQuanTuong(TRANG);
	quanCo[7][3] = new CQuanHau(TRANG);
	quanCo[7][4] = new CQuanVua(TRANG);
	quanCo[7][5] = new CQuanTuong(TRANG);
	quanCo[7][6] = new CQuanMa(TRANG);
	quanCo[7][7] = new CQuanXe(TRANG);
}

CBanCo::~CBanCo()
{
}

bool CBanCo::coQuan(int x, int y)
{
	if(quanCo[y][x] == NULL)
		return false;
	return true;
}

bool CBanCo::coTheDiChuyen(int x0, int y0, int x1, int y1)
{
	CQuanCo* p = quanCo[y0][x0];
	CQuanCo* q = quanCo[y1][x1];
	
	if (q != NULL && q->getMau() == p->getMau())
		return false;
	if (p->nuocDiHopLe(x0, y0, x1, y1) == false)
		return false;
	int x = (x0 < x1) ? 1 : -1;
	int y = (y0 < y1) ? 1 : -1;
	int tempX = x0 + x, tempY = y0 + y;
	switch (p->getLoai())
	{
	case TOT:
		if (x1 - x0 == 0)
		{
			for (tempY; tempY != y1; tempY += y)
				if (quanCo[tempY][x0] != NULL)
					return false;
		}
		else
			if (q == NULL)
				return false;
		return true;

	case XE:
		if (x1 - x0 != 0)//di chuyen theo hang ngang
		{
			for (int i = tempX; i != x1; i += x)
				if (quanCo[y0][i] != NULL)
					return false;
		}
		else
		{
			for (int i = tempY; i != y1; i += y)
				if (quanCo[i][x0] != NULL)
					return false;
		}
		return true;
	case MA:
		return true;
	case TUONG:
		while (tempX != x1)
		{
			if (quanCo[tempY][tempX] != NULL)
				return false;
			tempX += x;
			tempY += y;
		}
		return true;
	case HAU:
		if (y1 == y0)//di chuyen theo hang ngang
		{
			for (int i = tempX; i != x1; i += x)
				if (quanCo[y0][i] != NULL)
					return false;
		}
		if(x1 == x0)
		{
			for (int i = tempY; i != y1; i += y)
				if (quanCo[i][x0] != NULL)
					return false;
		}
		else
		{
			while (tempX != x1)
			{
				if (quanCo[tempY][tempX] != NULL)
					return false;
				tempX += x;
				tempY += y;
			}
		}
		return true;
	case VUA:
		return true;
	}
	return true;
}

void CBanCo::print()
{
	cout << "    ";
	for (int i = 0; i < 8; i++)
		cout << "  " << char(97 + i) << "  ";
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << " " << i + 1 << "  ";
		for (int j = 0; j < 8; j++)
		{
			if (quanCo[i][j] == NULL)
				cout << "[   ]";
			else
				quanCo[i][j]->print();
		}
		cout << endl;
	}
	cout << "============================================\n";
}

void CBanCo::diChuyen(int m)
{
	int x0, y0, x1, y1;
	char xDau, xSau,yDau, ySau;
	bool coQuanCo;
	CQuanCo *p, *q;
	do{
		do {
			cout << "Nhap vi tri quan co can di chuyen (vd: a1): ";
			cin >> xDau >> yDau;

			y0 = (int)yDau - 48;
			x0 = int(xDau) - 97;
			y0--;
		} while (xDau < 'a' || xDau > 'h' || y0 < 0 || y0 > 7 || quanCo[y0][x0] == NULL);
		do {
			cout << "Nhap vi tri quan co can di chuyen den (vd: a1): ";
			cin >> xSau >> ySau;

			y1 = (int)ySau - 48;
			x1 = int(xSau) - 97;
			y1--;
		} while (xSau < 'a' || xSau> 'h' || y1 < 0 || y1 > 7);
		p = quanCo[y0][x0];
	} while (	coTheDiChuyen(x0, y0, x1, y1) == 0 ||
				p->getMau() != m || 
				(x1 == x0 && y1 == y0));
	if (quanCo[y1][x1] != NULL && quanCo[y1][x1]->getLoai() == VUA)
	{
		cout << "Quan ";
		if (quanCo[y0][x0]->getMau())
			cout << "DEN";
		else
			cout << "TRANG";
		cout << " da gianh chien thang\nTRO CHOI KET THUC";
		exit(1);
	}
	quanCo[y0][x0] = NULL;
	quanCo[y1][x1] = p;
}
