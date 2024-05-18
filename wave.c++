#include<iostream>
using namespace std;
void  Wave(int arr[][3] , int row , int col)
{
    int  i=0,j=0;
    for(j=0;j<col;j++)
    {
        if(j%2==0)
        {
            for(i=0;i<row;i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
            {
            for(int i=row-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
           }
    }

}
int main()
{
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
     Wave(a,3,3);
     return 0;
}