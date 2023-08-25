#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data){
    this->data=data;
    this->next=NULL;
    }
};
void insertion(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp; 
    //temp=head; wrong
    tail=tail->next;

}
void insertion_m(Node* &head,int d,int pos){
    Node* temp=head;
    int cnt=1;
    temp=temp->next;
    cnt++;
    Node* nodei=new Node(d);
    nodei ->next=temp->next;
    temp->next=nodei;

}
void display(Node* &head){
    Node *pointer= head;
    while(pointer!=NULL){
        cout<<pointer->data<<" "; 
        pointer=pointer -> next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl; 

    Node* head = node1;
    Node* tail = node1;
    display(head);

    insertion(tail,12);
    display(head);

    insertion(tail,19);
    display(head);

    insertion_m(head,14,3);
    display(head);

    insertion_m(head,13,3);
    display(head);
    return 0;
}