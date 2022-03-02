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

void deleteFromFront(Node *&head){
    Node *p = head;
    if(head == NULL){
        return;
    }
    head = head->link;
    delete p;
    return;
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
    
    int j, choice;
    Node *head = NULL;
    char toggle = 'y';
    while(toggle == 'y'){
        cout<<"What you want to do ?\n1.Insert at First \n2.Insert at Any Position \n3.Insert At Last \n4.Delete from Front \n5.Delete from any position \n6.Delete from Last\n7.Print Linked List \n8.List Length \n9.SEARCH ELEMENT \n10.EXIT \n- "; cin>>choice;
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
                deleteFromFront(head);
                break;
                
            case 5:
                deleteFromMiddle(head);
                break;
                
            case 6:
                deleteFromLast(head);
                break;
                
            case 7:
                printLinkedList(head);
                break;

            case 8:
                linkedListLength(head);
                break;

            case 9:
                searchElement(head);
                break;
                
            case 10:
                toggle = 'n';
                break;

            default:
                break;
        }
    }
}
