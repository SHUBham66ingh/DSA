#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int ans[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         ans[i][j]=a[i][j]+b[i][j];
         cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
