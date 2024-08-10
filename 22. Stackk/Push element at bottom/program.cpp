
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
void pushAtBottom(stack<int>& st,int val){
          stack<int> temp;
          while(st.size()>0){
            temp.push(st.top());
            st.pop();
          }
          st.push(val);
          while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
          }

}
void pushAtAnyIdx(stack<int>& st,int idx,int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    print(st);
    cout<<endl;
    pushAtBottom(st,70);

    print(st);
    cout<<endl;
    pushAtAnyIdx(st,2,90);
    print(st);
    cout<<endl;
    
}