//#include <iostream>
//using namespace std;
//
//const int MAX = 100;
//
//template <class Type>
//class Stack{
//private:
//    Type st[MAX];
//    int top;
//public:
//    Stack(){
//        top = -1;
//    }
//    void push (Type var){
//        st[++top] = var;
//    }
//    Type pop(){
//        return st[top--];
//    }
//};
//
//int main()
//{
//    Stack <float> s1;
//    
//    s1.push(1111.1F);
//    s1.push(2222.2F);
//    s1.push(3333.3F);
//    cout<<"1: "<<s1.pop()<<endl;
//    cout<<"2: "<<s1.pop()<<endl;
//    cout<<"3: "<<s1.pop()<<endl;
//    
//    Stack<long> s2;
//    
//    s2.push(123123123L);
//    s2.push(234234234L);
//    s2.push(345345345L);
//    cout<<"1: "<<s2.pop()<<endl;
//    cout<<"2: "<<s2.pop()<<endl;
//    cout<<"3: "<<s2.pop()<<endl;
//    return 0;
//}


// increment template class

#include <iostream>
using namespace std;

template <class Type>
class Stack{
private:
    Type a;
public:
    Stack(Type var){
        a = var;
    }
    Type operator ++(int){
    
        return a++;
    }
    void display(){
        cout<<a;
    }
};

int main(){
    Stack<float> s1(222.22F);
    s1++;
    cout<<"The increment value is "<<endl;
    s1.display();
    
}