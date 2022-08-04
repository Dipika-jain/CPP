//To check which is greater no among 3 no.s
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ENTER 3 NO.S \n";
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
            cout<<a<<" is greater";
        }
        else{
            cout<<c<<" IS GREATER";
        }
    }
    else if (a>c){
        if(a>b){
            cout<<a<<" is greater";
        }
        else{
            cout<<b<<" is greater";
        }
    }
}
