#include "CQuanTot.h"

CQuanTot::CQuanTot()
{
 
    moved = false;
}

CQuanTot::~CQuanTot()
{
}

int CQuanTot::getLoai()
{
    return 0;
}

void CQuanTot::print()
{
    if (mau == TRANG)
        cout << "[T  ]";
    else
        cout << "[T* ]";
}

bool CQuanTot::nuocDiHopLe(int x0, int y0, int x1, int y1)
{
    if (
        moved == false && 
        ((y1 - y0 == 2 && mau == DEN) ||
        (y1 - y0 == -2 && mau == TRANG))
        )
    {
        moved = true;
        return true;
    }
    if ((y1 - y0 == 1 && mau == DEN) ||
        (y1 - y0 == -1 && mau == TRANG)
        )
    {
        moved = true;
        return true;
    }
    if (((mau == TRANG && y1 - y0 == -1)||
        (mau == DEN && y1 - y0 == 1)) &&
        ((x1 - x0 == 1) || (x1 - x0 == -1))
        )
    {
        moved = true;
        return true;
    }
    return false;
}
