class QueueArray{
    int *data;
    int nextindex;
    int firstindex;
    int size;
    int capacity;

    public:
    QueueArray(int s){
        data = new int[s];
        nextindex = 0;
        firstindex = -1;
        size = 0;
        capacity = s;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }


    void enqueue(int element){
        if(nextindex == capacity){
            return;
        }
        data[nextindex] = element;
        nextindex = (nextindex + 1) % capacity;
        if (firstindex == -1)
        {
            firstindex = 0;
        }
        size++;  
    }

    int front(){
        if(nextindex == capacity){
            return 0;
        }
        return data[firstindex];
    }

    int dequeue(){
        if(firstindex == capacity){
            return 0;
        }
        int ans = data[firstindex];
        firstindex++;
        size--;
        return ans;
    }

};