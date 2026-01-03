// Maximum of all array elements with size and elements input

#include <iostream>

using namespace std;

int main() {

int size;

cout<<"Enter size of array: ";

cin>>size;

cout<<endl;

int arr[size];

cout<<"Enter"<<" "<< size <<"  " <<"integer into array: ";

for(int i=0;i<size;i++){

cin>>arr[i];

}

int mx=arr[0];

for(int i=1;i<size;i++){

if(arr[i]>mx){

mx=arr[i];

}

}

cout<<endl;

cout<<"Maximum= "<<mx;

}