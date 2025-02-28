#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char op){
   string ans="";
   ans+=val1;
   ans.push_back(op);
   ans+=val2;
   return ans;
}
int main(){
  string s="79+4*8/3-";
  stack<string> st;
  for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57){
        st.push(to_string(s[i]-48));
    } else {
        string val2=st.top();
        st.pop();
        string val1=st.top();
        st.pop();
        string ans=solve(val1,val2,s[i]);
        st.push(ans);
    }
  }
  cout<<st.top();
}