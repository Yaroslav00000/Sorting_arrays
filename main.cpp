#include <iostream>
#include <Windows.h>
using namespace std;

void Happy_number(int n) {
	int sum1 = 0;
    int sum2 = 0;
	n = 123321;
    for (int i = 0; i <= 2; i++) {
		sum1 += i;
	}
    for (int i = 5; i <= 3; i--) {
		sum2 += i;
	}
	if (sum1 == sum2) {
		cout << "Happy number" << endl;
	}
	else {
		cout << "Not a happy number" << endl;
	}
    
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Happy_number(123321);
    return 0;
}
