//wap to write factorial of a no. without recursion
#include <iostream>
using namespace std;
int main(){
  int i,n;
  cout<<"Enter a number: ";
  cin>>n;
  int f=1;
  for(i=1;i<=n;i++){
    f=f*i;
  }
  cout<<"Fatorial of a no. is: "<<f;
}
