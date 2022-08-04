//wap to reverse a number
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a no. ";
  cin>>n;
  int rev;
  while(n>0){
    int lastdig=n%10;
    rev=rev*10+lastdig;
    n=n/10;
  }
  cout<<rev;
}
