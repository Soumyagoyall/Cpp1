//FACTORIAL
/*
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
      return 1;

    return n*factorial(n-1);

 }
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}*/
//MULTIPLE POWER
/*
#include<iostream>
using namespace std;
int multiple(int n,int m){
    if(m==0)
    return 1;
    double result = multiple(n,m-1);
    return n*result;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int ans=multiple(n,m);
    cout<<ans<<endl;
    return 0;

}
*/

/*
#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
    return ;
    }
    
    cout<<n<<" ";
    print(n-1);
}
int main(){
    int n;
    cin>>n;
    print(n);
}*/

#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
     return ((n-1)+(n-2));
}
int main(){
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<" ";
}