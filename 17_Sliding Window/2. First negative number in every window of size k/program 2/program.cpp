/*
First negative number in every window of size k
*/

#include<iostream>
#include<limits.h>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int k=4;
    

    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int> ans(n-k+1);
    int idx=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
           idx=i;
           break;
        }
    }
    if(idx==-1) ans[0]=1;
    else ans[0]=ans[idx];
    int i=1;
    int j=n-k+1;

    while(j<n){
        if(idx>=i) ans[i]=arr[idx];
        else {
           for(idx=i;idx<i+k;idx++){
            if(arr[idx]<0) {
                ans[i]=arr[idx];
                break;
            };
           }
        }
        i++;
        j++;
    }
    
    


    for(auto el:ans){
        cout<<el<<" ";
    }
}
