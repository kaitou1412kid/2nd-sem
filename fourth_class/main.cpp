//Array: ( They are the compund datatypes )
//Properties:
// - Fixed size
// - All Elements are of same datatypes.
// - Stored contigously in memory.(memory will be allocated as one chunk)
// - Frist element is at index 0 and last is at n-1 (suppose we have n-sized array)
// - Out of bounds
//#include <iostream>
//using namespace std;
//int main(){
//    char greet[] = {'H', 'E', 'L', 'L', 'O'};
//    cout<<"The first letter is "<<greet[0]<<endl;
//    cout<<"The second letter is "<<greet[1]<<endl;
//    int marks[]={1,2,3,4,5};
//    cout<<"The highest mark is: "<<marks[4]<<endl;
//    marks[4] = 100;
//    cout<<"The highest mark updated is "<<marks[4]<<endl;
//    return 0;
//}
// Multi-Dimensional Array
// [1,2,3,4,5,6,7,8,9] series of numbers 1Dimensional
// [[1,2,3][4,5,6]] 2Dimensional Matrix
// 3Dimensional Matrix Image ( Width,  Height, Color(Red, Green, Blue))
// int bank_details[10 no.of rows][3 no. of cols.];

// Scenario:
// We use array to keep data of the students.
// But the size of array is fixed.
// So we have two options.
// 1. Make a array so big that the array will fit all the records. // wastage of memory
// 2. USe dynamic array such as vector.

// Vector:
// is the part of c++ Standard temperate library.
// Can grow and shrink at execution time.
// Provides similaar semantics and syntax as arrays. 
// Very efficent.
// Also can provide the bounds check.
// Uses variouus cool functions like sort, reverse, find and more.

//#include <vector>
// Declaring vector: vector<int>marks(20);
// Initializing vector: vector<int> marks{100,200,300,400,500};

// Assignment:
// Assignment operator
// Arithmetic operator
// Increment and decrement operator
// Relational operator
// Logical operator 
