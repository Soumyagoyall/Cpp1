#include<iostream>
using namespace std;
int main(){
    int a= 2,sum;
    int b=4;
    cout<<"b:  "<<b<<endl;
    int x= ++b;
    cout<<"b:   "<<b<<endl;
    cout<<"x:   "<<x<<endl;
    cout<<"B--: "<<b--<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"--B: "<<--b<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"B++: "<<b++<<'\n';
    cout<<"B:   "<<b<<'\n';
    cout<<"x:   "<<x<<'\n';
    sum=a+(--b) ;
    cout<<"sum: "<<sum<<endl;
    cout<<"b:   "<<b<<endl;
    int sum1=a+ (b--);
    cout<<"sum1 "<<sum1<<endl;
    cout<<"b:   "<<b<<endl;
    
    
    }