#include<iostream>
using namespace std;
int count_set_bit(int n){
    return __builtin_popcount(n);
}
int main(){
   cout<<count_set_bit(7)<<endl;
}