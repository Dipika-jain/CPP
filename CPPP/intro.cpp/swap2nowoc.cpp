//WAP TO SWAP 2 NO.S WITHOUT USING 3RD VARIABLE
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter 2 no.s to be swapped: ";
  cin>>a>>b;
  a=a+b;
  b=a-b;
  a=a-b;
  cout<<"After swap: "<<a<<" "<<b;
  return 0;
}
