#include<iostream>
using namespace std;
class A{
    public:
    void hier1(){
        cout<<"hier1"<<endl;
    }
};
class B:public A{
    public:
    void hier2(){
        cout<<"hier2"<<endl;
    }
};
class D{
    public:
    void hier3(){
        cout<<"hier3"<<endl;
    }
};
class C:public A,public D{
    public:
    void hier4(){
        cout<<"hier4"<<endl;
    }
};

int main(){
    A obj1;
    obj1.hier1();

    B obj2;
    obj2.hier1();
    obj2.hier2();

    D obj3;
    obj3.hier3();

    C obj4;
    obj4.hier1();
    obj4.hier3();
    obj4.hier4();

    
}