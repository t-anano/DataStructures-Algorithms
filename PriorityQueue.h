// Kind of like a priority based vector
// Removal is based on priority in the queue
// Stores a collection of prioritized elements
// Supports insertion in any prioritized order 


template <typename E, typename C>
class ListPriorityQueue {
public:
int size() const; // number of elements
bool empty() const; // is the queue empty?
void insert(const E& e); // insert element
const E& min() const; // minimum element
void removeMin(); // remove minimum
private:
std::list<E> L; // priority queue contents
C isLess; // less-than comparator
};