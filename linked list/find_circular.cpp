//WAP to find it is a circular linked list or not
#include<iostream>
#include<map>
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

//this function is for checking the list is circular or not
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

//if the list have loop not circular list
//this is function is for check that, list contain loop or not
bool detectloop(Node* head){

    if (head == NULL)
    {
        return false;
    }

    map<Node*,bool> visited;
    Node* temp = head;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

//most optimmal solution for detecting loop in list
Node* floydDetectLoop(Node* head){
    if (head == NULL)
    {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;
        if (slow == fast){
            cout<<" Present at "<< slow -> data <<endl;
            return slow;
        }
    }
    return NULL;
}

//this function is for finding the starting node of loop list.
Node* getStartingNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* intersection = floydDetectLoop(head);

    while (slow != intersection)
    {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

//this function is for removing loop from list
void removeLoop(Node* head){
    if (head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while (temp -> next != startOfLoop)
    {
        temp = temp -> next;
    }
    
    temp -> next = NULL;
    
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
    insertAtTail(tail, 13);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);


    
    print(head);

    //this is for making loop in list
    tail -> next = head -> next; 
    
    //this for circular
    if(isCircularList(tail)){
        cout<<"It is a circular Linked list"<<endl;
    }else{
        cout<<"It is not a circular Linked list"<<endl;
    };

    // this id detecting loop
    if (detectloop(head))
    {
        cout<<"Loop is present"<< endl;
    }else{
        cout<<"No loop is present"<<endl;
    }
    
    // floyd algo for detecting loop
    if (floydDetectLoop(head) != NULL)
    {
        cout<<"Loop is present"<< endl;
    }else{
        cout<<"No loop is present"<<endl;
    }
    
    //this for finding starting node of loop list
    Node* loop = getStartingNode(head);
    cout<<"loop start at "<<loop -> data<<endl;

    removeLoop(head);
    print(head);


return 0;
}