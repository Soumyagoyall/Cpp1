#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=0;
    int mid=(start+(end+start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
            }
        else if(key>arr[mid]) {
            start=mid+1;
        }
        else{
            end=mid - 1;
        }
        mid=(start+end)/2;
    }
    return ans;
} 
int last_occ(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=0;
    int mid=(start+(end+start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans= mid;
            start=mid+1;
            }
        else if(key>arr[mid]) {
            start=mid+1;
        }
        else{
            end=mid - 1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
} 

int main(){
    int arr[7]={1,5,7,15,20,20,25};
    int index=binarysearch(arr,7,20);
    int index1=last_occ(arr,7,20);

    cout<<index<<index1<<endl;
}