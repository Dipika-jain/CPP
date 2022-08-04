/*WAP TO PRINT PATTERN
1
23
456
78910  */
#include<iostream>
using namespace std;
int main(){
  int n;
  int count=1;
  cout<<"enter n ";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<count<<" ";
      count++;
    }
    cout<<"\n";
  }
}
