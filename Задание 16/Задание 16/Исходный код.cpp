#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "������� ����������� �����:" << endl;
	cin >> a;
	cout << "�������: " << a / 10 << endl;
	cout << "�������: " << a % 10 << endl;
	system("pause");
}