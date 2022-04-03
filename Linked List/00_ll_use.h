#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//take input
node* take_input(){
    int data;
    node* head = NULL;
    node* tail = NULL;
    cin>>data;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = tail->next;
        }

        cin>>data;
    }
    return head;
}

// print linked list
void print(node *head){
       while(head != NULL){
           cout<<head->data<<" ";
           head = head->next;
       }
       cout<<endl;
}

// insertion of node
node* insert(node *head, int i, int data){

    node *temp = head;
    node *newNode = new node(data);
    if(i == 0){
        newNode->next = head;
        return newNode;
    }

    int j = 0;
    while(j < i-1 && temp != NULL){
        temp = temp->next;
        j++;
    }
    if(temp == NULL){
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// delete node at ith position
node* deleteNode(node *head, int n){
   if(n ==0){
       node *temp = head;
       head = head->next;
       temp->next = NULL;
       delete temp;
       return head;
   }

   node *temp = head; int i =0;
   while(temp != NULL && i < n-1){
      temp = temp->next;
      i++;
   }
   if(temp == NULL || temp->next == NULL){
       return head;
   }

   node *delNode = temp->next;
   temp->next = temp->next->next;
   delNode->next = NULL;
   delete delNode;
   return head;
}