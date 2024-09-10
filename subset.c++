#include<iostream>
using namespace std;
void subsetSum(int arr[] , int index , int n , int sum )

{
  if(index==n)
  {
    cout<<sum<<endl;
    return ;
  }
  subsetSum(arr, index+1 , n , sum);
  subsetSum(arr, index+1 ,n ,  sum + arr[index]);


}
int main()
{
   int a[] = {1,2,3,4,5};
   subsetSum(a,0,4,0);

}