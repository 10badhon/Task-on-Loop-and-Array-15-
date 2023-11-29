//Take N integers as input and display prime and not prime for each of the integer.
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
        bool p=true;
        for(int j=2; j*j<=array[i]; j++){
            if(array[i]%j==0){
                p=false;
                break;
                }
        }
        if(p){
            cout<<array[i]<<" its prime"<<endl;
        }
        else{
            cout<<array[i]<<" its not prime"<<endl;
        }
    }
    return 1;
    }




