
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display1(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayReverse(Node* head){
    if(head==NULL) return;
    displayReverse(head->next);
    cout<<head->val<<" ";
}
int size(Node* a){
    Node* temp=a;
    int n=0;
     while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}

void insertAtEnd(Node* head,int val){
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
int main(){
    //10 20 30 40
   
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   Node* e=new Node(50);

   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   display(a);
   cout<<size(a)<<endl;
   displayRec(a);
   cout<<endl;
   displayReverse(a);
   insertAtEnd(a,60);
   cout<<endl;
   display(a);
    
}
