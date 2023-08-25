//DEFAULT CONSTRUCTOR
/* #include<iostream>
using namespace std;
class Hero{
    public:
    Hero(){
        cout<<"constructor called "<<endl;
    }
};
int main(){
    cout<<"hi"<<endl;
    Hero obj1;
    cout<<"bye"<<endl;
} */

//PARAMETERISED CONSTRUCTIR
#include<iostream>
using namespace std;
class Hero{
    private:
    int health;   //datamember and input parameter have same name

    public:
    Hero(int health){
        health=health;   //scope closer to this health will be considered
        cout<<"constructor called "<<endl;
    }
};
int main(){
    cout<<"hi"<<endl;
    Hero obj1;
    cout<<"bye"<<endl;
}