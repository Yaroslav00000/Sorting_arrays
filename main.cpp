#include <iostream>
#include <Windows.h>
using namespace std;

void kyb() {

	int kyb_number = 0, number;
	cout << "������ ����� ��� ���������� ���� ����: ";
	cin >> number;
	kyb_number = number * number;
	cout << endl;
	cout << "��� " << number << " � " << kyb_number << endl;

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	kyb();


	return 0;
}

