#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int R1, R2, R3, R0;
	R1 = 2;
	R2 = 4;
	R3 = 2;
	R0 = (R1*R2) / (R1 + R2);
	cout << "���� ��� �������������: " << endl;
	cout << "R1= " << R1 << endl;
	cout << "R2= " << R2 << endl;
	cout << "R3= " << R3 << endl;
	cout << "����� R0 �� �������: 1/R0 = 1/R1 + 1/R2 + 1/R3" << endl;
	cout << "�����: " << R0 << endl;
	system("pause");
}