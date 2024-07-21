#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age , roll_number;
    string grade;
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invlaid name";
            return ;
        }
        name=s;
    }

    void getname()
    {
       cout<<name<<endl;
    }
};

int main()
{
     Student S1;
     S1.name="Shubham";
     S1.age=10;
     S1.roll_number=21;
     S1.grade="A+";
     S1.setname("shubham");
     S1.getname();
}