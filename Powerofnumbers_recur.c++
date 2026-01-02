// Power of number using recursion

#include <iostream>

using namespace std;

int power(int a int b){

if(b==0) return 1;

}

return a*power(a,b-1);

int main() {

int n;

cout<<"Enter the base (A): ";

cin>>n;

int m;

cout<<"Enter the power (b): ";

cin>>m;

cout<<" A raised to power bis : |"

<<power(n,m);

}