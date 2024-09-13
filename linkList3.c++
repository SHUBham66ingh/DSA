#include<iostream>
using namespace std;
class node 
{
    public:
    int data ;
    node *next;
         node (int n)
    {
       data = n;
       next = NULL;
    }
};

node* createLinkedList(int arr[] , int index , int size)
{
    if(index==size)
    return NULL;
    node *temp;
    temp = new node(arr[index]);
    temp->next =  createLinkedList(arr,index+1,size);
    return temp;

}
int main()
{
       node *head;
       head = NULL;
       createLinkedList(int arr[] , int index+1 , int size)

       int arr[] = {2,3,4,6,8,10};

}
