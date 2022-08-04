#include<iostream>
using namespace std;
int add(int a, int b){
  int sum=a+b;
  return sum;
}
int main(){
  int n1,n2;
  cout<<"ENTER 2 NO.S : ";
  cin>>n1>>n2;
  cout<<"sum is "<<add(n1,n2);
}
