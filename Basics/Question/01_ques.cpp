// Example : Take two integers input, a and b : a>b, and find the
// remainder when a is divided by b.

// #include<iostream>
// using namespace std;

// int main(){
//     int a=14;
//     int b=3;
//     int dividend=a,divisor=b,quotient,remainder;
//     quotient=dividend/divisor;
//     remainder=dividend-(divisor*quotient);
//     cout<<remainder;
// }

// via sir
#include<iostream>
using namespace std;

int main(){
    int a=14; // a is a dividend
    int b=3;  // b is a divisor
    int q=a/b; // q is quotient
    int r; // r is a remainder

    //  a = b * q + r;
    // r = a - (b*q)
    r = a - (b*q);
    cout<<r;
    
    
}