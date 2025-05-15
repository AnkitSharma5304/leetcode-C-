The Standard Template Library (STL) in C++ is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks. STL has four components:

Containers
Algorithms
Iterators
Functors
1. Containers
Containers are objects that hold data of a certain type. The STL provides several different types of containers, each optimized for specific kinds of operations.

Sequence Containers
Sequence containers store elements strictly in a linear sequence.

vector: Dynamic array, provides random access.
cpp
Copy code
std::vector<int> v;
v.push_back(1);
v.push_back(2);
list: Doubly linked list, provides efficient insertion and deletion.
cpp
Copy code
std::list<int> l;
l.push_back(1);
l.push_front(2);
deque: Double-ended queue, allows fast insertion and deletion at both ends.
cpp
Copy code
std::deque<int> d;
d.push_back(1);
d.push_front(2);
array: Fixed-size array.
cpp
Copy code
std::array<int, 3> a = {1, 2, 3};
Container Adaptors
Adaptors provide a different interface for sequential containers.

stack: LIFO (last in, first out) data structure.
cpp
Copy code
std::stack<int> s;
s.push(1);
s.pop();
queue: FIFO (first in, first out) data structure.
cpp
Copy code
std::queue<int> q;
q.push(1);
q.pop();
priority_queue: Similar to a queue but with elements ordered by priority.
cpp
Copy code
std::priority_queue<int> pq;
pq.push(10);
pq.push(20);
Associative Containers
Associative containers store elements formed by a combination of a key value and a mapped value, and which allows for fast retrieval of individual elements based on their keys.

set: Collection of unique elements, stored in sorted order.
cpp
Copy code
std::set<int> s;
s.insert(1);
s.insert(2);
map: Collection of key-value pairs, stored in sorted order by key.
cpp
Copy code
std::map<int, std::string> m;
m[1] = "one";
m[2] = "two";
multiset: Similar to a set but allows duplicate elements.
cpp
Copy code
std::multiset<int> ms;
ms.insert(1);
ms.insert(1);
multimap: Similar to a map but allows duplicate keys.
cpp
Copy code
std::multimap<int, std::string> mm;
mm.insert({1, "one"});
mm.insert({1, "uno"});
Unordered Associative Containers
Unordered associative containers are similar to associative containers but use a hash table for storage.

unordered_set: Collection of unique elements, not sorted.
cpp
Copy code
std::unordered_set<int> us;
us.insert(1);
us.insert(2);
unordered_map: Collection of key-value pairs, not sorted.
cpp
Copy code
std::unordered_map<int, std::string> um;
um[1] = "one";
um[2] = "two";
unordered_multiset: Similar to an unordered_set but allows duplicate elements.
cpp
Copy code
std::unordered_multiset<int> ums;
ums.insert(1);
ums.insert(1);
unordered_multimap: Similar to an unordered_map but allows duplicate keys.
cpp
Copy code
std::unordered_multimap<int, std::string> umm;
umm.insert({1, "one"});
umm.insert({1, "uno"});
2. Algorithms
Algorithms are a collection of functions designed to be used on ranges of elements provided by the STL containers. They perform tasks such as searching, sorting, counting, and manipulating elements.

sort: Sorts a range of elements.
cpp
Copy code
std::sort(v.begin(), v.end());
find: Searches for an element in a range.
cpp
Copy code
auto it = std::find(v.begin(), v.end(), 2);
copy: Copies elements from one range to another.
cpp
Copy code
std::copy(v.begin(), v.end(), std::back_inserter(new_v));
for_each: Applies a function to a range of elements.
cpp
Copy code
std::for_each(v.begin(), v.end(), [](int &n){ n++; });
accumulate: Accumulates values in a range.
cpp
Copy code
int sum = std::accumulate(v.begin(), v.end(), 0);
3. Iterators
Iterators are objects that point to elements within a container. They allow traversal of the elements in the container and provide a way to access and manipulate the data.

begin() / end(): Points to the first element / one past the last element.
cpp
Copy code
for(auto it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
}
rbegin() / rend(): Points to the last element / one before the first element.
cpp
Copy code
for(auto it = v.rbegin(); it != v.rend(); ++it) {
    std::cout << *it << " ";
}
cbegin() / cend(): Constant iterators to the first element / one past the last element.
cpp
Copy code
for(auto it = v.cbegin(); it != v.cend(); ++it) {
    std::cout << *it << " ";
}
4. Functors (Function Objects)
Functors are objects that can be treated as though they are a function or function pointer. They are instances of classes that have operator() defined.

Example of a functor:
cpp
Copy code
struct Add {
    int operator()(int a, int b) {
        return a + b;
    }
};

Add add;
int result = add(1, 2); // result is 3
Using functors with algorithms:
cpp
Copy code
std::transform(v.begin(), v.end(), v.begin(), Add());
Summary
The STL provides a robust and efficient framework for managing collections of data, processing them with algorithms, traversing them with iterators, and customizing behavior with functors. The proper use of these components can greatly enhance the performance and maintainability of C++ programs.