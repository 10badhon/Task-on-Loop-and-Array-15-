//Write a program in C++ to find the frequency of each digit for a given integer.
#include <iostream>
using namespace std;

int main() {
    int n,d=0;
    cout<<"enter any numbers: ";
    cin>>n;
    int arr[10]={0};
    while (n > 0) {
        d=n % 10;
        arr[d]++;
        n=n/10;
    }
    for (int i=0; i<10; i++) {
        cout << "The frequency of " << i << " = " << arr[i] << endl;
    }
    return 0;
}
