#include <iostream>

#include <cmath>

using namespace std;

int fact(int x){

int fact=1;

for(int i=1;i<=x;i++){

fact*=i;

}

return fact;

}

int main() {

int n,r;

cout<<"Enter n: ";

cin>>n;

cout<<"Enter r: ";

cin>>r;

if(r>n){

cout<<"r can not be greater than n .";

} else{

int a=fact(n);

int b=fact(r);

int c=fact(n-r);

cout<<"nCr= "<<a/(b*c);

} 

return 0;
} 
