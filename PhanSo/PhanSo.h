#pragma once
class PhanSo
{
private:
	int iTuSo,iMauSo;
public:
	PhanSo();
	~PhanSo();
	PhanSo(int, int);
	void Nhap();
	void Xuat();
	int UCLN(int a, int b);
	PhanSo RutGonPhanSo();
	PhanSo NghichDao();
	PhanSo Tong(PhanSo);
	PhanSo Hieu(PhanSo);
	PhanSo Tich(PhanSo);
	PhanSo Thuong(PhanSo);
	
};

