// find the position of charter
#include<iostream>
using namespace std;

int main(){
   char ch;
   cout<<"Enter a Charcter : ";
   cin>>ch;
   int position=((int)ch - (int)'A')+1;
   cout<<"Position is : "<<position;  
}