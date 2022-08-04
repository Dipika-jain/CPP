//WAP TO FIND SUM OF NATURAL NO.S TILL
#include<iostream>
using namespace std;
int main(){
  int i,n;
  cout<<"Enter till which sum is required:\n ";
  cin>>n;
  int sum=0;
  for(i=1;i<=n;i++){
    sum=sum+i;
  }
  cout<<sum<<" is the sum till "<<n;
  return 0;
}
