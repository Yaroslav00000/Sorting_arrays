#include <iostream>
#include <Windows.h>
using namespace std;

void factorial() {

	int factorial = 1, number;
	cout << "������ ����� ��� ���������� ���������: ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}
	cout << endl;
	cout << "�������� " << number << " � " << factorial << endl;

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	factorial();


	return 0;
}

