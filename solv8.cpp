//take N integers as input and display Perfect and Not Perfect for each of the integer.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter all digits number ";
    cin>>n;
    cout<<"enter your all digits ";
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=1; j<array[i]; j++){
            if(array[i]%j==0){
                sum=sum+j;
            }

        }
        if(sum==array[i]){
            cout<<array[i]<<" perfect number"<<endl;
        }
        else{
            cout<<array[i]<<" not perfect number "<<endl;
        }
    }
    return 0;
}

