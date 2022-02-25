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

void atMiddle(Node **head){
    int pos;
    Node *p = *head;
    Node *newNode = new Node();
    cout<<"Enter the data: "; 
    cin>>newNode->data;
    cout<<"At what position you want to enter? \n-"; 
    cin>>pos;
    for(int i=0;i<pos-2;i++){
        p = p->link;
    }
    newNode->link = p->link;
    p->link = newNode;
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


int main() {
    
    Node *head = NULL;
    atFront(&head, 10);
    atFront(&head, 20);
    atFront(&head, 30);
    atFront(&head, 40);
    atFront(&head, 50);
    printLinkedList(head);
    atMiddle(&head);
    printLinkedList(head);
}
