#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return (n*factorial(n-1));
}
int main()
{
    int a,c;
printf("ENTER THE NUMBER\n");
scanf("%d",&a);
c=factorial(a);
printf("THE FACTORIAL OF THE NUMBER IS  %d",c);
return 0;
}