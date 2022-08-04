//WAP A MENU DRIVEN PROGRAM TO FIND THE AREA , PERIMETER OF SHAPES
#include<iostream>
#include<math.h>
using namespace std;
void circle(int r){
  cout<<"Circumference: "<<2*3.14*r<<endl;
  cout<<"Area:"<<3.14*r*r<<endl;
}
void square(int a){
  cout<<"PERIMETER "<<4*a<<endl;
  cout<<"Area:"<<a*a<<endl;
}
void rect(int a,int b){
  cout<<"PERIMETER "<<2*(a+b)<<endl;
  cout<<"Area:"<<a*b<<endl;
}
void triangle(int a,int b,int c){
  float s=(a+b+c)/3;
  float area=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<"PERIMETER "<<(a+b+c)<<endl;
  cout<<"Area:"<<area<<endl;
}

int main(){
  int a,b,c;
  char fig;
  cout<<"WE'LL CALCULATE AREA AND CIRCUMFERENCE OF DIFFERENT SHAPES \n";
  cout<<"ENTER C-circle \n"<<"ENTER R-rectangle \n"<<"ENTER S-square \n"<<"ENTER T-triangle \n";
  cin>>fig;
  if (fig=='c'||fig=='C'){
    cout<<"ENTER RADIUS: ";
    cin>>a;
    circle(a);
  }
  else if (fig=='R'||fig=='r'){
    cout<<"ENTER Length & breadth: ";
    cin>>a>>b;
    rect(a,b);
  }
  if (fig=='S'||fig=='s'){
    cout<<"ENTER side: ";
    cin>>a;
    square(a);
  }
  if (fig=='T'||fig=='t'){
    cout<<"ENTER 3 sides: ";
    cin>>a>>b>>c;
    triangle(a,b,c);
  }
}
