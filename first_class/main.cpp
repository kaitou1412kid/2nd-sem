/*#include <iostream>
int main() {
    int guess_num;
    std::cout <<"Please guess a number between 1 and 10:";
    std::cin>> guess_num;
    std::cout<<"The number is : "<<guess_num<<std::endl;
    return 0;
}*/

// Keywords and operators used in above program
// # ---> Pound sign, It is used for only to make code pretty.
// include ---> Its a way of including a standard or user-defined file in a program.
// <iostream> ---> Defines the standard input/output stream of objects. Eg:- cout,cin,cerr
// main() ---> It is the function which is called when program is executed. The execution of .cpp files begin from here.
// standard(std) ---> std is a namespace in which cout is defined.
// cout ---> Standard output stream.
//Prompt ---> Message that is hsown to the user.
// cin ---> Standard input stream.
// << ---> Insertion operator (helps to insert values in the program).
// >> ---> Extraction operator (grabs the input provided by the user)
// guess_num ---> Variable
// int ---> Data type
// return ---> Since main is a function it have to return some value.
// endl ---> Takes cursor to next line.
// Assignment:::::::
// "..." ---> holds one or more than one chracter
// '...' ---> holds only one character
// #define pre processsor directive

// Compiler Error:
// Two type of errors: Sematic error, Syntax error
// Assignment : 2 examples of sematic error and syntax error.

// Example of sematic error
// example 1
//#include <iostream>
//int main() {
//    int num_1;
//    std::cout<<"Enter any number";
//    std::cin>>num_1;
//    std::cout<<"The number is "<<num_1<<std::endl;
//    return "mynumber"
//}
// example 2
//#include <iostream>
//int main(){
//    int a, b, c;
//    a + b = c;
//}
// sematic le meaning didaina.

// Example of syntax error
// Example 1
//#include <iostream>
//int main(){
//    int number=10
//    std::cout<<number;
//}
// Example 2
//#include <iostream>
//int main()
//    std::cout<<"Kono Dio da";
//}

// Compiler Error:
// Compiler Warning:( should not be ignore!!)

//#include <iostream>
//int main(){
//    int guess_num;
//    guess_num = 10;
//    std::cout << "Nothing to print";
//    return 0;
//}

// Linker error:
//#include <iostream>
//extern int A;
//int main() {
//    std::cout << A;
//    return 0;
//}



// Run-time Error:
// Error that occurs during the execution of the program
// type of run time error: Divide by zero, file not found,out of memory
// Exceptional handling can help deal with this type of error. 

// Logic Error:
// Logic errors are mistakes made by programmer during coding.
// Suppose we have a program where a person who is 18 years or above checks whether he/she can get a license.

//#include <iostream>
//int main(){
//    int age;
//    std::cout<<"Please enter your age:";
//    std::cin>>age;
//    if (age>=18){
//        std::cout<<"Yes, You are old enough to get a license!!!"<<std::endl;
//    }
//}


// Keywords ... Reserved
// Identifiers ---> Something that is named by programmers which is meaningful in the program. There are rules to follow.
// Operators ---> + * / non-standard:>> Extraction operator, :: scope resolution operator
// Punctuations ---> ; , "", ()
// Comments
// Syntax