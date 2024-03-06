// What is the result of the following code fragment?

#include<iostream>
using namespace std;
int main(){
    // bool p = false;
    // bool q = false;
    // bool r = true;
    int p=1;
    int q=2;
    int r=2;
    cout<<(p == q == r); // (p==q)==r = 0
    cout<<(p == (q == r));
}