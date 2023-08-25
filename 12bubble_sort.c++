#include<iostream>
using namespace std;
void buublesort(int arr[],int n){
    for(int i=0; i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=0;
            }
        }
        if(flag==1){
            break;
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<" "<<arr[i];
    }

}
int main(){
    int arr[5]={16,14,5,6,8};
    buublesort(arr,5);
    printarray(arr,5);
    return 0;

}
//ERROR