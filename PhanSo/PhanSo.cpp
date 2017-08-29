#include "PhanSo.h"
#include "iostream"
#include "math.h"
#include "conio.h"
#include "math.h"
using namespace std;

PhanSo::PhanSo()
{
}


PhanSo::~PhanSo()
{
}
PhanSo::PhanSo(int t, int m)
{
	iTuSo = t;
	iMauSo = m;
}
int PhanSo::UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == b)
		return a;
	else
	{
		if (a > b)
			return UCLN(a - b, b);
		else
			if (a < b)
				return UCLN(a, b - a);
	}
	
	
	
}
PhanSo PhanSo::RutGonPhanSo()
{
	PhanSo temp;
	if (iMauSo < 0)
	{
		temp.iTuSo = -temp.iTuSo;
		temp.iMauSo = -temp.iMauSo;
	}
	int k = UCLN(iTuSo, iMauSo);
	temp.iTuSo = iTuSo / k;
	temp.iMauSo = iMauSo / k;
	return temp;
}
void PhanSo::Nhap()
{
	do
	{
		cout <<"\n\tNhap vao tu so :";
		cin >> iTuSo;
		cout <<"\n\tNhap vao mau so(mau so khac 0):";
		cin >> iMauSo;
	} while (iMauSo == 0);
}
void PhanSo::Xuat()
{
	if(iTuSo==0)
	{
		if(iMauSo==0)
			cout<<"Math error !"<<endl;
		cout<<"0";
	}
	else
	{
		if(iMauSo==0)
		{
			cout<<"Math error !"<<endl;
		}
		else
		{
			if(iMauSo==1)
				cout<<iTuSo<<endl;
			cout<<iTuSo<<'/'<<iMauSo<<endl;
		}
	}

	
	
}
PhanSo PhanSo::Tong(PhanSo x)
{
	PhanSo temp;
	if (iTuSo == 0&&x.iTuSo!=0)
	{
		return PhanSo(x.iTuSo, x.iMauSo).RutGonPhanSo();
	}
	if (x.iTuSo == 0&&iTuSo != 0)
	{
		return PhanSo(iTuSo, iMauSo).RutGonPhanSo();
	}
	if (iTuSo == 0 && x.iTuSo == 0)
		return PhanSo(0, 1);
	else
	{
		temp.iTuSo = iTuSo*x.iMauSo + x.iTuSo*iMauSo;
		temp.iMauSo = x.iMauSo*iMauSo;
		return temp.RutGonPhanSo();
	}
	
}
PhanSo PhanSo::Hieu(PhanSo x)
{
	PhanSo temp;
	if (iTuSo == 0&&x.iTuSo!=0)
	{
		return PhanSo(-x.iTuSo, x.iMauSo).RutGonPhanSo();
	}
	if (x.iTuSo == 0&&iTuSo != 0)
	{
		return PhanSo(iTuSo, iMauSo).RutGonPhanSo();
	}
	if (iTuSo*x.iMauSo == x.iTuSo*iMauSo ||(iTuSo == 0 && x.iTuSo == 0))
		return PhanSo(0, 1);
	else
	{
		temp.iTuSo = iTuSo*x.iMauSo - x.iTuSo*iMauSo;
		temp.iMauSo = x.iMauSo*iMauSo;
		return temp.RutGonPhanSo();
	}

}
PhanSo PhanSo::Tich(PhanSo x)
{
	if (iTuSo == 0 || x.iTuSo == 0)
	{
		return PhanSo(0, 1);
	}
	else
		return PhanSo(iTuSo*x.iTuSo, x.iMauSo*iMauSo).RutGonPhanSo();
}
PhanSo PhanSo::Thuong(PhanSo x)
{
	if(iTuSo == 0 && x.iTuSo == 0)
			return PhanSo(0,0);
	else
	{
		if (iTuSo==0||x.iMauSo== 0)
			return PhanSo(0, 1);
		else
			return PhanSo(iTuSo*x.iMauSo, iMauSo*x.iTuSo).RutGonPhanSo();
	}
}
