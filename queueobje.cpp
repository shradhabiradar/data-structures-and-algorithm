#include <iostream>
using namespace std;
#include "queuearray.cpp"

int main(){
    QueueArray q1(5);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    cout << q1.getSize() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.getSize() << endl;
}