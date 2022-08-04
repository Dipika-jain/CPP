#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ENTER 3 NO.S \n";
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
            cout<<"A is greater";
        }
        else{
            cout<<"C IS GREATER";
        }
    }
    else if (a>c){
        if(a>b){
            cout<<"A is greater";
        }
        else{
            cout<<"B is greater";
        }
    }
}
