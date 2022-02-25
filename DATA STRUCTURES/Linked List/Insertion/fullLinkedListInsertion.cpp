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

void atEnd(Node** head, int data){

    Node *p = *head;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    while(p->link != NULL){
        p = p->link;
    }
    p->link = newNode;
}

void atMiddle(Node **head){
    int pos;
    Node *p = *head;
    Node *newNode = new Node();
    cout<<"Enter the data: "; cin>>newNode->data;
    cout<<"At what position you want to enter? \n- "; cin>>pos;
    for(int i=0;i<pos-2;i++){
        p = p->link;
    }
    newNode->link = p->link;
    p->link = newNode;
}

void linkedListLength(Node *node){
    int len=0;
    while(node != NULL){
        len++;
        node = node->link;
    }
    cout<<"\n\nLinked List Length: "<<len<<"\n\n";
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
    
    int j, choice;
    Node *head = NULL;
    char toggle = 'y';
    
    while(toggle == 'y'){
        cout<<"Where you want to enter the data ?\n1.At First \n2.At Any Position \n3.At Last \n4.Print Linked List \n5.List Length \n6.EXIT \n- "; 
        cin>>choice;
        switch (choice) {
            case 1:
                cout<<"Enter the data: "; cin>>j;
                atFront(&head, j);
                break;
            
            case 2:
                atMiddle(&head);
                break;
                
            case 3:
                cout<<"Enter the data: "; cin>>j;
                atEnd(&head, j);
                break;
                
            case 4:
                printLinkedList(head);
                break;
                
            case 5:
                linkedListLength(head);
                break;
            
            case 6:
                toggle = 'n';
                break;
                
            default:
                break;
        }
    }
}
