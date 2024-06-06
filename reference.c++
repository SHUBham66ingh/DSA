#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int swapping(int &p1, int &p2)
{
  int temp=p1;
  p1=p2;
  p2=temp;
}

 void pass(vector<int>&v1)
 {
    for(int i=0;i<5;i++)
    {
        v1[i] = 10;
    }
 }


int main()
{
    // int num=10;
    // int &temp=num;  // num and temp are same
    // cout<<temp<<endl;;
    // cout<<temp++<<endl;
    // cout<<&num<<endl;
    // cout<<&temp<<endl;
    // int first=10,second=20;
    // swapping(first, second);
    // cout<<first<<" "<<second<<endl;

    vector<int>v(5,0);
    pass(v);
    for(int i=0;i<5;i++)
    {
    cout<<v[i]<<" "<<endl;
    }

}
