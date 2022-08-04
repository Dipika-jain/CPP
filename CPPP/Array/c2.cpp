//passing array to function
#include <iostream>
using namespace std;
void printarray(int * arr , int n){
  cout<<"In Function "<<sizeof(arr)<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}

int main(){
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(int); //to compute the no. of elements
  cout<<"In main "<<sizeof(arr)<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  printarray(arr,n);
  return 0;
}
