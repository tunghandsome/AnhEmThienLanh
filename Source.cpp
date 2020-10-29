#include <iostream>

using namespace std;
void chuvihinhvuong(int a)
{
	cout<<"Nhap canh a:";
	cin>>a;
	cout<<"chuvi hinh vuong la:"<<a*4;
}
void chuvihinhcn(float a, float b)
{
	cout << "Nhap chieu dai= ";
	cin >> a;
	cout << "Nhap chieu rong= ";
	cin >> b;
	cout << "Dien tich hinh chu nhat la: " << a * b << "\n";
}
void dientichhinhcn(float a, float b)
{
	cout << "Nhap chieu dai= ";
	cin >> a;
	cout << "Nhap chieu rong= ";
	cin >> b;
	cout << "Chu vi hinh chu nhat la: " << (a + b) * 2;
}
int chuvihinhtron(int a, int b)
void dientichhinhvuong(int a)
{
	cout<<"Nhap canh a:";
	cin>>a;
	cout<<"dt hinh vuong la:"<<a*a;
}
int dientichhinhtron(int a)
{
	float pi = 3,14;

	cout<<"Dien tich hinh tron la: ";
	a = pi*a*a;
	return a;
}
int tong(int a, int b)
{
	int c;
	cout << "\n Tong la:";
	cin >> a >> b;
	return c = a+ b;
	
}
int hieu(int a, int b);
{
	int s;
	cout << "\n Tong la:";
	cin >> a >> b;
	return s = a- b;
}
int tich(int a, int b);	
int z;
	cout << "\n tich la:";
	cin >> a >> b;
	return z = a* b;
}
int thuong(int a, int b);	
int z;
	cout << "\n thuong la:";
	cin >> a >> b;
	return z = a/ b;
}
int randomcong()
{
	int s=0;
	s=rand()+rand();
	return s;
}
int randomtru()
{
	int s=0;
	s=rand()-rand();
	return s;
}

void main()
{
	float a, b;
	cout << "\n Tong la:" << Tong(a, b);
	cout << "\n Tong la:" << hieu(a,b);
	cout << "\n Tong la:" << tich(a,b);
	cout << "\n Tong la:" << thuong(a,b);
	dientichhinhtron(a);
	dientichhinhcn(a, b);
	chuvihinhcn(a, b);
	dientichhinhvuong(a);
	chuvihinhvuong(a);
	cout<<"\nTong random :"<<randomcong();
	cout<<"\nTong random :"<<randomtru();
	system("pause");
}
