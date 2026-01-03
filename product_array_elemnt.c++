// Product of array elements with

input

#include <iostream>

using namespace std;

int main() {

int size;

cout<<"Enter size of array: ";

cin>>size;

cout<<endl;

int arr[size];

cout<<"Enter"<<" "<< size <<" "<<"integer into array: ";

for(int i=0;i<size; i++){

cin>>arr[i];

}

int pro=1;

for(int i=0;i<size;i++){

}

pro*=arr[i];

cout<<endl;

cout<<"Product = "<<pro;

}