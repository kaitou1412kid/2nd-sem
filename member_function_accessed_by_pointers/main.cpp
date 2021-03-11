//#include <iostream>
//
//using namespace std;
//
//class Base{
//public:
//    void show(){
//        cout<<"Base\n";
//    }
//};
//
//class Derv1:public Base{
//public:
//    void show(){
//        cout<<"Derv1\n";
//    }
//};
//
//class Derv2:public Base{
//public:
//    void show(){
//        cout<<"Derv2\n";
//    }
//};
//
//int main()
//{
//    Derv1 dv1;
//    Derv2 dv2;
//    Base* ptr;
//    ptr = &dv1;
//    ptr ->show();
//    ptr = &dv2;
//    ptr ->show();
//    return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//class Base{
//public:
//    virtual void show(){
//        cout<<"Base\n";
//    }
//};
//
//class Derv1:public Base{
//public:
//    void show(){
//        cout<<"Derv1\n";
//    }
//};
//
//class Derv2:public Base{
//public:
//    void show(){
//        cout<<"Derv2\n";
//    }
//};
//
//int main()
//{
//    Derv1 dv1;
//    Derv2 dv2;
//    Base* ptr;
//    ptr = &dv1;
//    ptr ->show();
//    ptr = &dv2;
//    ptr ->show();
//    return 0;
//}


#include <iostream>

using namespace std;

class Base{
public:
    virtual void show() = 0; // pure virtual function
};

class Derv1:public Base{
public:
    void show(){
        cout<<"Derv1\n";
    }
};

class Derv2:public Base{
public:
    void show(){
        cout<<"Derv2\n";
    }
};

int main(){
    //Base bad; // Cannot make objects from base call
    Base* arr[2]; // array pointer to base class
    Derv1 dv1; // objects of derived 1
    Derv2 dv2; // Objects of derived 2
    arr[0] = &dv1; // put the address of dv1 in array
    arr[1] = &dv2; // put the address of dv2 in array
    arr[0]->show(); // execute show() in one object
    arr[1]->show(); // execute show() in another object
    return 0;
}