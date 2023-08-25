#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertion(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void reverse_(Node* &head,Node* curr,Node* prev){
    if(curr==NULL){
        head=prev;
        return;
    }
    Node* forward = curr->next;
    reverse_(head,forward,curr);
    curr->next=prev;
}
Node* reverse(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    reverse_(head,curr,prev);
    return head;
}

void display(Node* head){
    Node* pointer=head;
    while(pointer!=NULL){
        cout<<pointer->data<<" "; 
        pointer=pointer -> next;
    }
}
int main(){
    Node* node1=new Node(11);
    Node* head=node1;
    insertion(head,12);
    insertion(head,13);
    insertion(head,15);
    cout<<"original"<<endl;
    display(head);
    cout<<endl;
    reverse(head);
    cout<<"reverse"<<endl;
    display(head);
    return 0;
}