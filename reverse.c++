#include<iostream>
using namespace std;
int main()
{  int i=0,j=4;
    int arr[5]={1,2,3,4,5};
    while(i<j)
    {
     swap(arr[i],arr[j]);
      i++;
      j--;
    }

for(int i=0;i<=4;i++)
{
    cout<<arr[i]<<" ";
}

}   