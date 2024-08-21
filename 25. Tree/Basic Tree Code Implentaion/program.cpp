
#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
      int val;
      Node* left;
      Node* right;
      Node(int val){
       this->val=val;
       this->left=NULL;
       this->right=NULL;
      }
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node* root){
    if(root==NULL) return 0;
    return (root->val+(sum(root->left)+sum(root->right)));
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int mxInTree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(mxInTree(root->left),mxInTree(root->right)));
}
int levelsOfTree(Node* root){
    if(root==NULL) return 0;
    return 1+max(levelsOfTree(root->left),levelsOfTree(root->right));
}
int main(){
     Node* a=new Node(1);
     Node* b=new Node(2);
     Node* c=new Node(3);
     Node* d=new Node(4);
     Node* e=new Node(5);
     Node* f=new Node(6);
     Node* g=new Node(7);
     a->left=b;
     a->right=c;
     b->left=d;
     b->right=e;
     c->left=f;
     c->right=g;

     display(a);
     cout<<endl;
    cout<<sum(a);
     cout<<endl;
    cout<<size(a);
     cout<<endl;
    cout<<mxInTree(a);
     cout<<endl;
    cout<<levelsOfTree(a);
}