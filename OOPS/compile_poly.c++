//OPERATOR-OVERLOADING
#include<iostream>
using namespace std;
class B{
    public:
    int a ;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.b;
        cout<<"output"<<value2-value1<<endl;
    }
    void operator() (){
        cout<<"hello babbar"<<this->a<<endl;
        cout<<"hello babbar"<<this->b<<endl;
    }
};
int main(){
    B obj1 ,obj2;
    obj1.a=7;
    obj2.b=4;
    obj1+obj2;

   obj1();
   cout<<endl;
   obj2();
}