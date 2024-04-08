
#include<iostream>
using namespace std;
int main(){
    // char str[5]={'a','b','c','d','e'};
    char str[]={'a','b','c','d','e','f'};
   

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }

    cout<<endl;
    cout<<str<<endl;
 // char str[5]="abcd";
    // char str[]="abcde";
    // for(int i=0;i<5;i++){
    //     cout<<str[i];
    // }
    cout<<endl;
    cout<<(int)str[5];

    cout<<endl;
    cout<<"hello everyone"<<endl;
    cout<<(int)'\0';

    return 0;
}