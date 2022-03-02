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


void searchElement(Node *head){
    Node *p = head;
    int n;
    cout<<"Enter the element you want to search: "; cin>>n;
    while(p->link != NULL){
        if(p->data == n){
            cout<<"Element found ! \n\n";
            return;
        }
        p = p->link;
    }
    if(p->data == n){
        cout<<"Element found ! \n\n";
        return;
    }
    cout<<"Element not found !\n\n";
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

    atFront(&head, 100);
    atFront(&head, 90);
    atFront(&head, 80);
    atFront(&head, 70);
    atFront(&head, 60);
    atFront(&head, 50);
    atFront(&head, 40);
    atFront(&head, 30);
    atFront(&head, 20);
    atFront(&head, 10);
    printLinkedList(head);
    searchElement(head);
}