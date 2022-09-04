class MyCircularQueue {
    vector<int> q;
    int front, rear, size;
public:
    
    MyCircularQueue(int k) {
        q.resize(k);
        front = rear = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        
        if(isEmpty())
            front = 0;
        
        rear = (rear+1) % size;;
        q[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        
        if(front == rear) {
            front = rear = -1;
            return true;
        }
            
        front = (front+1) % size;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        
        return q[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        
        return q[rear];
    }
    
    bool isEmpty() {
        return front == -1;
    }
    
    bool isFull() {
        return front == ((rear+1) % size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */