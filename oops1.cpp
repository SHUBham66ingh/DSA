#include<iostream>
using namespace std;

class Student
{
   private:
   string name;
   int age , roll_number;
   string grade;
     public:
    void setName(string s)
    {
      name = s;
    }
    void setage(int a)
    {
      age = a;
    }
    void setroll_number(int b)
    {
       roll_number = b;;
    }
    void setgrade(string r)
    {
       grade  = r;
    }

    void getname()
    {
      cout<<name<<endl;
    }

    void getage()
    {
      cout<<age<<endl;
    }
    
};

int main()
{
      // Student s1;
      // s1.name  = "Rohit";
      // s1.age = 14;
      // s1.roll_number = 21;
      // s1.grade = "A+";

      // cout<<s1.age<<" "<<endl;;
      // cout<<s1.name<<" ";

      // Student s2;
      // s2.name = "shubahm";
      // s2.age = 14;
      // s2.roll_number = 21;
      // s2.grade = "A+";


      // cout<<s2.age<<" "<<endl;;
      // cout<<s2.name<<" ";
          Student s1;
          s1.setName("Shubham");
          s1.setage(10);
          s1.setroll_number(21);
          s1.setgrade("A+");
          s1.getname();
          s1.getage();
      




}