
//Ques: Make a function which calculates ‘a’ raised to the power ‘b’ using loop

#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0) return 0;
    int pow=1;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    return pow;
}
int main(){
    cout<<power(2,5);
}