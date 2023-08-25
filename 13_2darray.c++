#include <iostream>
using namespace std;
int isum(int arr[][4],int row,int col){
    int sum=0;
    for(int col =0;col<3;col++){
        sum=sum+arr[row][col];
    }
        return sum;

}
int main(){
            int arr[3][4]={{1,2,3,2},{2,22,2,2},{3,3,2,3}};
     for(int row=0;row<4;row++){
        for(int col =0;col<3;col++){
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }
    return 0;
}