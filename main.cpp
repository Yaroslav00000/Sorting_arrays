#include <iostream>
#include <Windows.h>
using namespace std;

void number() {

	int number;
	cout << "������ �����: ";
	cin >> number;
	if (number > 0) {
		cout << "����� " << number << " � �������  " << endl;
	}
	else {
		cout << "Error!!!" << endl;
	}
	cout << endl;


}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	number();


	return 0;
}

