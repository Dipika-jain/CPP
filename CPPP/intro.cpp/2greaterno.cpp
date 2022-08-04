//To check which is greater no among 2 no.s
#include<iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"ENTER 2 NO.S: \n";
  cin>>a,b;
  if (a==b){
    cout<<"Both are equal no.s";
  }
  else if (a>b) {
    cout<< "A is greater than B" << '\n';
  }
  else{
    cout<<"B is greater than A \n";
  }

  return 0;
}
