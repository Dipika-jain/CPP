//Write a program to check if a given number is prime or not.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"ENTER A NUMBER:";
  cin>>n;
  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
      cout<<"Not a prime no. \n";
      break;
    }
  }
  if (i==n){
    cout<<"Prime no. \n";
  }

}
