#include <iostream>

using namespace std;
int tong(int a, int b){
return a + b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b) {
	return a*b;
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout <<"Tong:"<< tong(10,5);
	cout <<"Hieu:"<< hieu(10,5);
	cout << "Tich: " >> tich(10,5);
	system("pause");
	return 0;
}