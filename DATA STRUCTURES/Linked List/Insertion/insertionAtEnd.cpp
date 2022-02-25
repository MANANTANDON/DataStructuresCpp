//
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
   return;
}

void printLinkedList(Node *node){
    cout<<"\n-----------------NODE STARTED-----------------";
    cout<<"\nhead = "<<node<<endl;
    while(node != NULL){
        cout<<"\nnode-address = "<<node<<"\nnode->data: "<<node->data<<"; "<<" node->link: "<<node->link<<"; \n";
        node = node->link;
    }
    cout<<"\n-----------------NODE STARTED-----------------"<<endl;
}


int main(int argc, const char * argv[]) {
    int n,j;
    Node *head = NULL;
    cout<<"How many nodes you want to create? \n- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>j;
        atEnd(&head, j);
    }
    printLinkedList(head);
}
