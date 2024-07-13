#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 1,1,1,1,1};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
           int sum= sum + arr[i];
           cout<<sum<<endl;
        }
    }
   
}