#include "CQuanVua.h"

CQuanVua::CQuanVua()
{
}

CQuanVua::~CQuanVua()
{
}

int CQuanVua::getLoai()
{
    return 5;
}

void CQuanVua::print()
{
    if (mau == TRANG)
        cout << "[V  ]";
    else
        cout << "[V* ]";
}

bool CQuanVua::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
    if(abs(x1 - x0) > 1 || abs(y1 - y0) > 1)
        return false;
    return true;
}
