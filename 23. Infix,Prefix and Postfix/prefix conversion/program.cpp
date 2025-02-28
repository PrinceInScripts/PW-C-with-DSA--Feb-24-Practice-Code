#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char op){
    if(op=='+') return val1+val2;
     else if(op=='-') return val1-val2;
     else if(op=='*') return val1*val2;
     else return val1/val2;

     
}
int main(){
  string s="-/*+79483";
  stack<int> st;
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]>=48 && s[i]<=57){
        st.push(s[i]-48);
    } else {
        int val1=st.top();
        st.pop();
        int val2=st.top();
        st.pop();
        int ans=solve(val1,val2,s[i]);
        st.push(ans);
    }
  }
  cout<<st.top();
}