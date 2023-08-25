// Online C compiler to run C program online
#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample(){
    int x= -1;
    if(fork()==0) 
    printf("ok %d",++x);
    else
    printf("sd %d",--x);
}
int main(){
    forkexample();
    return 0;
}