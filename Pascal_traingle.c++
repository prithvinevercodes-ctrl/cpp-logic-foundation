#include <iostream>

using namespace std;

int fact(int x){

int f = 1 ;

for(int i = 1 ; 1 <= x ;i++){

f*=i;

}

return f;

}

int nCr(int n, int r){

return fact(n)/(fact(r)*fact(n-r));

}

int main() {

int n;

cout<<"Enter (n) for traingle: ";

cin>>n;

- for(int i=1;i<=n;i++){

for(int j = 0 ; j <= n - 1 + 1 ;j++){

cout<<" ";

}

for(int j = 1 ;j<=i;j++){

cout<<nCr(i,j)<<" ";

}

cout<<endl;

}

return 0;

}

