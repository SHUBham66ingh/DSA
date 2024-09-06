#include<iostream>
using namespace std;
int  LinearSearch( int arr[] , int target  ,int index, int N)

{
       if(target==N)
       return -1;

       if(target==arr[index])
       return index;

      return   LinearSearch(arr, target,index+1, N);
}

int main()
{
    int a[4] = {1,2,3,4};
    int d =  LinearSearch(a,8 , 0 , 4);
    cout<<d;
}