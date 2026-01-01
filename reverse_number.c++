// reverse of digits

#include <iostream>

using namespace std;

int main() {

int n;

cout<<"Enter the numbers : ";

cin>>n; //will take input from

user

int rev=0;

while(n>0){

int digit=n%10;

rev=rev*10+digit;

n/=10;

}

cout<<"Reverse : "<<rev;

}