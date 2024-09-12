#include<iostream>
using namespace std;
class Student
{
    string name;
    public:
    void setname(string s)
    {
        name = s;
    }
    void getname()
    {
       cout<<name<<endl;
    }
};
int main()
{
    Student s1;
    s1.setname("aman");
    s1.getname();

}