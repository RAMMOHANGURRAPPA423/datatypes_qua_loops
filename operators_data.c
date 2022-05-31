Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
-> 0


2) int i =0;
   printf("%d %d",i,i++);
-> 0 0


3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
-> 8 8 8

4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
-> error


5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
-> 1==1 is true


6) int i=5;
   i=i++ - --i + ++i;
-> 6


7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
-> 4

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
->  1 10 5

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
-> 8 9

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
-> 13

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
-> 0

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
-> 4

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
->error

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
-> ffffffff
   fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
-> 14

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
-> 1

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
-> 12

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
-> error or 0

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
-> error


20) int i=5;
    i=i++ - i
    printf("%d",i)
-> error or -1
