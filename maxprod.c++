#include<iostream>
using namespace std;
int main()
{
    int ans =-1;
    int prefix=1,suffix=1;
   int  a[5]={2,3,-2,0,4};
    for(int i=0;i<4;i++)
    {
       if(prefix==0) prefix=1;
       if(suffix==0) suffix=1;
       prefix=a[i]*prefix;
       suffix=a[4-1-i]*suffix;
     //  if(prefix==0) prefix=1;
      // if(suffix==0) suffix=1;

       ans = max( ans , max(prefix,suffix) );
    }

    cout<<ans<<endl;

}