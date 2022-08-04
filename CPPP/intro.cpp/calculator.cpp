#include<iostream>
using namespace std;
int main(){
  int a,b;
  char op;
  cout<<"Enter 2 no.s ";
  cin>>a>>b;
  cout<<"Enter operation ";
  cin>>op;
  switch (op) {
    case '+':{
      cout<<a+b<<endl;
      break;
    }
    case '-':{
      cout<<a-b<<endl;
      break;
    }
    case '*':{
      cout<<a*b<<endl;
      break;
    }
    case '/':{
      cout<<a/b<<endl;
      break;
    }
  }
}
