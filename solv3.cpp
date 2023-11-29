#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter total digits numbers ";
   cin>>n;
   cout<<"type your all digits ";
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   int a=0;
   while(a<n){
    if(arr[a]%2==0){
        cout<<arr[a]<<" is even"<<endl;
    }
    else{
        cout<<arr[a]<<" is odd"<<endl;
    }
    a++;
   }
   return 0;




}
