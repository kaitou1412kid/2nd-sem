#include <iostream>

using namespace std;

/*
class A{

    int a,b;

public:
    int sum(int a, int b){
        return a+b;
    }
    
};

class B:public A{
    
};

class C:private A{
    
};

int main()
{
    B objb;
    C objc;
    cout<<objb.sum(2,3)<<endl;
    cout<<objc.sum(2,3)<<endl;
}*/


class Base{
    int x;
public:
    // default constructor 
    Base(){
        cout<<"Base default constructor"<<endl;
    } Base(int a){
        cout<<"Kritagya"<<endl;
    }
    
};

class Derived:public Base{
    int y;
public:
    //default constructor
    Derived(){
        cout<<"Derived default constructor"<<endl;
    }
    // parameterized constructor
    Derived(int a){
        cout<<"Derived parameterized constructor"<<endl;
    }
};

int main(){
    Base b;
    Base b1(3);
    Derived d2;
    Derived d1(2);
    return 0;
}