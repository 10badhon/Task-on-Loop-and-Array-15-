//. Write a program in C++ to create and display unique three-digit number using 1, 2, 3, 4.
//Also count how many three-digit numbers are there.
#include<iostream>
using namespace std;

int main(){

int counter = 0;
for(int i=0; i<4; i++){

    for(int j=0; j<4; j++){

        for(int k=0; k<4; k++){

            if(i!=j && i!=k && j!=k){

                cout<<i<<j<<k<<" ";
                counter++;
            }
        }
    }
}

cout<<endl;
cout<<"Total number of the three digit numbers are: "<<counter;




    return 0;
}
