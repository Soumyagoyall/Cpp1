#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&inputstack,int count,int size){
    if(count==size/2){
        inputstack.pop();
        return;
    }
    input num=inputstack.top();
    inputstack.pop();
    solve(inputstack,count+1,size);
    inputstack.push(num);
}
int main (){
    int count=0;
    solve(inputstack,count,N);
    return 0;
}