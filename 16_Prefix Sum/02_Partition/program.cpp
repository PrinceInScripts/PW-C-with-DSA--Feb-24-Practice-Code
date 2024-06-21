/*
 Check if array can be partitioned into 2 continuous 
arrays of equal sum.
*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<n;i++){
      if(2*arr[i]==arr[n-1]){
        flag=true;
        break;
      }
    }
    flag?cout<<"True":cout<<"False";
}