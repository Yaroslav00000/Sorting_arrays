#include <iostream>
#include <Windows.h>
using namespace std;

void number() {

	int number_1, number_2;
	cout << "������ ����� 1: ";
	cin >> number_1;
	cout << "������ ����� 2: ";
	cin >> number_2;
	if (number_1 > number_2) {
		cout << "����� " << number_1 << " ����� �� �����  " << number_2 << endl;
	}
	else {
		cout << "����� " << number_2 << " ����� �� �����  " << number_1 << endl;
	}
	cout << endl;


}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	number();


	return 0;
}
