#include<iostream>
using namespace std;
int main()
{
 int row=1,col=1;
 for(row=8;row>=1;row--)
 {
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    for(col=1;col<=16-2*row;col++)
    {
        cout<<" ";
    }
    for(col=1;col<=row;col++)
    {
        cout<<"*";
    }
    cout<<endl;
 }

 for(row=1;row<=8;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }

        for(col=1;col<=16-2*row;col++)
        {
            cout<<" ";
        }

        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}