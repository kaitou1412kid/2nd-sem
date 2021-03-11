// Function :- DRY ( Donot repeat yourself)
// we can modularize the program using the functions.
// Seperate code into logical self-contained units.
// These units are reusable.
// C++ program:
// - C++ Standard Template Library (eg: Vector, Iostream, cmath)
// - Third party library ( cocos2dx, unreal , spring, cry engine)
// - Our own functions
// (Dont reinvent the wheel)
// Abstraction OOP
// Software Engineering
/*int main(){
    //read inputs
       statement 1;
       statement 2;
       statement 3;
    // process inputs
       statement 1;
       statement 2;
       statement 3;
    // generate outputs
       statement 1;
       statement 2;
       statement 3;
    return 0;
}
read_input();
int main(){
    // read inputs
        read_input();
    // process inputs
        process_inputs();
    // generate outputs
        generate_output();
}*/

// standard library example:
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double num{0};
    cout<<"Enter a number i.e double : ";
    cin >> num;
    cout<<"The square root of "<<num<<" is "<<sqrt(num)<<endl;
    cout<<"The cube root of "<<num<<" is "<<cbrt(num)<<endl;
    cout<<"The ceiling function of "<<num<<" is "<<ceil(num)<<endl;
    cout<<"The floor function of "<<num<<" is "<<floor(num)<<endl;
    cout<<"The rounded value of "<<num<<" is "<<round(num)<<endl;
}*/

// Function definition (user defined function)
// functionType Fucntion Name(Parameters){
    // statements ( Body of the function)
    // Return Type
//}
// Name:
// - Same rules applies as variables.
// - It should be meaningful.
// Parameters list:
// - the variable passed into the function.
// - Their type must be specified.
// Return type:
// - The type of data that is returned by the function.
// Body:
// - Statements are executed when the function is called.
// - It lies within the curly braces {}.

/*#include<iostream>
using namespace std;
void say_world(){
    cout<<"World"<<endl;
}
void say_hello(){
    cout<<"Hello";
    say_world();
}
int addition(int a, int b){
    return a+b;
}
int main(){
    say_hello();
    int a{1};
    int b{2};
    addition(a,b);
    return 0;
}*/

/*#include <iostream>
using namespace std;
const double pi{3.14159};
double calc_area_circle(double radius){
    return pi * radius * radius;
}
double calc_area_cylinder(double radius, double height){
    return pi*radius*radius*height;
}
void area_circle(){
    double radius{0};
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"The area of the circle is "<<calc_area_circle(radius)<<endl;
}
void area_cylinder(){
    double radius{0};
    double height{0};
    cout<<"Enter the radius of the cylinder :";
    cin>>radius;
    cout<<"Enter the height of the cylinder :";
    cin>>height;
    cout<<"The area of cylinder is "<<calc_area_cylinder(radius,height)<<endl;
}
int main(){
    area_circle();
    area_cylinder();
}*/



// Function prototype
// - It tells the compiler about a function before it is used.
// - Also called as forward declaration.
// - placed at the beginning of the program.

/*#include <iostream>
using namespace std;
const double pi{3.14159};
// function prototypes
double calc_area_circle(double );
double calc_area_cylinder(double , double );
void area_circle();
void area_cylinder();

int main(){
    area_circle();
    area_cylinder();
}
double calc_area_circle(double radius){
    return pi * radius * radius;
}
double calc_area_cylinder(double radius, double height){
    return pi*radius*radius*height;
}
void area_circle(){
    double radius{0};
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"The area of the circle is "<<calc_area_circle(radius)<<endl;
}
void area_cylinder(){
    double radius{0};
    double height{0};
    cout<<"Enter the radius of the cylinder :";
    cin>>radius;
    cout<<"Enter the height of the cylinder :";
    cin>>height;
    cout<<"The area of cylinder is "<<calc_area_cylinder(radius,height)<<endl;
}*/


// Function parameters
// when we call a function we pass in data to the function.
// In function call they are called actual parameters. (Argument)
// In function definition they are called Formal parameters.

/*int add(int,int);//prototype

int main(){ // main function
    int a{0};
    int b{10};
    add(a,b); // function call
}
int add(int x, int y){ // function definition
    return x+y;
}*/


// Pass_by_value
// When you pass data into a function it is called a pass-by-value.
// A copy of data is passed to the function.
// Whatever changed you make to the parameters in the function doesnot affect the argument that was passed in. 

