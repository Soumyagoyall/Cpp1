#include<iostream>
using namespace std;
class A{
    public:
    void hier1(){
        cout<<"hier1"<<endl;
    }
};
class B{
    public:
    void hier1(){
        cout<<"hier2"<<endl;
    }
};
class C:public A,public B{

};
int main(){
    C obj1;
    //obj1.hier1();    it gives error
    obj1.A::hier1();
    obj1.B::hier1();
    
}