#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=((start+end)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]) {
            start=mid+1;
        }
        else{
            end=mid - 1;
        }
        mid=(start+end)/2;
        }
    
    return -1;
}
int main(){
    int arr[6]={1,5,7,15,16,20};
    int index=binarysearch(arr,6,2);

    cout<<index<<endl;
}