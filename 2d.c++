#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;


    int **ptr = new int  *[n];

    for(int i=0;i<n;i++)
    {
        ptr[i] =  new int[m];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ptr[i][j];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ptr[i][j];
        }
    }


}