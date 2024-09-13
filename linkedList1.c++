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
   // static creation of node  node  a(24);
   // dynamic creation of node
   node *head;
   head = new node(4);
   cout<<head->data<<endl;
   cout<<head->next<<endl;



    
    

}
