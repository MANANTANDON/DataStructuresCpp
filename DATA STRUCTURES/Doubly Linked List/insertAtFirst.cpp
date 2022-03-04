#include "iostream"
using namespace std;

class Node{
    public:
        Node * leftLink;
        int data;
        Node * rightLink;
};

void atFront(Node ** head, Node ** last, int data){
    Node *q = *head;
    Node * newNode = new Node();
    newNode->data = data;
    if(*head == NULL){
        newNode->leftLink = NULL;
        newNode->rightLink = NULL;
        *head = newNode;
        *last = newNode;
        return;
    }
    q->leftLink = newNode;
    newNode->rightLink = *head;
    *head = newNode;
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
    atFront(&head, &last, 10);
    atFront(&head, &last, 20);
    atFront(&head, &last, 30);
    atFront(&head, &last, 40);
    atFront(&head, &last, 50);
    atFront(&head, &last, 60);
    printDoubleList(head, last);
    return 0;
}
