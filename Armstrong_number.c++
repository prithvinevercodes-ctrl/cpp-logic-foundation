// Armstrong check

#include <iostream>

using namespace std;

int main(){

int n;

cout<<"Enter the Number: ";

cin>>n;
int duplicate=n;
int temp=n;
int Arm=0;|

while(n>0){

int digit= (n%10)*(n%10)*(n%10);

Arm=Arm+digit;

n=n/10;

}

if(Arm==duplicate){

cout<<"It is an Armstrong Number";

}

else {

cout<<"It is not an Armstrong Number. ";

}

} }