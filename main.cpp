#include <iostream>
#include <Windows.h>
using namespace std;

int Prime_number() {
    int num;
    cout << "Введіть число: ";
    cin >> num;
    if (num < 2) {
		cout << "Число не є простим" << endl;
		return false;
	}
    for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			cout << "Число не є простим" << endl;
			return false;
		}
	}
    cout << "Число є простим" << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Prime_number();

    return 0;
}
