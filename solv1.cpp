#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter digit size ";
     cin>>n;
     cout<<"enter all digits ";
     int arr[n];
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int temp,a=0,b=n-1;
     while(a<b){
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        a++;
        b--;

     }
     for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
     }




}
