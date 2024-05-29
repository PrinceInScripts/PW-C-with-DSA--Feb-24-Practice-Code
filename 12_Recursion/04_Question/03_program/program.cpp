//Ques : Stair Path 

#include<iostream>
using namespace std;
int stair(int n){
    if(n==2) return 2;
    if(n==1) return 1;

    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cout<<"Enter Stair Steps : ";
    cin>>n;
    cout<<"No. of Ways for climb step : "<<stair(n);
}