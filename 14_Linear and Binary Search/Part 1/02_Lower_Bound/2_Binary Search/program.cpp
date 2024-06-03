/*
*Lower bound 
Ques: Given a sorted integer array and an integer 
‘x’, find the lower bound of x.
*/
#include<iostream>
#include<vector>
using namespace std;
int lowerBound(int nums[],int target,int n){
    

    int lo=0;
    int hi=n-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]<target && nums[mid+1]>target) return mid;
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }
}
int main(){
    int nums[]={1,2,4,5,9,15,18,21,24};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=22;

    cout<<lowerBound(nums,target,n);
}