#include <iostream>
using namespace std;
void main(){
	setlocale(LC_ALL, "Rus");
	int i,a1,a2,a3,a4,a5,a6,sum1,sum2;
	cout << "¬ведите шестизначное число ";
	cin >> i;
	a1 = (i / 100000);
	a2 = i/10000 - a1*10;
	a3 = (i / 1000) - a1*100-a2*10;
	a4 = (i / 100) -a1*1000-a2*100-a3*10;
	a5 = (i / 10) -a1*10000-a2*1000-a3*100-a4*10;
	a6 = i - a1 * 100000 - a2 * 10000 - a3 * 1000 - a4 * 100 - a5 * 10;
	sum1 = a1 + a2 + a3;
	sum2 = a4 + a5 + a6;
	if ((i < 999999) && (i > 100000)){
		if (sum1 == sum2){
			cout << "¬веденное число €вл€етс€ счастливым" << endl;
		}
	}
	else if (sum1!=sum2){
		cout << "¬веденное число не €вл€етс€ счастливым" << endl;  //€ хз че не выводит
	}
	else{
		cout << "error" << endl;
	}
	system("pause");
}