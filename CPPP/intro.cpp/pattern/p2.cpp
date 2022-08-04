/*WAP TO PRINT PATTERN
****
*  *
*  *
**** */
#include<iostream>
using namespace std;
int main(){
  int row,col;
  std::cout << "Enter row and column" << '\n';
  cin>>row>>col;
  for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
      if(i==1 || j==col ){
        cout<<"*";
      }
      else if(i==row || j==1){
        cout<<"*";
      }
      else{
        cout<<" ";
      }

    }
    cout<<endl;
  }
}
