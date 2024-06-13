#include<iostream>
using namespace std;
int main()
{  int k=0;
     int product=1;
     int i=0,j=0;
    int arr[]={2,3,-2,4};
    for(int i=0;i<4;i++)
    {
        for( j=i;j<4;j++)
        product=1;
        {
         for( k=i;k<j;k++)
         {
        product=product*arr[k];
        cout<<product<<endl;
         }
        }
    }

}