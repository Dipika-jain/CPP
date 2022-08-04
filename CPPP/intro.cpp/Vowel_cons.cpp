// WAP to check if an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
  char c;
  cout<<"Enter a character in lowercase \n";
  cin>>c;
  if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    cout<<"VOWEL \n";
  }
  else{
    cout<<"consonant \n";
  }

}
