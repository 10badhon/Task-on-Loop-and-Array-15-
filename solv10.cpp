//Write a program in C++ to display the pattern like right angle triangle using an asterisk.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row number ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
    }

