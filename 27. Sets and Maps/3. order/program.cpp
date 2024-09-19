#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(auto el:s){
        cout<<el<<" ";
    }
    cout<<endl;
    map<int,int> map;
    map[2]=20;
    map[1]=30;
    map[3]=10;
    for(auto el:map){
        cout<<el.first<<"->"<<el.second<<endl;
    }
} 