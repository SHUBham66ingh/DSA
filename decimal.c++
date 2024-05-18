#include<iostream>
using namespace std;
int main()
{
    int n=1101;
    int mul=1;
    int ans=0,rem=0;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans;
}