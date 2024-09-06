#include<iostream>
using namespace std;

int Pow(int base, int n) {
    if(n == 0)
        return 1;  
    if(n == 1)
        return base;  
    return base * Pow(base, n-1);  
}

int main() {
    cout << Pow(3, 2) << endl;  
    return 0;
}