/*#include <iostream>
using namespace std;
void param_test(int x){
    cout<<x<<endl;
    x = 100;
    cout<<x<<endl;
}
int main(){
    int a{50};
    cout<<a<<endl;
    param_test(a);
    cout<<a<<endl;
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string>v);
void print_vector(vector<string>v);
int main(){
    int num{10};
    int another_num{20};
    // For integer
    cout<<"Before :"<<num<<endl;
    pass_by_value1(num);
    cout<<"After :"<<num<<endl;
    cout<<"Before :"<<another_num<<endl;
    pass_by_value1(another_num);
    cout<<"After :"<<another_num<<endl;
    // For String 
    string name{"Kritagya"};
    cout<<"Before :"<<name<<endl;
    pass_by_value2(name);
    cout<<"After :"<<name<<endl;
    //For vector
    vector <string> Pillar{"Wammu","EssiDissi","Kars"};
    cout<<"Before :"<<endl;
    print_vector(Pillar);
    pass_by_value3(Pillar);
    cout<<"After";
    print_vector(Pillar);
}
void pass_by_value1(int num){
    num = 10000;
}
void pass_by_value2(string s){
    s = "Shakya";
    cout<<s;
}
void pass_by_value3(vector<string>v){
    v.clear();
}
void print_vector(vector<string>v){
    for (auto s:v)
        cout<<s<<"";
    cout<<endl;
}

// Return Statement
// If a function returns a value then it must use a return statement that returns a value.
// If a function doesnot return a value (void) then the return statement is optional.
// Return statement can occur anywhere in the function body.
// Return statement immediately exists the function.
// multiple return statement is not encouraged.
// The return value is the result of the function call.



// Default parameter value
// This value remains constant throughout.
// The best practice to define the default value is to define in prototype.
// must appear at the tail end of the parameters list.
// can have multiple default values.

/*#include <iostream>
using namespace std;
void addition (int , int b=3);
int main(){
    addition(2);
}
void addition(int a , int b){
    cout<<a+b<<endl;
}*/

// Overloading
// void func1(int), func1(string), func1(double), func1(vector)
// We can have functions that have different parameters lists that have the same name.
// OOP: Abstraction, Polymorphism : Many forms for a single concept.
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);
void print(int num){
    cout<<"Printing integer"<<num<<endl;
}
void print(double num){
    cout<<"Printing Double"<<num<<endl;
}
void print(string s){
    cout<<"Printing string: "<<s<<endl;
}
void print(string s, string t){
    cout<<"Printing string2 :"<<s<<" And "<<t<<endl;
}
void print(vector<string>v){
    cout<<"Printing the vector";
    for (auto s:v)
        cout<<s+" ";
    cout<<endl;
}
int main(){
    print(100);
    print('A');
    print(123.87);
    print("Arrive derci");
    string s ={"Arrive derci"};
    print(s);
    print("Yare Yare",s);
    vector <string> JOJO{"Jonathan","Joseph","Jotaro"};
    print(JOJO);
    cout<<endl;
    return 0;
    
}*/

// Passing array to the function (yo pardaina)
// Pass_by_reference
// Sometimes we want to be able to change the actual paramters from with the function body.
// In order to achieve this we need the location or address of actual paramters.
// The formal parameters will be an alias for the actual parameters.
// Example 1:
//#include<iostream>
//using namespace std;
//void scale_number(int &num); //prototype
//int main(){
//    int number{1000};    
//    cout<<"Before :"<<number<<endl;
//    scale_number(number);
//    cout<<"After :"<<number<<endl;
//    return 0;
//}
//void scale_number(int &num){
//    if (num>100)
//        num = 100;
//}

/*#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main(){
    int x{10},y{20};
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}*/

/*#include <vector>
#include <iostream>
using namespace std;
void print(vector<int>&v);
int main(){
    vector<int>data{1,2,3,4,5};
    print(data);
    return 0;
}
void print(vector<int>&v){
    int a = 10;
    for(auto num:v)
        cout<<num+a<<endl;
}*/


// How functions work?
// Function use the "Function call stack"
// - Analogous to a stack of books.
// - LIFO - Last in first out
// - push and pop
// Stack frame or activation record (collection of information that represent an active function)
// - Each time a function is called an activation record is created and pushed in the call stack.
// - when the function terminates we pop its activation record odd call stack.
// - And, then the top of the stack is the function that called it.
// - function must return control
// Remember the call stack is finite is size, if we activate too many function in the call stack we run out of og stack.
// This is called stack overflow, This is usually unrecoverable.

/*#include <iostream>
using namespace std;
void func2(int &x, int y, int z){
    x += y + z;
}
int func1(int a, int b){
    int result{};
    result = a + b;
    func2(result,a,b);
    return result;
}
int main(){
    int x{10};
    int y{20};
    int z{};
    z = func1(x,y);
    cout<<z<<endl;
    return 0;
}*/


// Inline function
// Function call have certain amount of overhead.
// Sometimes we can have simple functions.
// In this kind of situation,, we suggest compiler to compile them "Inline".
// - Avoid function call overhead.
// - Generate inline assembly code.
// - Faster
// - Could cause code bloat.

/*#include <iostream>
using namespace std;
inline int add_numbers(int a,int b){ // dont need to be declared as inline because compiler does it automatically
    return a+b;
}
int main(){
    int result{0};
    result = add_numbers(100,200);
    return 0;
}*/


// Scope
// C++ uses scope rules to determine where an identifier can be used.
// C++ uses static or lexical scoping.
// Local or block scope
// Global scope

// Local scope:
// identifiers declared in block{}.
// Function parameters have block scope.
// only visible within the block{} where declared.
// Function variables are NOT preserved between function calls.
// With nested block inner blocks can "SEE" but outer cannot "SEE" in.

// Global Scope:
// Identifier declared outside any function/ class.
// Visible to all part of the program after global identifier has been declared.
// Global constants are ok.
// Best practices - dont use global variable.



// Storage Class
// extern int a = 10; 


// return reference

// assignment:
// Global and local scope example
// Define storage class with example for all five.