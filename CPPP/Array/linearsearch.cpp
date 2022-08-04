//WAP TO DO A LINEAR SEARCH
//WAP TO DO A LINEAR SEARCH
#include<iostream>
using namespace std;
int linear(int* arr,int n, int key){
  for(int i=0;i<n;i++){
    if (arr[i]==key){
        return i;
    }
  }
  return -1;
}

int main(){
  int arr[10];
  int n;
  cout<<"Enter elements "<<endl;
  cin>>n;
  cout<<"Enter array: ";
  for(int k=0;k<n;k++){
    cin>>arr[k];

  }
  for(int j=0;j<n;j++){
    cout<<arr[j]<<","<<endl;
  }
  int key;
  cout<<"Enter element to be searched: ";
  cin>>key;
  int index= linear(arr,n,key);
  if (index!=-1){
    cout<<key<<" Is present at index"<<index;
  }
  else{
    cout<<key<<" Is not present";
  }
}
