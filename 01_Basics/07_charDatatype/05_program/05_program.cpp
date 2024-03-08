 //char to int

#include<iostream>
using namespace std;

int main(){
    //int , float , bool , char --> typecasting
   char ch='a';
   int int1=(int)ch;
   cout<<int1<<endl;
   cout<<ch+100<<endl;//technically not good
   cout<<(int)ch+100<<endl;//technically good
  
}