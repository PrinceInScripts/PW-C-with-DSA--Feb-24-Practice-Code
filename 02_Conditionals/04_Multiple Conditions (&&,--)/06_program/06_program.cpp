// Ques : Write a program to check whether a character is an alphabet or not.


#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    // if((int)ch >= 65 && (int)ch <= 90 || (int)ch >= 97 && (int)ch <= 122){
    //     cout<<"Given character is an alphabets";
    // } else {
    //     cout<<"Given character is not an alphabets";
    // } 
    
     if((int)ch >= 65 && (int)ch <= 90 ){
        cout<<"Given character is uppercase alphabets";
    }
     if((int)ch >= 97 && (int)ch <= 122){
        cout<<"Given character is lowercase alphabets";
    }
}