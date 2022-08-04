//Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main(){
  int s1,s2,s3;
  cout<<"enter 3 sides of triangle \n";
  cin>>s1>>s2>>s3;
  if(s1==s2 && s2==s3){
    cout<<"EQUILATERAL TRIANGLE \n";
  }
  else if (s1==s2 || s2==s3 ||s1==s3){
    cout<<"ISOCELES TRIANGLE \n";
  }
  else{
    cout<<"SCALENE TRAINGLE \n";
  }
}
