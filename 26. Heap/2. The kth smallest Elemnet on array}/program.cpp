

/*
# Kth Smallest Element in an Array
*/

/*


*/


#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;

class Solution {
public:  
    
    int findKthLargest1(vector<int>& nums, int k) {
         priority_queue<int> pq;
         int i=0;
         for(i;i<k;i++){
            pq.push(nums[i]);
         }

         while(i<nums.size()){
              if(pq.top()>nums[i]){
                pq.pop();
                pq.push(nums[i]);
              }
              i++;
         }

         return pq.top();
    }   
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int> pq;
        
         for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
         }
         return pq.top();
    }   
};


int main(){
    
    vector<int> original={10,20,-4,6,18,2,105,118};
    Solution solution; 
    int ans= solution.findKthLargest(original,3);
    
   cout<<ans;

}
