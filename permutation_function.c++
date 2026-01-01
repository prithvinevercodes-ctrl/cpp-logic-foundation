// Permutations (nPr)=n!/(n-r)!

#include <iostream>

using namespace std;

int fact(int x){

int fact=1;

for (int i=1;i<=x;i++){

fact*=i;

}

return fact;

}

int main() {

int n,r;

cout<<"Enter the n: ";

cin>>n;

cout<<"Enter the r: ";

cin>>r;

int a=fact(n);

int b=fact(n-r);

cout<<"nPr= "<<a/b;

return 0;

}