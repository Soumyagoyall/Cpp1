#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    cout<<"inside";
    int sum=0;
    for(int i=0;i<3;i++){
    sum=sum+arr[i];
    cout<<sum<<endl;
    }
    cout<<"end go to main"<<endl;
}

 int main(){
    int arr[4]={12,1,2,3};
    cout<<"begin"<<endl;
    printarr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
 }