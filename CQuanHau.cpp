#include "CQuanHau.h"

CQuanHau::CQuanHau()
{
}



CQuanHau::~CQuanHau()
{
}

int CQuanHau::getLoai()
{
	return 4;
}

void CQuanHau::print()
{
	if (mau == TRANG)
		cout << "[H  ]";
	else
		cout << "[H* ]";
}

bool CQuanHau::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
	if ((abs(x1 - x0) == abs(y1 - y0)) ||
		(x1 - x0 == 0 || y1 - y0 == 0)
		)
		return true;
	return false;
}
