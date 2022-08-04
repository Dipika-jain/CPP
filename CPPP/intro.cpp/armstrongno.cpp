//WAP TO CHECK WHETHER THE NO. IS ARMSTRONG NO. OR NOT
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter a no.";
  cin>>n;
  int sum=0;
  int orgnum=n;
  while(n>0){
    int lastdig=n%10;
    sum=sum+pow(lastdig,3);
    n=n/10;
  }
  if (sum==orgnum){
    cout<<"ARMSTRONG NO.";
  }
  else{
    cout<<" NOT A ARMSTRONG NO.";
  }
}
