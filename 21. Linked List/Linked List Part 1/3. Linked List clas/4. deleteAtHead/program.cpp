
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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    
    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtTail(int val){
        Node* temp=new Node(val);
        
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp=new Node(val);

        if(size==0) head=tail=temp;
        else {
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
            
        }
    }

    void deleteAtHead(){
        if(size==0) cout<<"List is Empty";
        else if(size==1){
            head=tail=NULL;
            size--;
        } else {
            head=head->next;
            size--;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main(){
        LinkedList ll;
        ll.insertAtTail(10);
        ll.insertAtTail(20);
        ll.insertAtTail(30);
        ll.insertAtTail(40);
        ll.display();
        cout<<ll.size<<endl;
        ll.insertAtHead(50);
        ll.display();

        ll.insertAtIdx(2,70);
        ll.display();
        ll.insertAtIdx(4,80);
        ll.display();
        ll.deleteAtHead();
        ll.display();
        ll.deleteAtHead();
        ll.display();
}