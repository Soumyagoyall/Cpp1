#include<iostream>
using namespace std;
int main(){
int a= 2,sum;
int b=4;
//bitwise
cout<<(a&b)<<endl;
cout<<(a|b)<<endl;
cout<<(~b)<<endl; ///not and then 2's compilment
cout<<(a^b)<<endl;
cout<<"SHIFT OPERATORS"<<endl;
cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl;
cout<<(19>>1)<<endl;
cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl;
cout<<"POST PRE INCREMENT OPERATORS"<<endl;
int x=b++;
cout<<"B:   "<<b<<endl; 
cout<<"X:   "<<x<<endl;

sum=a+(b++);
cout<<"SUM: "<<sum<<'\n';
cout<<"B:   "<<b<<'\n';
cout<<"B++: "<<b++<<'\n';
cout<<"B:   "<<b<<'\n';
cout<<"B++: "<<b++<<'\n';
cout<<"B  : "<<b<<'\n';
cout<<"X:   "<<x<<'\n';
}