//Write a program to print all prime numbers in a given range
#include <iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter 2 no.s in which prime no. has to be found ";
  cin>>a>>b;
  for(int n=a;n<=b;n++){
    int i;
    for(i=2;i<=n;i++){
      if(n%i==0){
        break;
      }
    }
    if (i==n){
      cout<<n<<endl;
    }
  }
  return 0;
}
