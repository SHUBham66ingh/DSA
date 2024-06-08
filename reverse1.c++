#include<iostream>
using namespace std;
int  reverse(int arr[] , int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        arr[start] = arr[end];
        start++;
        end--;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    reverse(a,5);
}