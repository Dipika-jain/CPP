//WAP TO SWAP 2 NO.S USING 3RD VARIABLE
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter 2 no.s to be swapped: ";
  cin>>a>>b;
  c=b;
  b=a;
  a=c;
  cout<<"After swap: "<<a<<" "<<b;
}
