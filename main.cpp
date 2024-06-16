#include <iostream>
#include <Windows.h>
using namespace std;

bool is_perfect(int n) {
    if (n <= 1) return false;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

void find_perfect_numbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_perfect(i)) {
            cout << i << " - досконале число" << endl;

        }
    }
}
    

int main() {
    int start, end;
    cout << "¬вед≥ть д≥апазон (початкове та к≥нцеве значенн€): ";
    cin >> start >> end;

    if (start > end) {
        swap(start, end);
    }

    find_perfect_numbers(start, end);

    return 0;
}
