//Calculate the Factorial of a number.
#include<iostream>
using namespace std;
int main(){
    int i,num,fact=1;
    cout<<"enter a digit for factorial ";
    cin>>num;
    for(i=1; i<=num; i++){
        fact=fact*i;


    }
    cout<<"factorial number is "<<fact;


return 0;


}
