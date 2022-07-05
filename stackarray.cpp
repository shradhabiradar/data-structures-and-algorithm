#include <iostream>
using namespace std;


class stackArray{
    int *data;
    int indexNumber;
    int capacity;

    public:
    stackArray(){
       data = new int[4];
       indexNumber = 0;
       capacity = 4;
    }

    int size(){
        return indexNumber;
    }

    bool isEmpty(){
        return indexNumber == 0;
    }

    void push(int value){
        if(indexNumber == capacity){
            int *newData = new int[2 * capacity];
            for(int i = 0; i<capacity; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[indexNumber] = value;
        indexNumber++;
    }
    int pop(){
        if(indexNumber == -1){
            cout << "Error";
            return INT16_MIN;
        }
        indexNumber--;
        return data[indexNumber];
    }
    int top(){
        if(isEmpty()){
            cout << "stack is empty";
            return INT16_MIN;
        }
        return data[indexNumber - 1];
    }
};