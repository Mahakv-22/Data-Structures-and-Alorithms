#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this-> data = data;
        this-> next = NULL;
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

void insertAtHead(Node* &head, int d){

    //new node create
    Node* newNode = new Node(d);
    newNode->next = head;
    head = newNode;

}

void insertAtTail(Node* &tail, int d){

    //new node create
    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;

}

void insertAtPosition(Node* &tail,Node* &head,int pos, int d){
    if(pos == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < pos-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deletionOfNode(int position , Node* &head , Node* &tail){

    //start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
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
        prev->next = curr->next;
        curr->next = NULL;
        tail = prev;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}

int main(){

    cout<<"Linked List"<<endl;

    Node* node1 = new Node(10);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //head pointed to node 1;
    Node* head = node1;
    Node* tail = node1;
    //print(head);

    // insertAtHead(head , 12);
    // print(head);

    // insertAtHead(head , 15);
    // print(head);

    insertAtTail(tail , 12);
    //print(head);

    insertAtTail(tail , 15);
    //print(head);

    insertAtPosition(tail, head, 3 , 22);
    //print(head);

    insertAtPosition(tail, head, 1 , 20);
    print(head);

    // insertAtPosition(tail, head, 6 , 20);
    // print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    cout<<"Delete"<<endl;

    deletionOfNode(5,head,tail);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    return 0;
}