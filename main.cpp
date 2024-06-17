#include <iostream>
#include <Windows.h>
using namespace std;

void Happy_number(int n) {
	int sum1 = 0;
    int sum2 = 0;
	int n2 = n / 1000;
	n %= 1000;
	for (size_t i = 0; i < 3; i++)
	{
		sum1 += n2 % 10;
		sum2 += n % 10;
		n2 /= 10;
		n /= 10;
	}
	cout << sum1 << " == " << sum2 << endl;
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
    Happy_number(n);
    return 0;
}
