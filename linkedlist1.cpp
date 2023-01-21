#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        
    }

};
void insertattail(Node* &tail,int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertathead(Node* &head,int d)
{
    Node*temp=new Node(d);
    temp->next=head;
    head=temp;

}
void print(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void insertatposition(Node* &head,Node* &tail,int position,int d)
{
    if(position==1)
    {
        insertathead(head,d);
        return;
    }
    
Node*temp=head;
int count=1;
while(count<=position-1)
{
    temp=temp->next;
    count++;
}
if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    } 

    Node* Nodetoinsert=new Node(d);
    Nodetoinsert->next=temp->next;
    temp->next=Nodetoinsert;
}
void deletenode(int pos,Node* &head)
{
    if(pos==1)
    {   
        Node*temp=head;
        head=head->next;
        temp->next==NULL;
        delete temp;

    }
    else{
        Node*curr=head;
        Node*prev=NULL;
        int count=1;
        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}



int main()
{
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node*head=node1;
    Node* tail=node1;
    print(head);
    

    // insertathead(head,12);
    // print(head);
    // insertathead(head,14);
    // print(head);
    insertattail(tail,12);
    print(head);
    insertattail(tail,14);
    print(head);
     insertattail(tail,16);
     print(head);
     insertattail(tail,18);
    print(head);
    insertatposition(head,tail,2,20);
    print(head);
    insertatposition(head,tail,1,22);
    print(head);
    insertatposition(head,tail,7,24);
    print(head);
    cout<<head->data;
    cout<<tail->data;
    cout<<endl; 
     deletenode(7,head);
    print(head);
    deletenode(2,head);
    print(head);
    



}
