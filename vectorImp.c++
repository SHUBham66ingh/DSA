#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  // create vector
  //vector<int>v;
 // vector<int>v1(5,1);
  // size and capacity
 // cout<<v.size()<<endl;
  //cout<<v.capacity()<<endl;
 // v.push_back(2);
 //v.push_back(3);
 //v.push_back(10);
  // cout<<v.size()<<endl;
 // cout<<v.capacity()<<endl;
  // update value
 // v[1]=5;
   // cout<<v1.size()<<endl;
 // cout<<v1.capacity()<<endl;
 // v1.push_back(8);
   //cout<<v1.size()<<endl;
 // cout<<v1.capacity()<<endl;

 // vector<int>v3 = {1,2,3,4,5};
  //cout<<"size of v3 is "<<v3.size();
 
 // delete value from vector
 //vector<int>vnew;
// vnew.push_back(4);
// vnew.push_back(41);
// vnew.push_back(14);
// vnew.push_back(42);
// vnew.push_back(84);
// vnew.pop_back();
// //cout<<vnew.size()<<endl;
//  //cout<<vnew.capacity()<<endl;

//  vnew.erase(vnew.begin()+1);
//  for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<<" ";
//  cout<<endl;
// vnew.insert(vnew.begin()+1,50);// insert the value
// for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<<" ";
//  for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<<" ";

//  vnew[1]=37;
//  for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<<" ";

//  vnew.clear();// remove all the elments...

// vector<int>arr;
// arr.push_back(2);
// arr.push_back(12);
// arr.push_back(22);
// arr.push_back(30);

// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;

// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

// vector<int>a;// copy of 1 vector into another

// a=arr;
// cout<<a.size()<<endl;

// for(auto it=arr.begin();it!=arr.end();it++)
// {
//   cout<<*it<<" ";
// }
 
// for(auto i:arr)
// {
//   cout<<i<<" ";
// }

vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125);
// sort in decreasing order
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

// cout<<endl;
// // sort in increasing order
// sort(ans.rbegin() , ans.rend());
// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";

cout<<endl;
cout<<binary_search(ans.begin() , ans.end() , 54);


return 0;

}