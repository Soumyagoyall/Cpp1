#include<iostream>
using namespace std;
class Animal{
    public:
    void bark(){
        cout<<"bark";
    }
    public:
    int age;
    int weight;
};
class Dog{
    public:
    void speak(){
        cout<<"speak";
    }
};
class Cat:public Animal,public Dog{


};

int main(){
    Cat c;
    c.bark();
    c.speak();
}