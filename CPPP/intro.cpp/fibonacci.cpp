//wap to writ fibonacci series till nth term
#include<iostream>
using namespace std;
int main(){
  int t1=0,t2=1,next=1;
  int n;
  cout<<"ENTER NO. OF TERMS IN FIBONACCI SERIES: ";
  cin>>n;
  cout<<"FIBONACCI SERIES IS: \n";
  for(int i=1;i<=n;i++){
    if(i==1){
      cout<<t1<<" ";
    }
    else if(i==2){
      cout<<t2<<" ";

    }
    next=t1+t2;
    t1=t2;
    t2=next;
    cout<<next<<" ";

  }

}
