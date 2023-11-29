#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter your total digits number ";
   cin>>n;
   cout<<"enter your all digits ";
   int arr[n];
   for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int l1=arr[0],l2=arr[1];
    for(int i=0; i<n; i++){
        if(arr[i]>l1){
            l1=arr[i];
        }
    }

    for(int i=0; i<n; i++){
        if(l1>arr[i] && l2<arr[i]){
            l2=arr[i];
        }
    }
    cout<<l1<<" is largest "<<endl<<l2<<" second largest";

return 0;

}
