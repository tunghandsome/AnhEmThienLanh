#include <iostream>

using namespace std;
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

int main()
{
	cout << "\n Tong la:";
	Tong(a,b);
	hieu(a,b);
	tich(a,b);
	thuong(a,b);
	system("pause");
	return 0;
}
