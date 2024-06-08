#include<iostream>
using namespace std;

bool possible(int arr[], int day , int m , int k)
{
    int count=0, num=0;
    for(int i=0;i<day;i++)
    {
        if(arr[i]<day)
        {
            count++;
        }
        else
        {
            num = num + count/k;
            count =0;
        }  
        num = num + count/k;
        return num>=m;     
    }
}

 int main()
 {
    int bloomDay[] = {7,7,7,7,12,7,7};
      possible(bloomDay,12,2,3);
 }