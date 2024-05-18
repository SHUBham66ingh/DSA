#include<stdio.h>
int fibo(int n)
{
    if (n<=1)
    return 1;

    else
     return fibo(n-1)+fibo(n-1);
}
int main()
{
    int a,c;
 printf("ENTER THE NUMBER\n");
 scanf("%d",&a);
 c=fibo(a);
 printf("THE fibnacci serries is %d",c);
 return 0;
}