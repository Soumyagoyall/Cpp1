#include<iostream>
using namespace std;
int unionCheck(int arr1[],int arr2[]){
    int arr1[]={1,1,1,2,2,3,3,3};
    int arr2[]={3,3,3,4};
    int left=0;int right=0;
    list<int> myList;
    while (left<arr1.length || right<arr2.length)
    {
        if(left>0 && left<arr1.length && arr1[left]==arr[left-1]){
            left++;
        }
        else if(right>0 && right<arr2.length && arr2[right]==arr[right-1]){
            right++;
        }
        else if

    }
    
}