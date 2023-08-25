#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
    public:
    int *arr;
    int top1;
    int top2;
    int size   ;

    TwoStack(int size){
        this ->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
void push1(int element){
    if(top2-top1>1){
        top1++;
        arr[top1]=element; 
    }
    else{
        cout<<"stack overflow";
    }
}
void push2(int element){
    if(top2-top1>1){
        top2--;
        arr[top2]=element; 
    }
    else{
        cout<<"stack overflow";
    }
}
int pop1(){
    if(top1>=0){
        int ans=arr[top1];
        top1--;
        return ans;
    }
    else{
        return -1;
    }
}
int pop2(){
    if(top2<size){
        int ans=arr[top2];
        top2++;
        return ans;
    }
    else{
        return -1;
    }
}
};
int main(){
    TwoStack st(5);
    st.push1(3);
    st.push2(32);
    st.push1(34);
    st.pop1();
    cout<<"print top: "<<st.top1<<endl;
    cout<<"print top: "<<st.top2<<endl;
    return 0;


}