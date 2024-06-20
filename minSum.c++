#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,5,6,6};
    int sum;
    int sum1;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            int sum=0;
         sum= arr[i]+arr[j];         
        }
        sum1 = min(sum,sum1);
            cout<<sum1<<endl;
    }
}
