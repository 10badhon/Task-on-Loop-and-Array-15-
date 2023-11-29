#include<iostream>
using namespace std;
int main() {
      int n;
      cout<<"enter total students number";
      cin>>n;
      cout<<"enter per student marks";
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      int sum=0,a=0;
      while(a<n){
        sum+=arr[a];
        a++;
      }
      int total=float(sum)/n;
      cout<<n<<"students avg is"<<total;
      return 0;



}
