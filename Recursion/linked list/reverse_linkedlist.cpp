#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data = 0;
        next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

//reverse in recursion
void reverse(Node* &head, Node* curr, Node* prev){
    if (curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head,forward,curr);
    curr -> next = prev;
}


// Function to reverse the linked list
Node* reverseLinkedList(Node *head)
{
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}

// Function to insert at the tail of the linked list
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// Function to print the linked list
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
    // Create the first node
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;

    // Insert elements at the tail
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    // Print original list
    print(head);

    // Reverse the list and update head
    head = reverseLinkedList(head);

    // Print reversed list
    print(head);

    return 0;
}