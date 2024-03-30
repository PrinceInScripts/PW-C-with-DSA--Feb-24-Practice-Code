/*
Ques : Write a program to copy the contents of one array into another in the reverse order.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(1);
    v1.push_back(6);
    
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> v2;

    for(int i=v1.size()-1;i>=0;i--){
        v2.push_back(v1[i]);
    }

     for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
