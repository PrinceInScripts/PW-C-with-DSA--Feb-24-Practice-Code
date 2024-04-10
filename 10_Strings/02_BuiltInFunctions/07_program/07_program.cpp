//substr()

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str="abcdef";
    //substr(idx)
    cout<<str<<endl;
    cout<<str.substr(2)<<endl;//def
    //substr(idx,len)
    cout<<str.substr(1,3)<<endl;//bcd
    // cout<<str.substr(2)<<endl;//def
    
}
