#include<iostream>
#include<string>
using namespace std;

int main(){
   string line;
   cout<<"Enter a string: ";
   getline(cin,line);
   
   cout<<"In reverse using reverse iterator: "<<endl;
   string::reverse_iterator reverse;
   for (reverse=line.rbegin();reverse<line.rend();reverse++)
   cout<<*reverse;
   cout<<"\nIn reverse doing manually: "<<endl;
   for(int i=line.length()-1;i>=0;i--)
   {
     cout<<line[i];
   }
   
   return 0;
}
