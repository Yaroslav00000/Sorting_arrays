#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

void print_card(string rank, string suit) {
	cout << "+--------+" << endl;
	cout << "| " << (char)003 << "      | " << endl;
	cout << "|        | " << endl;
	cout << "|        | " << endl;
	cout << "|    " << suit << "    | " << endl;
	cout << "|        | " << endl;
	cout << "|        | " << endl;
	cout << "| " << rank << "      | " << endl;
	cout << "+--------+" << endl;
}

int main() {
	string rank, suit;
	for (size_t i = 0; i < 255; i++)
	{
		cout << char(i) << endl;
	}
	cout << "+--------+" << endl;
	cout << "| " << (char)003 << "      | " << endl;
	cout << "|        | " << endl;
	cout << "|        | " << endl;
	cout << "|    " << suit << "    | " << endl;
	cout << "|        | " << endl;
	cout << "|        | " << endl;
	cout << "| " << rank << "      | " << endl;
	cout << "+--------+" << endl;
	cout << "������ ���� ����� (���������, س����, ����, ���): ";
	cin >> rank;
	cout << "������ ����� ����� (���������, ϳ��, �����, �����, ������): ";
	cin >> suit;

	print_card(rank, suit);

	return 0;
}
