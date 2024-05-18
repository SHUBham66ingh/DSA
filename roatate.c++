#include<iostream>
using namespace std;
int main()
{
    int temp=0;
    int arr[5]={1,2,3,4,5};
    arr[0]=temp;

    for(int i=1;i<5;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[4]=temp;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;

}