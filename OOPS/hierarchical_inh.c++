#include<iostream>
using namespace std;
class Parent{
    public:
    int age;
    int weight;
    public:
    void hier1(){
        cout<<"hier1"<<endl;
    }

};
class Sibling:public Parent{
    public:
    void hier2(){
        cout<<"heir2"<<endl;
    }
};
class Child:public Parent{
    public:
    void hier3(){
        cout<<"heir3"<<endl;
    }
};
int main(){
    Parent obj1;
    obj1.hier1();
cout<<endl;
    Sibling obj2;
    obj2.hier1();
    obj2.hier2();
cout<<endl;
    Child obj3;        //C is in DIRECT realtion with Parent not with SIBLING , as it is sibling
    obj3.hier1();
    obj3.hier3();
}