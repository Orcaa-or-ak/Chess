#include "CQuanCo.h"

CQuanCo::CQuanCo()
{

}

CQuanCo::CQuanCo(int m)
{
	mau = m;
	if (mau != DEN && mau != TRANG)
		exit(1);
}

int CQuanCo::getMau()
{
	return mau;
}

CQuanCo::~CQuanCo()
{

}
