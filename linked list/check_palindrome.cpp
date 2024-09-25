//WAP to find the Linked list is Palindrome 
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

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast -> next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(Node* head){
    if (head == NULL || head -> next == NULL)
    {
        return true;
    }

    //step - 1 find middle
    Node* middle = getMid(head);

    //step - 2 reverse list after mid
    Node* temp = middle -> next;
    middle -> next = reverse(temp);

    //step - 3 compare the both half 
    Node* head1 = head;
    Node* head2 = middle -> next;

    while (head2 != NULL)
    {
        if (head1 -> data != head2 -> data)
        {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    //step - 4  repeat step 2 (make list original) 
    temp = middle -> next;
    middle -> next = reverse(temp);

    return true;
};


int main(){

    // created new node
    Node* node1 = new Node(1);

    // head pointed to node 1
    Node* head = node1;

    // tail pointed to node 1
    Node* tail = node1;


    // inserting tail
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 3);
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);

    print(head);

    if (isPalindrome(head))
    {
        cout<<"List is Palindrome"<<endl;
    }else
    {
        cout<<"Not Palindrome"<<endl;
    }

    print(head);

return 0;
}
