//WAP to find it is a circular linked list or not
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

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

bool isCircularList(Node* head){
    //empty list
    if (head == NULL)
    {
        return true;
    }

    Node* temp = head -> next;

    while (temp != NULL && temp != head)
    {
        temp = temp -> next;
    }

    if (temp == head)
    {
        return true;
    }
    return false;
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

    // head pointed to node 1
    Node* head = node1;

    // tail pointed to node 1
    Node* tail = node1;

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    
    print(head);

    if(isCircularList(tail)){
        cout<<"It is a circular Linked list";
    }else{
        cout<<"It is not a circular Linked list";
    };



return 0;
}