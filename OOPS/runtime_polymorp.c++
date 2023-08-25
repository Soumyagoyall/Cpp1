//OVER-RIDDING
#include<iostream>
using namespace std;
class A{
    public:
    void speak(){
        cout<<"speak"<<endl;
    }
};
class B:public A{
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
};
class C:public A{
    public:
    void speak(){
        cout<<"bark"<<endl;
    }
    void speak(int n){
        cout<<"bark repeat"<<endl;
    }
};

int main(){
    A o1;
    B o2;
    C o3;
    o1.speak();
    o2.speak();
    o3.speak();
    o3.speak(4);
}