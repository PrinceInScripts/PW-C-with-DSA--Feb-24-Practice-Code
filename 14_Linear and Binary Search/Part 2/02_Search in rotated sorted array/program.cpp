
/*
Search in rotated sorted array
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={6,8,20,28,33,1,2,3,5};
    int target =5;

    int lo=0;
    int hi=nums.size()-1;

    int pivot=-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(mid==0) lo=mid+1;
        else if(mid=nums.size()-1) hi=mid-1;
       else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
            pivot=mid;
            break;
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            pivot=mid+1;
            break;
        } else if(nums[mid]>nums[hi]) lo=mid+1;
        else hi=mid-1;


    }

    if(target>= nums[0] && target<=nums[pivot-1]){
        lo=0;
        hi=pivot-1;
         while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target){
            cout<<mid;
            break;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
        
    } 
    } else {
        lo=pivot;
        hi=nums.size()-1;
         while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target){
            cout<<mid;
            break;
        }
        else if(nums[mid]<target) lo=mid+1;
        else if(nums[mid]>target) hi=mid-1;
    }

    // cout<<pivot;
}
}