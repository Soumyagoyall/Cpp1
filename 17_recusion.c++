/*#include<iostream>
using namespace std;
bool binary(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
       bool result = binary(arr+1,size-1);
    return result;
    }

}
int main(){
    int arr[5]={2,4,6,3,8};
    int size=5;
    bool ans=binary(arr,size);
    if(ans){
        cout<<"sorted";
    }
    else{
        cout<<"not";
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int sums(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int x = sums(arr+1,size - 1);
        int y=arr[0]+ x;
        return y;
        
       // OR
        //return arr[size - 1] + arraySum(arr, size - 1);
        
    }
}
int main(){
    int arr[3]={4,2,3};
    int size=3;
    int ans=sums(arr,size);
    cout<<ans<<endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    if(size<=0){
        return false;
    }
    if(key==arr[0]){ 
        return true;
    }
    else{
    bool result = search(arr+1,size-1,key);
    return result;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=66;
    //int size = sizeof(arr) / sizeof(arr[0]);
    int ans=search(arr,size,key);
       if(ans){
        cout<<"found";
    }
    else{
        cout<<"not fpund";
    }

}
*/

/*
#include<iostream>
using namespace std;
bool search(int arr[],int s,int e,int key){

    if(key==arr[0])
    return true;

    int mid = s+(e-s)/2;
    if(key==arr[mid]){
        return true;
    }
    if(key>arr[mid]){
        return search(arr,mid+1,e,key);
    }
    else{
        return search(arr,s,mid-1,key);
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    int key = 5;
    int size=5;  
    int s=0;
    int e=size-1;
    int ans=search(arr,s,e,key);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
void reverse(string& str,int i,int j){
    if(i>j)
        return ;
        swap(str[i],str[j]);
        i++;
        j--;
        reverse(str,i,j);
    }


int main(){
    string name ="abcde";
    int i=0;
    int j=name.length()-1;
    reverse(name,0,name.length()-1);
    cout<<name<<" ";
    return 0;
}