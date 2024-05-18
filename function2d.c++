#include<iostream>
using  namespace std;
void Print(int a[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int arr[2][4]={1,2,3,4,5,6,7,8};
    Print(arr,2,4);

    return 0;
}
