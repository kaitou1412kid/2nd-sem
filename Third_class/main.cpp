// Variable : Allows the programmer to use meaningful names instead of memory address.
// Variables have Type: (int, string, person, Account)
//                Value : (10, 3.14, "Hari")
// Variable must be declared before it is used.
// Declaring and initializing variables.
// int a = 1;
// int b = 2;
// Rules for naming the variables:
// - Can contain Letters, numbers and underscores
// - must begin with a letter to underscore.
// - cannot begin with a number.
// - cannot use c++ reserved keywords.
// - cannot redeclare name in same scope.
// - C++ is case sensitive.

// examples:
// Legal: Age, age, _age, My_age, INT
// Illegal: $avage, 2012, My age, return

// initilaizing variables,
// int age; //uninitialized
// int age = 18; // C-like initialization
// int age (21); // Constructor initialization
// int age {21}; // c++11 initialization syntax direct brace

/*#include <iostream>
using namespace std;
int main(){
    int width{0};
    int height{0};
    
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Enter the height: ";
    cin>>height;
    cout<<"The area of the room is: "<<width*height<<endl;
}*/
//grabagee value
/*#include <iostream>
int main(){
    int s;
    std::cout<<s;
    return 0;
}*/

// C++ Primitive data types (Fundamental data types)
// - Charavter type: This is used for representing a single character.'A', 'X', '@'. (Eg: Char, char16_t)
// - Integer type : used to represent whole numbers. (short, int, long, longlong)
//                  --> Signed: NEgative numbers (this is by default)
//                  --> Unsigned: 0 or Positive number (must be specified) unsigned long a =
// - Floating type : used to represent non-integer numbers.(float(7.decimal), double(15.decimal), longdouble(19.decimal))
// - Boolean type: used to represent True or False. (Zero is false, Non-zero is True)


// Constant: like variables, Also have names, Also Occupies space.
//          ---> This doesnot need to be changed throughout the program.
//          ---> Unlike variables the value of the constant is always same.

// Types of constant:
// -Literal Constant: e.g: X = 12, y = 1.5, name ="Ram"
// -Declared Constant: const Keyword (e.g const int month_in_year {12} )
// -Constant Expression: constexpr Keyword
// -Enumenrated Constant: enum keyword
// -Defined Constant: #define (e.g. #define pi 3.1415) (replaces the word 'pi' in the word with the given value)
