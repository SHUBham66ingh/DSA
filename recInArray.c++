#include<iostream>
using namespace std;

void printArray(int arr[] , int index , int n)
{
    if(index==n)
    return ;
    cout<<arr[index]<<" ";
    printArray(arr , index+1 , n);
}
int main()
{
   int a[]= {1,2,3,4,5};
   printArray(a,0,5);


}