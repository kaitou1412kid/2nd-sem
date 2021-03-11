// primitive to user defined
/*#include <iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    Complex(){}
    Complex(int k){
        a = k;
        b = 0;
    }
    void setdata(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"a:"<<a<<"b:"<<b<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setdata(10,20);
    c1.showData();
    int x = 5;
    c1 = x;
    c1.showData();
    return 0;
}*/


// constructor are used


// USer defined to primitive data types
// casting operator is used
/*#include <iostream>
using namespace std;
class Complex {
private:
    int a,b;
public:
    void setData(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"a:"<<a<<"b:"<<b<<endl;
    }
    operator int(){                     // casting operator
        return (a);
    }
};

int main(){
    Complex c1;
    c1.setData(3,5);
    c1.showData();
    int x;
    x = c1;
    cout<<"After type conversion: "<<x<<endl;
    return 0;
}*/


//program to illustrate class to basic and class to class conversion

#include <iostream>
using namespace std;

class one{
    int code,items;
    float price;
public:
    one(int c, int i, int p){
        code = c;
        items = i;
        price = p;
    }
    void showdata(){
        cout<<"\n CODE= "<<code;
        cout<<"\n ITEMS= "<<items;
        cout<<"\n VALUE= "<<price;
    }
    int getcode(){
        return code;
    }
    int getitems(){
        return items;                    
    }
    int getprice(){
        return price;
    }
    operator float(){                   //class to basic conversion, returns float value
        return items*price;
    }
}; // end of class now

class two {
    int code;
    float value;
public:
    two(){
        code = 0;
        value = 0;
    }
    two(int x, float y){
        code = x;
        value = y;
    }
    void showdata(){
        cout<<"\n CODE= "<<code;
        cout<<"\n VALUE= "<<value;
    }
    two(one obj1){
        code = obj1.getcode();
        value = obj1.getitems()*obj1.getprice();
    }
};

int main(){
    one ob1(1000,20,150);
    float tot_value;
    two ob2;
    tot_value=ob1;  // invokes operator function of class one
    
    ob2 = one(ob1); // conversion from class two to class one
    
    cout<<"\n item from class one ";
    ob1.showdata();
    cout<<"\n VALUE= "<<tot_value;
    cout<<"item from class two ";
    ob2.showdata();
    return 0;
}