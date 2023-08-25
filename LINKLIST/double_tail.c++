#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertion(Node* &tail,int d){
    Node* temp= new Node(d);  //new node
    tail->next=temp;
    temp->prev=tail->next;
    tail=temp;

}
 
void display(Node* head){
    Node* pointer=head;
    while(pointer!=NULL){
    cout<< pointer->data;
    pointer=pointer->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* head =node1;
    Node* tail =node1;
    display(head);
    insertion(tail,12);
    display(head);
 
}