Understanding References in C++
In C++, variables can be passed to functions either by value or by reference. The concept of passing by reference is crucial for manipulating variables directly in their original location, rather than working with copies of them.

1. Pass by Value
When a variable is passed by value to a function, a copy of that variable is created inside the function. Any modifications made to this copy will not affect the original variable.

Example: Pass by Value
cpp
Copy code
void increment(int x) {
    x = x + 1;  // This only modifies the copy
}

int main() {
    int a = 5;
    increment(a);  // a is passed by value
    cout << a;     // Output will still be 5
}
In this example, the value of a remains unchanged because the function works on a copy of a.

2. Pass by Reference
When a variable is passed by reference, the function receives a reference (an alias) to the original variable. Any changes made to the reference inside the function will directly affect the original variable.

In C++, to pass by reference, you use the & symbol in the function parameter. It tells the function that the argument should be treated as a reference, not a copy.

Example: Pass by Reference
cpp
Copy code
void increment(int& x) {
    x = x + 1;  // This modifies the original variable
}

int main() {
    int a = 5;
    increment(a);  // a is passed by reference
    cout << a;     // Output will now be 6
}
In this case, a gets incremented because the function directly modifies the original variable, not a copy.

Why Use References?
There are a few key reasons to use references:

Efficiency: Passing large objects (like vectors or arrays) by value can be expensive because it involves copying the entire object. Passing by reference avoids the copy and thus improves performance.

cpp
Copy code
void modifyVector(vector<int>& v);  // Pass vector by reference to avoid copying
Modify Original Values: If you want a function to modify the original data (like updating an array, a variable, or an object), you need to pass by reference.

cpp
Copy code
void updateValue(int& x) {
    x = 100;
}
Return Multiple Results: In C++, functions can only return one value. By passing variables by reference, you can effectively return multiple values by modifying them directly.

cpp
Copy code
void getMinMax(int a, int b, int& min, int& max) {
    if(a < b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
}
When to Use References?
Modify Data: Use references when you want to change the original data inside a function.
Pass Large Objects: Use references when passing large objects (like vectors, maps, or custom objects) to avoid unnecessary copying.
Efficient Memory Usage: Using references is memory-efficient since no extra copy is created.
Returning Multiple Values: If you need to return multiple results from a function, references can help.
Example in Your Case:
In your code, you are building a list of subsets (ans). If you pass ans by value, a new copy is created every time the function is called. This prevents your original list from being updated. By passing ans by reference, the changes made inside the solve function will be reflected in the main() function.

Your Case with Pass by Reference:
cpp
Copy code
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
    if(index >= nums.size()) {
        ans.push_back(output);  // Modifying the original ans
        return;
    }
    solve(nums, output, index + 1, ans);
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}
Here, the vector ans is passed by reference (vector<vector<int>>& ans), which means it can be updated inside the solve function, and the changes will be reflected globally.

Summary:
Pass by value: Creates a copy, original remains unchanged.
Pass by reference: Directly modifies the original variable or object.
Use pass by reference for efficiency and when you need to modify the original data inside a function.
Does this explanation clarify things for you?