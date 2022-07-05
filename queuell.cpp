#include <cstddef>

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
    int size;

    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getsize(){
        return size;
    }

    int isEmpty(){
        return size == 0;
    }

    void enqueue(int element){
        Node* newnode = new Node(element);
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }else{
            tail -> next = newnode;
            tail = tail -> next;
        }
        size++;
    }

    int front(){
        if(isEmpty()){
            return 0;
        }
        return head -> data;
    }

    int dequeue(){
        if(isEmpty()){
            return 0;
        }
        int ans = head -> data;
        Node* temp = head;
        temp = temp -> next;
        delete temp;
        size--;
        return ans;
    }
};