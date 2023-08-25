#include<iostream>
using namespace std;
class Hero{
    private:
    int a =5; //4
    char b; //4
    float f; //4
    bool c;
    
    public:
    int geta(){     //print
        return a;
    }
    void seta(int health){
        a=health;
    }
};
int main(){
    Hero h1;
    //cout<<"size: "<<sizeof(h1)<<endl;
    //cout<<h1.a;
    h1.seta(70);
    cout<<"update level: "<<h1.geta()<<endl;  //print
    
}