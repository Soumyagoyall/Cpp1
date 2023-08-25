#include<iostream>
#include<bits/stdc++.h>
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
void insertion(Node * &head,int data){
    Node* temp=new Node(data);
    temp->data=data;
    temp->next=head; //connect it to head
    //temp=head; wrong
    head=temp;

}
Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;  //new node bnayi humne
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward= curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return head = prev;
}
void display(Node* head){
    //initially pointer is on header
    Node *pointer= head;
    while(pointer!=NULL){
        cout<<pointer->data<<" "; 
        pointer=pointer -> next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    insertion(head,12);
    
    insertion(head,13);
    insertion(head,14);
    cout<<"original"<<endl;
    display(head);
    reverse(head);
    cout<<"reverse"<<endl;
    display(head);
    return 0;
}