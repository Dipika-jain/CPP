//WAP TO print absolute vlaue of a number entered by user
#include<iostream>
using namespace std;
int main(){
  int n;
  std::cout << "ENTER A NO." << '\n';
  cin >>n;
  if(n<0){
    n=n*(-1);
    cout<<"absolute calue is: "<<n;
  }
  else{
    cout<<"absolute calue is: "<<n;
  }
}
