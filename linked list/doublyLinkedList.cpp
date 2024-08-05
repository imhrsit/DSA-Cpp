#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
    int value = this->data;
    if(next != NULL){
    delete next;
    next = NULL;
    }
    cout<<"memory free for node with data "<< value<<endl;
}
};

//print all elements in linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

//gives length of linked list
int getLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &tail, Node* &head, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail, Node* &head, int d){
    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    //insert at first position
    if(position == 1){
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    //insert in end
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    //insert in middle
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail){
    //delete first node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        //if last node is deleted
        if(prev->next == NULL){
            tail = prev; 
        }
    }
}

int main(){
    //Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout<<getLength(head)<<endl;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtHead(tail, head, 13);
    print(head);

    insertAtHead(tail, head, 15);
    print(head);

    insertAtTail(tail, head, 25); 
    print(head);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    insertAtPosition(head, tail, 1, 90);
    print(head);

    insertAtPosition(head, tail, 7, 108);
    print(head);

    deleteNode(1, head, tail);
    print(head);

    deleteNode(6, head, tail);
    print(head);

    return 0;
}