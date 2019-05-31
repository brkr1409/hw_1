#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите целое число и нажмите <Enter>: ";
	cin >> a;
	cout << "Число ";
	if (a % 2 != 1){
		cout << a << " четное" << endl;
	}
	else {
		cout << a << " не четное" << endl;
	}
	system("pause");
}