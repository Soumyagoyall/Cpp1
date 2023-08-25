#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{

};
class Cat: public Dog{

};
int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    Cat c;
    c.speak();

    return 0;
}