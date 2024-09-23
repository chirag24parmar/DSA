//WAP to removing duplicates nodes from sorted list
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
        //memory free code
         int value = this->data;
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

Node* removeDuplictes(Node* head){

    if (head == NULL)
    {
        return NULL;
    }

    Node* curr = head;

    while (curr != NULL && curr->next != NULL)
    {
        if (curr -> data == curr -> next -> data){
            Node* nodeToDelete = curr -> next;
            curr -> next = curr -> next -> next;
            delete nodeToDelete;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
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
    Node* node1 = new Node(1);

    // head pointed to node 1
    Node* head = node1;

    // tail pointed to node 1
    Node* tail = node1;

    // inserting tail
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 3);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    print(head);


    removeDuplictes(head);
    print(head);


return 0;
}