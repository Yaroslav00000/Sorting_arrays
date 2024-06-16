#include <iostream>
#include <Windows.h>
using namespace std;

void prum() {

	int height, width;
	cout << "¬вед≥ть висоту: ";
	cin >> height;
	cout << "¬вед≥ть ширину: ";
	cin >> width;
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < height - 2; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}

		cout << endl;
	}
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}

}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	prum();


	return 0;
}

