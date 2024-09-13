#include<iostream>
using namespace std; // insertion of the array
class node
{
    public:
    int data; 
   node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }

};
int main()
{
    int arr[] = {1,2,3,4};
    node *Head;
    Head = NULL;

    for(int i=0;i<4;i++)
    {
   if(Head==NULL)
   {
     Head = new node(arr[i]);
   }
   else
   {
   node   *temp;// temp will get eliminated because it is created statically
   temp  = new node(arr[i]); 
   temp->next = Head;
   Head = temp;
    }
    }
    node *temp = Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    };


}