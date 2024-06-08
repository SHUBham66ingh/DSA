#include<iostream>
using namespace std;
int  reverse(int arr[] , int n)
{
    int start=0,end=n-1;
    while(start<end)
    { int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    reverse(a,5);
    for(int i=0;i<5;i++)
      cout<<a[i]<<" ";

}