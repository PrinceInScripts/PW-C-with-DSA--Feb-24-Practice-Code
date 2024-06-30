#include<iostream>
using namespace std;

int maxPower21(int n){
    int temp;
    while(n>0){
        n=((n)&(n-1));
        if(n==0) break;
        temp=n;
    }
    return temp;
}
int maxPower2(int n){
    int temp;
    while(n>0){
        temp=n;
        n=((n)&(n-1));
    }
    return temp;
}
int main(){
   cout<<maxPower21(24)<<endl;
   cout<<maxPower2(24)<<endl;
}