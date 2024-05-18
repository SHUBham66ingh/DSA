#include<iostream>
using namespace std;
int main()
{
    int ans=0,mul=1,rem=0,num=13;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans;   
}