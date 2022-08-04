#include<iostream>
using namespace std;
int sum(int n1,int n2){
  return n1+n2;
}
int dif(int n1,int n2){
  return n1-n2;
}
int pro(int n1,int n2){
  return n1*n2;
}
int divi(int n1,int n2){
  return n1/n2;
}
int main(){
  int a,b;
  char op;
  cout<<"Enter + for addition \n"<<"Enter - for subtraction \n"<<"Enter * for multiplication \n"<<"Enter / for division \n";
  cin>>op;
  cout<<"Enter 2 no.s ";
  cin>>a>>b;
  if(op=='+'){
    cout<<"sum : "<<sum(a,b);
  }
  else if(op=='-'){
    cout<<"difference : "<<dif(a,b);
  }
  else if(op=='*'){
    cout<<"product : "<<pro(a,b);
  }
  else if(op=='/'){
    cout<<"quotient : "<<divi(a,b);
  }
}
