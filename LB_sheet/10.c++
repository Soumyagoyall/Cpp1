#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[],int n){
    
    int left=0;
    int right=n-1;
    while(left < right){
        if(arr[left]<0)
        {
           left++;
        }
        else if(arr[right]>0){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
        }
        
    }
}
int main(){
    int arr[]={1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2,  1};
    rearrange(arr,14);
    printarray(arr,14);
    return 0;
}