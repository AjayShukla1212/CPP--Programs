#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    next = NULL;
  }
};


Node* takeinput(){
  int data;
  cin >>data;
  Node *head = NULL;
  Node *tail = NULL;

  while(data!= -1)
  {
    Node *newNode  = new Node(data);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    cin >>data;
  }
  return head;
}

// Node* insert(Node *head,int pos,int data){
//   Node *newNode = new Node(data);
//   int count =0;
//   Node *temp = head;
//   if(pos == 0)
//   {
//     newNode->next = head;
//     head = newNode;
//     return head;
//   }
//   while(temp!=NULL && count< pos-1) //i ke pehle tk jaane ke liye
//   {
//     temp = temp->next;
//     count++;
//   }
//   if(temp!= NULL)                 // insertion krne ka
//   {
//     newNode->next = temp->next;
//     temp->next = newNode;
//   }
//   return head;
// }

//Recursively Inserting The Node

Node *insert(Node *head,int i,int data)
{
  if(head==NULL)
  {
    return head;
  }
  if(i==0)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
  }
  else{
    Node *x = insert(head->next,i-1,data);
     head->next = x;                       //Connecting The Base Case
  }
}

// Node *deleteNode(Node *head,int pos){
//   int count =0;
//   Node *temp = head;
//   if(pos == 0)
//   {
//     head = head->next;
//     return head;
//   }
//   while(temp!= NULL && temp->next!= NULL && count<pos-1) //We Need To Take Care Of Previous And Next Element From Where We Are Deleting
//   {
//     temp = temp->next;
//     count++;
//   }
//   if(temp!=NULL && temp->next!= NULL){
//     Node *a = temp->next;
//     temp->next = a->next;
//   }
//   return head;
// }

Node *deleteNode(Node *head,int i){
  if(head==NULL){
    return head;
  }
  if(i==0)
  {
    Node *a = head;
    head = head->next;
    delete a;
    return head;
  }
  else{
    Node *x = deleteNode(head->next,i-1);
    head->next = x;
  }
}

void print(Node *head){
  Node *temp = head;
  while(temp != NULL){
    cout <<temp->data <<" ";
    temp = temp->next;
  }
  cout <<endl;
}

int main(){
  cout <<"Enter The Inputs : ";
  Node *head = takeinput();
  cout <<"Here Are Outputs : ";
  print(head);
  int pos,data;
  cout <<"For Inserting An Element : ";
  cin >>pos >>data;
  head = insert(head,pos,data);
  print(head);
  cout <<"For Deleting An Element : ";
  int pos2;
  cin >>pos2;
  head = deleteNode(head,pos2);
  print(head);
}
