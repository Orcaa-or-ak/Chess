#include "CQuanTuong.h"

CQuanTuong::CQuanTuong()
{
}

CQuanTuong::~CQuanTuong()
{
}

int CQuanTuong::getLoai()
{
    return 3;
}

void CQuanTuong::print()
{
    if (mau == TRANG)
        cout << "[Tg ]";
    else
        cout << "[Tg*]";
}

bool CQuanTuong::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
    if (abs(x1 - x0) == abs(y1 - y0))
        return true;
	return false;
}
