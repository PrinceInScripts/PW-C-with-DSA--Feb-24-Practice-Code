

#include<iostream>
using namespace std;
int maze_ways(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right_ways=maze_ways(sr,sc+1,er,ec);
    int down_ways=maze_ways(sr+1,sc,er,ec);
    return right_ways+down_ways;
}
int main(){
    cout<<maze_ways(0,0,2,2);
}