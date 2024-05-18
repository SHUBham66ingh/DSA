#include<iostream>
using namespace std;
void Spiral(int a[][4] , int row , int col)
{
    int top=0,right=4,left=0,bottom=4;
    for(int i=left ; i<=right ; i++) 
    {
        cout<<a[top][i]<<" ";
    }
    top++;


     for(int i=top ; i<=bottom ; i++) 
    {
        cout<<a[i][right]<<" ";
    }
    right--;
}

int main()
{
  int a[4][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  Spiral(a,4,4);
}