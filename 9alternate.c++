#include<iostream>
using namespace std;
void alternatearray(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }

}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
int main(){
    //int arr[6]={1,2,3,4,5};
    int arr[6]={1,2,3,4,5,7};
    alternatearray(arr,6);
    printarray(arr,6);

    }