#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
        this-> prev = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete this->next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with value "<<value<<endl;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

int getLength(Node* head){
    int length = 0;
    Node* temp = head;

    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtPosition(Node* &head , Node* &tail , int position , int data){
    if(position == 1){
        insertAtHead(head,tail, data);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head, tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deletionOfNode(int position , Node* &head , Node* &tail){

    //start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
}

int main(){
    cout<<"Linked List"<<endl;

    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    //print(head);

    cout<<"Length: "<<getLength(head)<<endl;

    cout<<"Insertion at head"<<endl;

    insertAtHead(head,tail, 11);
    print(head);
    // insertAtHead(head, 8);
    // print(head);
    // insertAtHead(head, 19);
    // print(head);
    insertAtHead(head,tail, 22);
    print(head);

    cout<<"Length: "<<getLength(head)<<endl;

    cout<<"Insertion at tail"<<endl;

    insertAtTail(head,tail, 25);
    print(head);

     cout<<"Insertion at Position"<<endl;
     insertAtPosition(head,tail,4,100);
     print(head);

     cout<<"Deletion"<<endl;

     deletionOfNode(3,head,tail);
     print(head);

     cout<<"Head: "<<head->data<<endl;
     cout<<"Tail: "<<tail->data<<endl;

    return 0;
}