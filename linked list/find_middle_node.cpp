#include<iostream>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

//function of finding middle node
Node *findMiddle(Node *head) {
    if (head == NULL || head -> next ==NULL)
    {
        return head;
    }
    
    if (head -> next -> next == NULL)
    {
        return head -> next;
    }

    Node* fast = head -> next;
    Node* slow = head;

    while (fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
    
}

//inserting
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
    insertAtTail(tail, 25);

    // Print original list
    print(head);

    // Find and print the middle node
    Node* middleNode = findMiddle(head);
    if (middleNode != NULL) {
        cout << "Middle Node: " << middleNode->data << endl;
    } else {
        cout << "List is empty" << endl;
    }

    return 0;
}