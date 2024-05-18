#include<iostream>
using namespace std;
int main()
{
   int n=5;
   int num=n;
   int pow;
   cin>>pow;
   for(int i=1;i<pow;i++)
   {
    num=num*n;
   }
    cout<<num;
}