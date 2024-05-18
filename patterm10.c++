#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=row;col>0;col--)
        {
            cout<<col<<" ";
        }
         cout<<endl;
    }
}