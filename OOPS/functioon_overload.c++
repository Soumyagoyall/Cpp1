#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"say";
    }
    void sayhello(int n){
        cout<<"say1"<<endl;
    }
   /* int sayhello(int n){
        cout<<"say1"<<endl;
    } 
    */
};
class B{
    public:
    void sayhello(){
        cout<<"sayhello";
    }
};
int main(){
    A obj;
    obj.sayhello();
cout<<endl;
    B obj1;
    obj1.sayhello();
}