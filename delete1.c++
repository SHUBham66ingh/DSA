#include<iostream>
using namespace std;

class node 
{
    public:
    int data ;
    node *next;
    node(int n )
    {
        data = n;
        next= NULL;
    }
};

void printLinkedList(node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

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
    int arr[] = {2,4,6,8,10};
    head = createLinkedList(arr, 0 , 5);
    printLinkedList( head);
    if(head!=NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    printLinkedList( head);


}
