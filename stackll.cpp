#include<cstddef>

class node {
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        next = NULL;
    }
};

class Stack{
    node* head;
    int size;

    public:
    Stack(){
        head = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    void push(int element){
        node* newnode = new node(element);
        newnode -> next = head;
        head = newnode;
        size++;
    }

    int pop(){
        if (isEmpty())
        {
            return 0;
        }
        int ans = head -> data;
        node* temp = head;
        head = head -> next;
        delete temp;
        size--;
        return ans;
    }

    int top(){
        if (isEmpty())
        {
           return 0;
        }
        return head -> data;
    }


};