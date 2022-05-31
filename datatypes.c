#include<stdio.h>
int main(){
    short int  a;
    unsigned short int   b;
    long int c;
    signed long int d;
    unsigned long int e;
    long long int f;
    double g;
    long double h;
    
    printf("sizeof sort int=%d\n",sizeof(a));
    printf("sizeof unsigned sort int=%d\n",sizeof(b)); 
     printf("sizeof long int=%d\n",sizeof(c));
     printf("sizeof signed long int=%d\n",sizeof(d));
     printf("sizeof unsigned long int=%d\n",sizeof(e));
     printf("sizeof long long int=%d\n",sizeof(f));
     printf("sizeof double=%d\n",sizeof(g));
     printf("sizeof long double=%d\n",sizeof(h));
}
