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

void atFront(Node** head, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->link = *head;
    *head = newNode;
}

void printLinkedList(Node *node){
    cout<<"\n-----------------NODE STARTED-----------------";
    cout<<"\nhead = "<<node<<endl;
    while(node != NULL){
        cout<<"\nnode-address = "<<node<<"\nnode->data: "<<node->data<<"; "<<" node->link: "<<node->link<<"; \n";
        node = node->link;
    }
    cout<<"\n-----------------NODE ENDED-----------------"<<endl;
}


int main(int argc, const char * argv[]) {
    int n,j;
    Node *head = NULL;
    cout<<"How many nodes you want to create? \n- ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the value: ";
        cin>>j;
        atFront(&head, j);
    }
    printLinkedList(head);
}
