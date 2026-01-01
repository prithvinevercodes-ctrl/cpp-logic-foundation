// Palindrome check

#include <iostream>

using namespace std;

int main(){

int n;

cout<<"Enter the Number: ";

cin>>n;

int temp=n;

int rev=0;

- while(n>0){

int digit n%10;

rev=rev*10+digit;

n=n/10;

}

-

if(temp==rev){

cout<<"Number is a palindrome";

-

} else {

cout<<"Number is NOT a palindrome";

}

}