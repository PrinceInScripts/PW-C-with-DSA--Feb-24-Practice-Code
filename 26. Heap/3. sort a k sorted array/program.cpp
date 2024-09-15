

/*
# sort a k sorted array
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
    
    vector<int> findKthLargest(vector<int>& nums,int k){
       priority_queue<int,vector<int>,greater<int>> pq;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
          pq.push(nums[i]);
          if(pq.size()>k){
               ans.push_back(pq.top());
               pq.pop();
          }
       }
       while(pq.size()>0){
         ans.push_back(pq.top());
               pq.pop();
       }
       return ans;
    }   
};


int main(){
    
    vector<int> original={6,5,3,2,8,10,9};
    Solution solution; 
    vector<int> ans= solution.findKthLargest(original,3);
    
  for(auto el:ans){
    cout<<el<<" ";
  }

}
