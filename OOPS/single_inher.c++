#include<iostream>
using namespace std;
class Human{
    public:
     int age;
     string name;

    public:
    int getAge(){
        return this->age;
    }
    void setName(int naam){
        this->name=naam;
    }
    void sleep11(){
    cout<<"male sleeping";
    }
};
class Male: public Human{
    public: //without this it wont work in another class
    void sleep(){
    cout<<"female sleeping";
    }
};

int main(){
    Male m1;
    m1.sleep11();
    cout<<m1.age<<endl;
    cout<<m1.name<<endl;
   // cout<<m1.naam<<endl;
   m1.sleep();
   return 0;
}