/*
*Lower bound 
Ques: Given a sorted integer array and an integer 
‘x’, find the lower bound of x.
*/
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(int nums[],int target){
    int idx=0;
    while(nums[idx]<target){
        idx++;
    }
    return idx-1;
}
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24};
    int target=20;

    cout<<lowerBound(nums,target);
}