#include <iostream>

using namespace std;

class Circle {
private:
    int radius;
    float pi = 3.14;
public:
    void getRadius(){
        cout<<"Enter the radius of the circle: ";
        cin>> radius;
    }
    void area(){
        float area;
        area = pi * radius * radius;
        cout<<"The area is "<<area<<endl;
    }
};

int main()
{
    Circle c1;
    c1.getRadius();
    c1.area();
    return 0;
}

/*class Circle{
private:
    const float pi = 3.14;
public:
    Circle(int x){
        cout<<"Area is: "<<pi*x*x<<endl;
    }
};

int main(){
    Circle c1(2);
}*/
