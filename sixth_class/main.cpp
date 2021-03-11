// Pointer
// Pointer is a variable whose value is an address.
// The address can contain another variable or a function.
// If x is an integer variable and its value is 10. Then we can declaare a pointer with same data type that points to it.
// To use the data that the pointer is pointing to you must know the type.

// why cant we use variable or function itself?
// inside functions, pointers can be used to access dataa that are defined outside the function.
// Since those varirables may not be in scope so you cant access them by their names.

// Pointers can be used to operate on array very efficently.
// We can allocate memory dynamically on the heap or free storage during runtime.

// Declaring pointer variables:
// Variable_type *Pointer_namae;
// int *int_ptr;
// double *double_ptr;
// char *char_ptr;
// string *str_ptr;
// It is very important to initialize the pointer.


// Initializing a pointer
// variable_type *pointer_name{nullptr};
// int *intptr{nullptr};
// double *double_ptr{nullptr};
// char *char_ptr{nullptr};
// string *string_ptr{nullptr};

// always initialize the pointer
// uninitialized pointer contains garbage data and can point anywhere.
// initialize to zero or nnull.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int num{10};
    cout<<"Value of num "<<num<<endl;
    cout<<"Size of num is "<<sizeof num<<endl;
    cout<<"Address of num is "<<&num<<endl;
    
    int *p;
    cout<<"\nValue of p is "<<p<<endl;
    cout<<"Address of p is "<<&p<<endl;
    cout<<"Size of p is "<<sizeof p<<endl;
    
    int *r{nullptr};
    cout<<"\nValue of r is "<<r<<endl;
    
    int *p1{nullptr};
    double *p2{nullptr};
    vector<string> *p3{nullptr};
    string *p5{nullptr};
    
    cout<<"\nSize of p1 "<<sizeof p1<<endl;
    cout<<"Size of p2 "<<sizeof p2<<endl;
    cout<<"Size of p3 "<<sizeof p3<<endl;
    cout<<"Size of p5 "<<sizeof p5<<endl;
    
    int score{10};
    double temp{100.7};
    int *score_ptr{nullptr};
    score_ptr = &score;
    cout<<"Value of score is "<<score<<endl;
    cout<<"Address of score is "<<&score<<endl;
    cout<<"Value of score_ptr is: "<<score_ptr<<endl;
    //score_ptr=&temp;
    //cout<<"Value of score_ptr is: "<<score_ptr<<endl;
    
    return 0;
}

