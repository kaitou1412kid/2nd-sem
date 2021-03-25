//#include <iostream>
//using namespace std;
//const int MAX = 3;
//
//class Stack{
//private:
//    int st[MAX];
//    int top;
//public:
//    class Range{};
//    Stack(){
//        top = -1;
//    }
//    void push(int var){
//        if(top >= MAX - 1)
//            throw Range();
//        st[++top] = var;
//    }
//    int pop(){
//        if(top<0)
//            throw Range();
//        return st[top--];
//    }
//};
//int main()
//{
//    Stack s1;
//    try {
//        s1.push(11);
//        s1.push(22);
//        s1.push(33);
//        s1.push(44);
//        
//        cout<<"1: "<<s1.pop()<<endl;
//        cout<<"2: "<<s1.pop()<<endl;
//        cout<<"3: "<<s1.pop()<<endl;
//        cout<<"4: "<<s1.pop()<<endl;
//    }
//    catch(Stack::Range){
//        cout<<"Exception: Stack Full or Empty"<<endl;
//    }
//    cout<<"Arrive here after catch (or normal exit)"<<endl;
//    return 0;
//}


#include <iostream>
using namespace std;
const int MAX = 3;

class Stack{
private:
    int st[MAX];
    int top;
public:
    class Full{};
    class Empty{};
    Stack(){
        top = -1;
    }
    void push(int var){
        if(top >= MAX - 1)
            throw Full();
        st[++top] = var;
    }
    int pop(){
        if(top<0)
            throw Empty();
        return st[top--];
    }
};
int main()
{
    Stack s1;
    try {
        s1.push(11);
        s1.push(22);
        s1.push(33);
        s1.push(44);
        
        cout<<"1: "<<s1.pop()<<endl;
        cout<<"2: "<<s1.pop()<<endl;
        cout<<"3: "<<s1.pop()<<endl;
        cout<<"4: "<<s1.pop()<<endl;
    }
    catch(Stack::Full){
        cout<<"Exception: Stack Full"<<endl;
    }
    catch(Stack::Empty){
        cout<<"Exception: Stack Empty"<<endl;
    }
    return 0;
}