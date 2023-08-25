#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    stack<int>s;
    s.push(2);
    s.push(23);
    s.push(27);
    cout<<"print top: "<<s.top()<<endl;
    s.pop();
    cout<<"print top: "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty";
        }
}