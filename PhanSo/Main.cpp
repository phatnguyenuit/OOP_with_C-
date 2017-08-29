#include "iostream"
#include "PhanSo.h"
using namespace std;
void main()
{
	PhanSo p1, p2,p3(2, 3),temp;
	cout << "Nhap vao phan so thu 1 (mau so khac 0) :";
	p1.Nhap();
	cout << "Nhap vao phan so thu 2 (mau so khac 0):";
	p2.Nhap();
	cout << "Phan So khoi tao la :";
	p3.Xuat();
	cout << "\nTong 2 phan so la :";
	temp = p1.Tong(p2);
	temp.Xuat();
	cout << "\nHieu 2 phan so la :";
	temp = p1.Hieu(p2);
	temp.Xuat();
	cout << "\nTich 2 phan so la :";
	temp = p1.Tich(p2);
	temp.Xuat();
	cout << "\nThuong 2 phan so la :";
	temp = p1.Thuong(p2);
	temp.Xuat();
	


	

}