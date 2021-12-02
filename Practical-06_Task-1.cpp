#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i1,i2;
  float f1,f2;
  string s1,s2;
  
  cout<<"Enter integer 1: ";
  cin>>i1;
  cout<<"Enter integer 2: ";
  cin>>i2;
  cout<<"Enter float 1: ";
  cin>>f1;
  cout<<"Enter float 2: ";
  cin>>f2;
  
  cout<<"Enter string 1: ";
  cin>>s1;
  cout<<"Enter string 2: ";
  cin>>s2;
  
  cout<<"Integer+Integer:"<<i1+i2<<endl;
  cout<<"Float+Float:"<<f1+f2<<endl;
  cout<<"Float1+Integer1:"<<f1+i1<<endl;
  cout<<"String+String:"<<s1+s2<<endl;
  //cout<<"String1+Integer1:"<<s1+i1;        //error-mismatched types
  
  return 0;
}
