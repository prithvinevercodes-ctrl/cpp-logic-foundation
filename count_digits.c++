// counting digits
#include <iostream>
 using namespace std;
int main() {
 int n;
        cout<<"Enter the numbers : ";
         cin>>n; //will take input from user
int count=0;
    if(n==0){
  cout<<"1";
    else {
while(n>0){
        n%10;
      count++;
       n=n/10;
 }
   cout<<count;
 }
 }