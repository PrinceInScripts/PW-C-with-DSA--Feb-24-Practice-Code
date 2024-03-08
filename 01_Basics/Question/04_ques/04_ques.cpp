// Example : Calculating Simple Interest

#include<iostream>
using namespace std;
int main(){
   float p,r,t,si;
   cout<<"Enter Principle : ";
   cin>>p;
   cout<<"Enter rate : ";
   cin>>r;
   cout<<"Enter time : ";
   cin>>t;
   si=(p*r*t)/100;
   cout<<"Simple interest is : "<<si;
//    float p,r,t,si;
//    p=1000,
//    r=10,
//    t=2;
//    si=(p*r*t)/100;
//    cout<<si;
}