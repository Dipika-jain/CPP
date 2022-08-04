#include<iostream>
using namespace std;
void prime(int n1,int n2){
  int i;
  for(i=n1;i<n1;i++){
    if(n%i==0){
      cout<<"Not a prime no.";
      break;
    }
  }
  if(i==n){
    cout<<"prime no.";
  }
}
int main(){
  int a,b;
  cout<<"Enter 2 no.s btw prime no.s to be found ";
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(isprime(i)){
      cout<<i<<endl;
    }
  }
}
