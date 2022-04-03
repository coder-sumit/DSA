#include<bits/stdc++.h>
#include"00_ll_use.h"
using namespace std;

// length of ll using recursion

int len(node *head){
    if(head == NULL){
        return 0;
    }
    return 1 + len(head->next);
}

// insert node
node *insert_node(node *head, int n, int data){
    if(head == NULL){
        return NULL;
    }
    if(n == 0){
        node *newNode = new node(data);
        newNode->next = head;
        return newNode;
    }

    head->next = insert_node(head->next, n-1, data);
    return head;
}

// delete node recursively
node *deleteNodeRec(node *head, int i){
    if(head == NULL){
        return NULL;
    }
    if(i == 0){
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return head;
    }

    head->next = deleteNodeRec(head->next, i-1);
}

int main(){
   node *head = take_input();
   head = deleteNodeRec(head, 0);
   print(head);
   return 0;
}