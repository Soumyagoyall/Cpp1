#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
Node(int d){
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
    }
};
void insertion(Node * &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp->next;
    head=temp;

}
void display(Node* head){
    Node* pointer=head;
    while(pointer!=NULL){
        cout<<pointer->data;
        pointer=pointer->next;
    }
    cout<<endl;

}
int main(){
    Node* node1=new Node(10);
    cout<<"node1 data: "<<node1->data<<endl;
    cout<<"node1 address:"<<node1->next<<endl; 
    Node* head=node1;
    display(head);
    insertion(head,12);
    display(head);
    return 0;
}