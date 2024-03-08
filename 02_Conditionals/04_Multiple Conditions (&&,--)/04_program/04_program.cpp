// Ques : Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter a three positive integer number : ";
    cin>>num1>>num2>>num3;

    if(num1 > num2){
        cout<<"num1 : "<<num1;
    } else {
        if(num2 > num3){
            cout<<"num2 : "<<num2;
        }else {
            cout<<"num3 : "<<num3;
        }
    }
    
}