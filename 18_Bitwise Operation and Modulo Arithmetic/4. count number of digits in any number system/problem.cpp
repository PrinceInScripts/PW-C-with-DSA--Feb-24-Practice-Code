#include<iostream>
#include<cmath>

using namespace std;
int countDigits(int n){
    return floor(log2(n)+1);
}
int main(){
    long long n=6;
    cout<<"Number of digits : "<<countDigits(n);
}