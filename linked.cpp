#include<iostream>
using namespace std;

class Node
{
public:
int data ;
 
Node *next;

};
class linked_list
{
public:
   Node *head;
   linked_list()
   (
      head=NULL; 
   )
   bool isempty()
   {
       return (head==NULL);
   }
  void first_item(int newvalue)
 {
     Node *new_node;
     new_node->data=newvalue;
 if (isempty())
 {
     
     new_node->next=NULL;
     head=new_node;
 
 }
 else
 {
     new_node->next=head;
     head=new_node;
 }
 }
void display()
 {
    Node *temp=head;
    while (temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
}
int counter()
{
    int counter=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        counter++;
    }
    return counter;
} 
bool is_found(int key)
{
    Node *temp=head;
    bool found=false;
    while (temp!=NULL)
    {
        if(key==temp->data)
            found=true;
           temp=temp->next;
    }
    return  found;
}
};

int main()
{
linked_list lst;
if(lst.isempty())
cout<<"empty";



}