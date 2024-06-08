#include<iostream>
using namespace std;


void printReverseArray(int arr[], int index)
{
    if(index==-1)
    return ;
    cout<<arr[index]<<" ";
    printReverseArray(arr, index-1);

}
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
   cout<<endl;
   printReverseArray(a,4);
   


}