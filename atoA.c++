#include<iostream>
using namespace std;
char convert(char name)
{
    char ans = name-'a'+'A';
    return ans;

}
int main()
{
    char input;
    cout<<"ENTER THE CHARACTER";
    cin>>input;
    cout<<convert(input);
}