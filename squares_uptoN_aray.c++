// array containing squares of all

natural no.upto n

#include <iostream>

using namespace std;

int main() {

int size;

cout<<"Enter integer value: ";

cin>>size;

int arr[size];

for(int i=0;i<size;i++){

arr[i]=(i+1)*(i+1);

}

cout<<"array containing squares upto"<<" "<<size<<" "<<"is = ;

for(int i=0;i<size;i++){

cout<<arr[i]<<" ";

"

}

}