#include<iostream>
using namespace std;
int main(){
    int a= 2,sum;
    int b=4;
    cout<<"b:  "<<b<<endl;
    int x= ++b;
    cout<<"b:  "<<b<<endl;
    cout<<"x:  "<<x<<endl;
    sum=a+(++b);
    cout<<"SUM: "<<sum<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"++B: "<<++b<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"B++: "<<b++<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"x:   "<<x<<'\n';
    
    
    }