//Write a C++ program to take N characters but only output the vowels from those
//characters.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of characters";
    cin>>n;
    cout<<"type all characters";
    char array[n];
    for(int i=0; i<n; i++){
         cin>>array[i];
    }
    int a=0;
    while(a<n){
            if(array[a]=='a'||array[a]=='e'||array[a]=='i'||array[a]=='o'||array[a]=='u'){
                cout<<array[a]<<" vowel"<<endl;
            }
            a++;

    }

}
