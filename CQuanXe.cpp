#include "CQuanXe.h"

CQuanXe::CQuanXe()
{
}

CQuanXe::~CQuanXe()
{
}

int CQuanXe::getLoai()
{
    return 1;
}

void CQuanXe::print()
{
    if (mau == TRANG)
        cout << "[X  ]";
    else
        cout << "[X* ]";
}

bool CQuanXe::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
    if (x1 == x0 || y1 == y0)
        return true;
	return false;
}
