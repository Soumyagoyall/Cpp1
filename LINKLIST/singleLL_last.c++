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
    Node* node2 = new Node(18);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl; 

    Node* head = node1;
    
    Node* tail = node1;
    display(head);
    display(tail);

    insertion(tail,12);
    display (head);
    display (tail);

    insertion(tail,19);
    display(head);
    return 0;
}