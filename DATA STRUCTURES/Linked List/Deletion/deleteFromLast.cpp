//
//  main.cpp
//  Linked_list
//
//  Created by Manan Tandon on 24/02/22.
//

#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *link;
};

void atFront(Node** head, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = *head;
    *head = newNode;
}

void deleteFromLast(Node *&head){
   Node *p = head, *q = head;

   if(head == NULL){
       return;
   }

   while (p->link != NULL) {
       q = p;
       p=p->link;
   }
   q->link = NULL;
   delete p;
   return;
}

void printLinkedList(Node *node){
    cout<<"\n-----------------NODE STARTED-----------------";
    cout<<"\nhead = "<<node<<endl;
    while(node != NULL){
        cout<<"\nnode-address = "<<node<<"\nnode->data: "<<node->data<<"; "<<" node->link: "<<node->link<<"; \n";
        node = node->link;
    }
    cout<<"\n-----------------NODE ENDED-----------------\n\n";
}


int main(int argc, const char * argv[]) {
    
    Node *head = NULL;
    atFront(&head, 10);
    atFront(&head, 20);
    atFront(&head, 30);
    atFront(&head, 40);
    atFront(&head, 50);
    atFront(&head, 60);
    atFront(&head, 70);
    atFront(&head, 80);
    atFront(&head, 90);
    atFront(&head, 100);
    printLinkedList(head);
    deleteFromLast(head);
    cout<<"\nAfter Deletion: \n";
    printLinkedList(head);
}
