// Queue: Like a line in an amusement park 
// FIFO -> throughput. First in the line, first out. 

template <typename E>
class Queue { // an interface for a queue
public:
int size() const; // number of items in queue
bool empty() const; // is the queue empty?
const E& front() const throw(QueueEmpty); // the front element
void enqueue (const E& e); // enqueue element at rear
void dequeue() throw(QueueEmpty); // dequeue element at front
};