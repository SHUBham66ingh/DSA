#include<iostream>
using namespace std;



void fun3(int n)
{
    
       if(n==0)
       return ;
       cout<<n<<"DAYS LEFT FOR BIRTHDAY"<<endl;
       fun3(n-1);
}
int main()
{
//     int n=5;
//     for(int i=n;i>0;i--)
//     {
//         cout<<i<<"days left for birthday\n";
//     }

//     int ptr;
//     cout<<sizeof(ptr)<<endl;

        fun3(3);
}