// Swapping digits with extra variable

#include<iostream>

using namespace std;

int main(){

int n;

cout<<"enter first digit: ";

cin>>n;

int m;

cout<<"Enter second digit: ";

cin>>m;

int temp=n; //extra variable

n=m;

m=temp;

cout<<"digits are swapped using third variable: "<<n<<" "<<m;

cout<<endl;

cout<<endl;

// swapping without extra variable

int a;

cout<<"Enter fist digit : ";

cin>>a;

int b;

cout<<"Enter second digit : ";

cin>>b;

a=a+b;

b=a-b;

a=a-b;

cout<<"digits are swapped without extra variable: "<<a<<" "<<b;

}