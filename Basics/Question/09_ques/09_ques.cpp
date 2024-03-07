//Ques : Take float input and print the fractional part of the real number.

#include<iostream>
using namespace std;

int main(){
   float num1;
   cout<<"Enter a float Number : ";
   cin>>num1;
   int num2=(int)num1;
   if(num2<0) num2=num2-1;
   float num3=(float)num2;
   float frac=num1-num2;
   cout<<"fractional part of the real number is : "<<frac;  
}