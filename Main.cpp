#include "CBanCo.h"

int main()
{
	CBanCo banCo;
	
	bool i = 0;
	while (1)
	{
		system("cls");
		banCo.print();
		if (i)
			cout << "Luot cua quan DEN (*)\n";
		else
			cout << "Luot cua quan TRANG\n";
		banCo.diChuyen(i);
		i = !i;
	}
}