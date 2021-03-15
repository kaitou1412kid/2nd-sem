//
//#include <iostream>
//
//using namespace std;
//class gamma{
//private:
//    static int total; //total objects of this class
//    // (declaration only)
//    int id; // ID number of this object
//public:
//    gamma(){ //no argument constructor
//        total++; // add another object
//        id = total; // id equals current total
//    }
//    ~gamma(){ // destructor
//        total--;
//        cout<<"Destroying ID number"<<id<<endl;
//    }
//static void showtotal(){ //static function
//    cout<<"Total is " <<total<<endl;
//}
//void showid() // non-static function
//{
//    cout<<"ID number is "<<id<<endl;
//}
//};
//
//int gamma::total = 0; // defination of total
//
//int main()
//{
//    gamma g1;
//    gamma::showtotal();
//    gamma g2,g3;
//    gamma::showtotal();
//    g1.showid();
//    g2.showid();
//    g3.showid();
//    cout<<"---------end of program----------\n";
//    return 0;
//}


#include <iostream>

using namespace std;

class alpha{
private:
    int data;
public:
    alpha(){} // no-arg constructor
    alpha(int d)    // one-arg constructor
    {
        data = d;
    }
    void display()  // display data
    {
        cout<<data;
    }
    alpha operator = (alpha& a) // overload = operator
    {
        data = a.data;      // not done automatically
        cout<<"\nAssignment operator invoked";
        return alpha(data); // return copy of this alpha
    }
};

int main(){
    alpha a1(37);
    alpha a2;
    a2 = a1;                            // invoke overload =
    cout<<"\na2="; a2.display();        // display a2
    
    alpha a3 = a2;                      // does NOT invoke
    cout<<"\na3="; a3.display();        // display a3
    cout<<endl;
    return 0;
}