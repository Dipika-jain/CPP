//wap to input the marks of students
#include <iostream>
using namespace std;
int main(){
  int marks[10];
  int n;
  cout<<"Enter no. of students ";
  cin>>n;

  for(int i=0;i<n;i++){
    cin>>marks[i];
    marks[i]=marks[i]*2;
  }
  for(int i=0;i<+n;i++){
    cout<<marks[i]<<",";
  }
  cout<<endl;
}
