//to check whether a person can vote or not
#include<iostream>
using namespace std;

int main(){
  int age;
  cout<<"enter age of person \n";
  cin>>age;
  if (age>=18){
    cout<<"YOU CAN VOTE";
  }
  else{
    cout<<"YOU CAN'T VOTE";
  }
  return 0;

}
