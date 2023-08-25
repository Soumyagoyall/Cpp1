#include<iostream>
using namespace std;
void printarr(int arr[],int size){
    cout<<"inside";
    arr[0]={120};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"end go to main";
}

 int main(){
    int arr[4]={12,2,2,2};
    cout<<"begin"<<endl;
    printarr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
 }