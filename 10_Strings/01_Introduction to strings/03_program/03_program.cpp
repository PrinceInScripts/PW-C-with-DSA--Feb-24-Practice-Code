#include<iostream>
using namespace std;
int main(){
//    string s="knight";
   int n;
   cout<<"Enter size f=of string : ";
   cin>>n;

   char s[n];
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   int count=0;
   int i=0;
   while(s[i]!='\0'){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        count++;
    }
    i++;
   }
   cout<<count;
}