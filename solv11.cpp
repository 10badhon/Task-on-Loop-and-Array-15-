//Write a program in C++ to display the pattern as below using an asterisk.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter row numbers ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            cout<<" ";
        if(j<=n-i){
            cout<<" ";}
            else{cout<<"*";}
        }
    cout<<endl;
    }
return 0;
}
