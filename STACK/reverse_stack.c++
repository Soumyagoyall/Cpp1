#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="babbar";
    stack<char>s;  //char stack ke dour pr pda hai..char is stack
    for(int i=0;i<str.length();i++){  //looop
        char ch=str[i]; //stack me string daaldi
        s.push(ch);    //charecter pushed in stack
    }

    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
    return 0;
}