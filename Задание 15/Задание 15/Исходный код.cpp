#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	float a, b;
	cout << "���������� �������� ����" << endl;
	cout << "������� ����� ��������� (������): ";
	cin >> a;
	cout << "������� �����(�����.������): ";
	cin >> b;
	cout << "���������" << a << endl;
	cout << "�����: " << b * 60 << "���" << endl;
	cout << "�� ������ �� ��������� " << a / b << " �/�.  ��� " << (a / b) / 3.6 << " ��/�." << endl;
	system("pause");
}