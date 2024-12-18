#include "CQuanMa.h"

CQuanMa::CQuanMa()
{
}

CQuanMa::~CQuanMa()
{
}

int CQuanMa::getLoai()
{
    return 2;
}

void CQuanMa::print()
{
    if (mau == TRANG)
        cout << "[M  ]";
    else
        cout << "[M* ]";
}

bool CQuanMa::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
    if (
        (abs(x1 - x0) == 2 && abs(y1 - y0) == 1) ||
        (abs(x1 - x0) == 1 && abs(y1 - y0) == 2)
        )
        return true;
    return false;

}
