#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL; 
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<< " memory is free for node with data " << value <<endl;
    }
};

void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
};

void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
    //insert at first position
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    //insert in middle
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    //insert in end
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head, Node* &tail){
    //delete first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }else{
        //delete any middle or last node
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
        delete curr;
        //if last node is deleted
        if(prev->next == NULL){
            tail = prev;
        }
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    // cout<< node1->data << endl;
    // cout<< node1->next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15 );
    print(head);

    insertAtPosition(head, tail, 4, 25);
    print(head);

    cout<< "head: " << head->data <<endl;
    cout<< "tail: " << tail->data <<endl;

    deleteNode(4, head, tail);
    print(head);

    cout<< "head: " << head->data <<endl;
    cout<< "tail: " << tail->data <<endl;
}