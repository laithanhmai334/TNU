#include <iostream>

using namespace std;
int tong(int a, int b){
return a + b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int dtHCN(int a, int b){
return a*b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout <<"Tong:"<< tong(10,5);
	cout <<"dien tich hcn:"<< dtHCN(10,10);

	system("pause");
	return 0;
}