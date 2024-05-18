#include<iostream>
using namespace std;
int main()
{
int n,count=0;
cout<<"ENTER THE NUMBER"<<endl;
cin>>n;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        cout<<" not prime"<<endl;
        return 0;
    }
}
cout<<"prime number"<<endl;
return 0;
}