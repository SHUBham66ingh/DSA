#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    int *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }

};
int main()
{
    node *Head;
    Head = NULL;

    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
   if(Head==NULL)
   {
     Head = new node(4);
   }
   else
   {
  node *temp;
   temp = new node(4);
   temp->next = Head;
   Head = temp;

   }


}