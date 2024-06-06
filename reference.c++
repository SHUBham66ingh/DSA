#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int &temp=num;  // num and temp are same
    cout<<temp<<endl;;
    cout<<temp++<<endl;
}
