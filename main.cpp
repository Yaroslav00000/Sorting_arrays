#include <iostream>
#include <Windows.h>
using namespace std;

void degree(int a,int n){
	int res = 1;
	for (int i = 0; i < n; i++) {
		res *= a;
	}
	cout << "���������: " << res << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	int a, n;
	cout << "������ �����: ";
	cin >> a;
	cout << "������ ������: ";
	cin >> n;
	degree(a,n);
    return 0;
}
