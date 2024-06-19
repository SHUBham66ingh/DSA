#include<iostream>
#include <unordered_set>
#include <iterator>  
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,2,9,6,5,3,32,32,4};
    unordered_set<int> set(v.begin() , v.end());

    for (const int& num : set) {
        cout << num << " ";
    }
    cout << endl;
}
