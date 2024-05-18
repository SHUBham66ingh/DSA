#include<iostream>
using namespace std;
int main()
{
    int target;
    cin>>target;
   int  arr[5]={2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
            cout<<i;
        }
    }
}