#include <iostream>
#include <Windows.h>
using namespace std;

void suma() {
    int num1, num2;
    int sum = 0;
    cout << "������ ����� �����: ";
    cin >> num1;
    cout << "������ ����� �����: ";
    cin >> num2;
    if (num1 > num2) {
        for (int i = num2; i <= num1; i++) {
			sum += i;
		}
        cout << "���� ����� �� " << num2 << " �� " << num1 << " = " << sum << endl;
    }
    else{
        for (int i = num1; i <= num2; i++) {
            sum += i;
        }
        cout << "���� ����� �� " << num1 << " �� " << num2 << " = " << sum << endl;
    }
    
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    suma();
    return 0;
}
