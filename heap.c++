#include<iostream>
using namespace std;
int main()
{
    int *ptr1 = new int;
    cout<<ptr1<<endl;

    float *ptr2 = new float;
    *ptr2 = 3.14;
    cout<<ptr2<<endl;


    int n;
    cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
    cin>>n;

    int *ptr3= new int[n];

    for(int i=0;i<n;i++)
    ptr3[i] = i+1;

    for(int i=0;i<5;i++)
    cout<<ptr3[i]<<endl;




}