#include<iostream>
using namespace std;
#include <vector>

void mergeSort(int arr[], int start , int end)
{
    if(start==end)
    return;

    int mid = start + (end-start)/2;
    mergeSort(arr,  start , mid);
    mergeSort(arr,  mid +1  , end);
    merge(arr, start , mid , end); 

}

 void merge(int arr[] , int start , int mid , int end)
 {
   vector<int>temp(end-start+1);
   int left = start ;
   int right = mid + 1;
   int index=0;
   while(left<= mid && right <= mid)
   {
    if(arr[left]<=arr[right])
    {
        temp[index]=arr[right];
        index ++ , left++;
    }
    else
    {
        temp[index]=arr[right];
        index++ , right++;
    }
   }
   




 }