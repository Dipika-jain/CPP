#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a no.";
  cin>>n;
  int sum=0;
  int orgnum=n;
  for(int i=1;i<n;i++){
    if(n%i==0){
      sum=sum+i;
    }
  }
  if(sum==orgnum){
    cout<<"PERFECT NUMBER";
  }
  else{
    cout<<"NOT A PERFECT NUMBER";
  }
}
