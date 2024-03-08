/*
if a > b => a % b -> remainder
if a = b => a % b

if a < b => a % b => ??

2 % 4 = 2
*/

#include<iostream>
using namespace std;

int main(){
    cout<<10%3<<endl;
    cout<<100%4<<endl;
    cout<<4%4<<endl;
    cout<<2%4<<endl;
    cout<<2%40<<endl;

    cout << 10%-3<<endl;
    cout << -10%3<<endl;
    cout << (-10)%3<<endl;
    cout << -10%-3;
    
    
}
// #include<iostream>
// using namespace std;

// int main(){
//     int a=16; // a is a dividend
//     int b=3;  // b is a divisor
//     // int q=a/b; // q is quotient
//     // int r; // r is a remainder

//     // //  a = b * q + r;
//     // // r = a - (b*q)
//     // r = a - (b*q);
//     int r;
//     r=a%b;
//     cout<<r;
    
    
// }