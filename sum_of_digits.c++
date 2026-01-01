// sum of digits
#include <iostream>
 using namespace std;
int main() {
 int n;
        cout<<"Enter the digits : ";
         cin>>n; //will take input from user
         int sum=0;
        while(n>0){

        int digit=n%10;

        sum+=digit;

          n= n/10;

}

         cout<<"The sum is: "<<sum; 

}