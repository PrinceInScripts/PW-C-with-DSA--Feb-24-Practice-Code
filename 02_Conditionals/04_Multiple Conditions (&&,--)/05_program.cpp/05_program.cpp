// Ques : Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter a three positive integer number : ";
    cin>>num1>>num2>>num3;

   if(num1 > num2 && num1 > num3){
     cout<<"num1 : "<<num1;
   }
   if(num2 > num1 && num2 > num3){
     cout<<"num2 : "<<num2;
   }
   if(num3 > num2 && num3 > num1){
     cout<<"num3 : "<<num3;
   }
}