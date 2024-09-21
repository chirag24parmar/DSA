#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free code
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout <<"memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head,int position ,int d){
    // insert at start case
    if (position == 1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;

    while (cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }

    // inserting at last case
    if (temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    // creating node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){

    //deleting first or start node
    if (position==1)
    {
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev->next = curr->next;
        curr -> next = NULL;
        delete curr;   
    }
}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){

    // created new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;

    // head pointed to node 1
    Node* head = node1;

    // tail pointed to node 1
    Node* tail = node1;

    // inserting head
    // insertAtHead(head, 12);
    // insertAtHead(head, 15);

    // inserting tail
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    // inserting at middle
    insertAtPosition(tail,head,3,22);
    insertAtPosition(tail,head,1,55);
    insertAtPosition(tail,head,2,44);
    print(head);

    cout << "head - "<< head -> data<<endl;
    cout << "tail - "<< tail -> data<<endl;

    // deleting node
    deleteNode(6,head);
    print(head);

    cout << "head - "<< head -> data<<endl;
    cout << "tail - "<< tail -> data<<endl;



return 0;
}

// if we delete last node, then how we can update "tail node"?