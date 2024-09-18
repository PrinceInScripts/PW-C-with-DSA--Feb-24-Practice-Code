#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> map;
    pair<string,int> p1;
    p1.first="raghav";
    p1.second=76;
    map.insert(p1);
    
    map["harsh"]=15;
    map["sanket"]=20;
    cout<<map.size()<<endl;

    map.erase("harsh");

    for(pair<string,int> ele:map){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}