#include<iostream>
using  namespace std;


void Diagonal1(int arr[][3], int row , int col)
{
    int sum=0,i=0,j=0;
    while(i<row)
    {
        sum = sum + arr[i][i];
         i++;
    }
     cout<<sum<<" ";
}



void Diagonal2(int arr[][3], int row , int col)
{
    int sum=0,i=0,j=col-1;
    while(j>=0)
    {
        sum = sum + arr[i][j];
        i++ , j--;
    }
    cout<<sum<<" ";
}

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    Diagonal1( a,3,3 );
    Diagonal2( a, 3, 3);
}
