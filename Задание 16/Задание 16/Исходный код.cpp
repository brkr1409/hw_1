#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите двухзначное число:" << endl;
	cin >> a;
	cout << "Десятки: " << a / 10 << endl;
	cout << "Единицы: " << a % 10 << endl;
	system("pause");
}