//C++ preprocessor
//C++ Preprocessor directive

//comments ---> Single line comment
///* comment */ ---> Multi-line comment 
/***********************
 * Author : Kritagya
 * sem : 2nd
 ***********************/
 
// Namespace ---> Helps removing the naming conflicts.
// Method 1:
//# include <iostream>
//using namespace std;

//int main(){
//    int guess_num;
//    cout<<"Please enter the number to guess :";
//    cin >> guess_num;
//    cout << "your number is "<< guess_num;
//    return 0;
//}

// Method 2:
#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;

//int main(){
//    int guess_num;
//    count<<"Please enter the number to guess :";
//    cin << guess_num;
//    cout << "Your number is "<<guess_num;
//    return 0;
//}

//Method 3:
//#include <iostream>
//int main () {
//    int guess_num;
//    std::cout<<"Please enter the number to guess:";
//    std::cin >> guess_num;
//    std::cout<< "Your number is "<<guess_num;
//    return 0;
//}

// Namespace: various libraries,user defined modules, naming confusing .. Scope resoltion operator :: , std::cout;

//Cout and Cin (String formatting)
//#include <iostream>
//using namespace std;
/*int main() {
    cout<<"Hello World"<<endl;
    cout<<"Hello";
    cout<<" World"<<endl;
    cout<<"Hello"<<" World"<<endl;
    cout<<"Hello"<<" World\n";
    cout<<"Hello\nOut \nThere\n";
    
    int num1;
    int num2;
    double num3;
    
    cout<<"Enter num1 :";
    cin>>num1;
    cout<<"Enter num2 :";
    cin>>num2;
    cout<<"You Entered "<<num1<<"and"<<num2<<endl;
    
    cout<<"Enter num3 :";
    cin>>num3;
    cout<<"You Entered "<< num1 << "and " << num3 <<endl;
    return 0;
}*/