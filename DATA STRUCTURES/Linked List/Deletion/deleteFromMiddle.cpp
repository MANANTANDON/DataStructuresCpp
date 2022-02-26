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

void deleteFromMiddle(Node *&head){
    
    Node *p = head, *q = head;
    int pos;
    cout<<"\nAt position do you want to delete ? \n- ";
    cin>>pos;
    for(int i=1;i<=pos-1;i++){
        q = p;
        p = p->link;
    }
    q->link = p->link;
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
    deleteFromMiddle(head);
    cout<<"\nAfter Deletion: \n";
    printLinkedList(head);
}
