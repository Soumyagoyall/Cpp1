#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this ->size=size;
        arr= new int[size];
        top=-1;
    }
        void push(int element){
            if(size-top>1){
                top++;
                arr[top]=element;  //if space out the element on top
                 }
                 else{
                    cout<<"stack overflow";
    }
        }
        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"stack o=underflow";
            }
        }
        int peek(){
            if(top>=0 && top<size){
                return arr[top];
            }
            else{
                cout<<"empty";
                return -1;
            }

        }
        bool isEmpty(){
            if (top==-1){
                return true;
            }
            else{
                return false;
            }
        }
    
};
int main(){
    Stack st(5);
    st.push(3);
    st.push(32);
    st.push(34);

    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<endl;
    cout<<"peek: "<<st.peek()<<endl;  //underflow
   

    if(st.isEmpty()){
        cout<<"empty"<<endl;

    }
    else{
        cout<<"not empty"<<endl;
    }
    return 0;

}