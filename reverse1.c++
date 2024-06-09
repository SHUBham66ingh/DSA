#include<iostream>
using namespace std;
int main()
{
    string s="hello ";
    int n=s.size();
    int i=0;
    while((i<n) && s[i]!=' ')
    {
        i++;
    }

    cout<<i;
}