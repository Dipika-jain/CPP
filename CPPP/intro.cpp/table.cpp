//WAP TO DISPLAY MULTIPLICATION TABLE UPTO 10
#include<iostream>
using namespace std;
int main(){
  int i, n;
  cout<<"Enter positive no. : ";
  cin>>n;

  for(i=1;i<=10;i++){
    cout<<n<<"X"<<i<<"="<<n*i<<"\n";
  }
  return 0;
}
