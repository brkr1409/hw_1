#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "������� ����� ����� � ������� <Enter>: ";
	cin >> a;
	cout << "����� ";
	if (a % 2 != 1){
		cout << a << " ������" << endl;
	}
	else {
		cout << a << " �� ������" << endl;
	}
	system("pause");
}