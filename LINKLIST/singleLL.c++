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

void insertion(Node * &head,int d){
    Node* temp=new Node(d);
    temp->next=head; //connect it to head
    //temp=head; wrong
    head=temp;

}


void display(Node* &head){
    //initially pointer is on header
    Node *pointer= head;
    while(pointer!=NULL){
        cout<<pointer->data<<" "; 
        pointer=pointer -> next;
    }
    cout<<endl;
}
int main(){
    //new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl<<endl; 

    //head pointer to node1
    Node* head = node1;
    display(head);

    insertion(head,12);
    display(head);

    insertion(head,15);
    display(head);
    
    return 0;
}