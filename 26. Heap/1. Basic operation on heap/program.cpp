#include<iostream>
#include<queue>
using namespace std;
int main(){
    //maxHeap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    cout<<pq.top()<<endl;

    //minHeap
    priority_queue<int,vector<int>,greater<int>> minPq;
    minPq.push(10);
    minPq.push(20);
    minPq.push(30);
    minPq.push(40);
    minPq.push(50);
    cout<<minPq.top(); 

}