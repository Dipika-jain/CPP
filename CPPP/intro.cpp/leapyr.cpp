//WAP TO CHECK WHETHER THE YEAR IS LEAP YEAR OR NOT
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a year: ";
  cin>>n;
  if(n%400==0 && n%4==0 && n%100==0){
    cout<<"IT IS LEAP YEAR \n";
  }
  else if(n%400!=0 && n%4!=0 && n%100!=0){
    cout<<"IT IS NOT LEAP YEAR \n";
  }
  else if(n%400!=0 && n%4==0 && n%100!=0){
    cout<<"IT IS LEAP YEAR \n";}
}
