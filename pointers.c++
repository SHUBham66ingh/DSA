#include<iostream>
using namespace  std;


int main()
{
    // int a=10;
    // //print the address of a
    // cout<<&a<<endl;

    // int *ptr =  &a;
    // cout<<ptr<<endl;

    // float m = 2.6;
    // float *ptr1 = &m;
    // cout<<*ptr1<<endl;

    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr1)<<endl;
    //  int a= 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

  int arr[5] = {11,7,8,12,14};
    for(int i=0;i<5;i++)
    {
         cout<<*(arr+i)<<endl;
    }
     cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<(arr+i)<<endl;
    }


}
