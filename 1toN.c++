#include<iostream>
using namespace std;
void PrintEven(int n , int N )
{
    if(n>N)
    return;
    cout<<n<<endl;
    PrintEven(n+2,N);
}
void Print(int num)
{
    if(num==1)
    {
        cout<<1<<endl;;
      return;
    }
    Print(num-1);
    cout<<num<<endl;
}
int main()
{
   Print(5);
}