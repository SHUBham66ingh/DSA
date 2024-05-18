#include<iostream>
using namespace std;


int  primaryDiagonal(int arr[][3] , int row , int col)
{
    int sum1=0;
    for(int i=0 ;i<=2; i++)
    {
        sum1=sum1+arr[i][i];
    }
 
}



int secondaryDiagoanl(int arr[][3] , int row , int col)
{
    int sum2=0;
    int i=0,j=col-1;
    while(j>=0)
    {
        sum2=sum2+arr[i][j];
        i++,j--;
    }
   
}



int main()
{
   int a[3][3]={1,2,3,4,5,6,7,8,9};
  cout<<primaryDiagonal(a , 3  ,3 )<<endl;
  cout<<secondaryDiagoanl(a,3,3)<<endl;
}