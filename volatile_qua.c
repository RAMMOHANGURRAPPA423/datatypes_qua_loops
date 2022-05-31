#include<stdio.h>
int main(){
    int a=10;
    volatile int b=10;
    printf("%d %d %d\n",++a,++a,++a);
    printf("%d %d %d",++b,++b,++b);
}
