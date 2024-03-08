// Ques : Take positive integer input and tell if it is a three digit number or not.


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer number : ";
    cin>>num;

    if(num>=100 && num<=999){
        cout<<"3 Digit number";
    }else {
        cout<<"Not a 3 digit number";
    }
    
}