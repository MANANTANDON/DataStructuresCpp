#include "iostream"
using namespace std;

class Node{
    public:
        Node * leftLink;
        int data;
        Node * rightLink;
};

void atMiddle(Node **head){
    int pos;
    Node *p = *head;
    Node *newNode = new Node();
    cout<<"Enter the data: "; cin>>newNode->data;
    cout<<"At what position you want to enter? \n- "; cin>>pos;
    for(int i=0;i<pos-2;i++){
        p = p->rightLink;
    }
    newNode->rightLink = p->rightLink;
    newNode->leftLink = p;
    p->rightLink = newNode;
}

void atLast(Node ** head, Node ** last, int data){
    Node *q = *last;
    Node *newNode = new Node();
    newNode->data = data;
    if( *last == NULL ){
        newNode->rightLink = NULL;
        newNode->leftLink = NULL;
        *head = newNode;
        *last = newNode;
        return;
    }
    
    q->rightLink = newNode;
    newNode->leftLink = *last;
    *last = newNode;
}

void printDoubleList(Node *start, Node *end){
    cout<<"\n--------------------NODE STARTED--------------------\n\n";
    cout<<"start: "<<start;
    while(start->rightLink != NULL){
        cout<<"\n\nnode-address: "<<start<<"\nleft-Link: "<<start->leftLink<<"\tData: "<<start->data<<"\tright-Link: "<<start->rightLink<<endl;
        start = start->rightLink;
    }
    cout<<"\n\nnode-address: "<<start<<"\nleft-Link: "<<start->leftLink<<"\tData: "<<start->data<<"\tright-Link: "<<start->rightLink<<endl;
    cout<<"\nend: "<<end<<"\n";
    cout<<"\n----------------------NODE ENDED----------------------\n\n";
}
int main(){
    Node * head = NULL, *last = NULL;
    //these functions are called, so initially your doubly linked list is not empty.....
    atLast(&head, &last, 10);
    atLast(&head, &last, 20);
    atLast(&head, &last, 30);
    atLast(&head, &last, 40);
    atLast(&head, &last, 50);
    atLast(&head, &last, 60);
    atMiddle(&head);
    printDoubleList(head, last);
    return 0;
}
