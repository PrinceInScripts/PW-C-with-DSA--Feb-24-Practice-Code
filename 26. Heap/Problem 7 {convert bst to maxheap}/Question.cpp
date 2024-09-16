#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
        TreeNode* t=q.front();
        q.pop();
        cout<<t->val<<" ";
        if(t->left!=NULL) q.push(t->left);
        if(t->right!=NULL) q.push(t->right);
    }
}

void helper(TreeNode* root,vector<int>& arr){
    if(root==NULL) return;
    helper(root->right,arr);
    arr.push_back(root->val);
    helper(root->left,arr);
}


void convertBSTMaxHeap(TreeNode* root,vector<int>& arr,int& i){
       if(root==NULL) return;
       root->val=arr[i++];
       convertBSTMaxHeap(root->left,arr,i);
       convertBSTMaxHeap(root->right,arr,i);
}
int main(){
    TreeNode* a=new TreeNode(10);
    TreeNode* b=new TreeNode(5);
    TreeNode* c=new TreeNode(16);
    TreeNode* d=new TreeNode(1);
    TreeNode* f=new TreeNode(8);
    TreeNode* g=new TreeNode(12);
    TreeNode* h=new TreeNode(20);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=f;
    c->left=g;
    c->right=h;
    display(a);
    vector<int> arr;
    helper(a,arr);
    cout<<endl;
    for(auto el:arr){
        cout<<el<<" ";
    }
    cout<<endl;
    int i=0;
    convertBSTMaxHeap(a,arr,i);
    display(a);
}
