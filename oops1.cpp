#include<iostream>
using namespace std;

class Student
{
   private:
   string name;
   int age , roll_number;
   string grade;
   public:
   void  setname(string n)
   {
      name = n;
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
      s1.setname("shubham");

      




}