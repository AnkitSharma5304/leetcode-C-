//In C++, v.push_back(x) is a member function of the std::vector class, 
//and it is used to add an element x to the end of the vector. Here's a brief explanation:

//Copy
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v; // declaring a vector v of int type 

    v.push_back(1); // Adds the element 1 to the end of the vector
    v.push_back(2); // Adds the element 2 to the end of the vector
    v.push_back(3); // Adds the element 3 to the end of the vector

    // Now, v contains: [1, 2, 3]

    return 0;
}
//In this example, v is a vector of integers, and push_back is used to add elements to the vector. 
//It dynamically resizes the vector if needed to accommodate the new elements. The vector v grows as elements are added to it. 
//After the push_back calls, v will contain the values [1, 2, 3].

//This function is particularly useful for dynamically building a collection of elements where you don't know the size beforehand. 
//It's important to note that push_back might involve resizing the underlying array that the vector manages, which can be an expensive operation if done frequently.
 //In cases where the size of the container is known in advance, it might be more efficient to use reserve to allocate space in advance.