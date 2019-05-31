#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	float a, b;
	cout << "Вычисление скорости бега" << endl;
	cout << "Введите длину дистанции (метров): ";
	cin >> a;
	cout << "Введите время(минут.секунд): ";
	cin >> b;
	cout << "Дистанция" << a << endl;
	cout << "Время: " << b * 60 << "сек" << endl;
	cout << "Вы бежали со скоростью " << a / b << " м/с.  или " << (a / b) / 3.6 << " км/ч." << endl;
	system("pause");
}