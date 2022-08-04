////Print till n no. using do while loop
#include<iostream>
using namespace std;
int main(){
  int i=1;
  int n;
  cout<<"Enter no.";
  cin>>n;
  do{
    cout<<i<<"\n";
    i++;
  }
  while(i<=n);
  return 0;

}
