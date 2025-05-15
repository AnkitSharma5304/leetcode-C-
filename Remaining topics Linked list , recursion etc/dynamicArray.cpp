#include<iostream>
using namespace std;// dynamic array
int main(int argc, char const *argv[])
{
    int rows;
    cin>>rows;

    int col;// homework jaggered array
    cin>>col;

    int ** arr= new int*[rows];//int * represent row here 
                            // int ** for 2d arrays 
    for(int i=0 ; i<rows ;i++){
        arr[i]=new int[col];//creation of rows
    }

    for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<col ;j++){
        cin>>arr[i][j];
        }
    }
    cout<<endl;
for(int i=0 ; i<rows ;i++){
        for(int j=0 ; j<col ;j++){
        cout<<arr[i][j]<<"   ";
        }cout<<endl;
    }
// releasing memory 
for(int i=0; i<rows ;i++){
    delete [] arr[i]; 
}
delete [] arr;
    
    return 0;
}
//explanation
/*
This C++ code dynamically allocates memory for a 2D array and then reads input into it, followed by printing the array.

Here's a step-by-step explanation:

#include<iostream>: This line includes the input-output stream header file which allows us to perform input and output operations in C++.

using namespace std;: This line tells the compiler to use the std namespace. The std namespace contains all the standard C++ libraries.

int main(int argc, char const *argv[]): This is the main function where the execution of the program begins. It takes command line arguments argc (argument count) and argv (argument vector), although these are not used in this program.

int n; cin>>n;: It declares an integer variable n and reads an integer value from the standard input (usually the keyboard) into n. This value represents the size of the square 2D array (n x n) that will be created.

int ** arr= new int*[n];: It declares a pointer to a pointer to an integer arr and dynamically allocates memory for an array of n pointers to integers. This will represent the rows of the 2D array.

for(int i=0 ; i<n ;i++){ arr[i]=new int[n]; }: It dynamically allocates memory for n rows, each row containing n integers. This creates the 2D array.

for(int i=0 ; i<n ;i++){ for(int j=0 ; j<n ;j++){ cin>>arr[i][j]; } }: It reads integer values from the standard input into each element of the 2D array. The outer loop iterates over each row, and the inner loop iterates over each column.

cout<<endl;: This line prints a newline character, making the output more readable.

for(int i=0 ; i<n ;i++){ for(int j=0 ; j<n ;j++){ cout<<arr[i][j]<<" "; } cout<<endl; }: This nested loop structure prints each element of the 2D array to the standard output. The outer loop iterates over each row, and the inner loop iterates over each column. After printing all elements of a row, a newline character is printed to move to the next row.

return 0;: This statement indicates that the program execution is successful and returns 0 to the operating system, indicating that the program terminated without errors.
*/