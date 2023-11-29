// Write a program in C++ to convert a decimal number to hexadecimal number.

#include <iostream>
using namespace std;

int main() {
    int n,a=0;
    cout << "enter decimal number: ";
    cin >> n;
    int arr[100];
    int i = 0;
    while (n > 0) {
        a = n % 16;
        arr[i] = a;
        i++;
        n = n / 16;
    }
    cout << "hexadecimal number is: ";
    for (int j = i-1; j>= 0; j--) {
        if (arr[j] <10) {
            cout << arr[j];
    }
        else {
            cout << char(arr[j] -10 +'A'); }
    }
    return 0;
}
