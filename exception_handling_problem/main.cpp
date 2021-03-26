#include <iostream>
using namespace std;

class Num{
private:
    int a,b;
public:
    class CompError{};
    void _a(){
        cout<<"Enter a number: "; 
        cin>>a;
    }
    void _b(){
        cout<<"Enter a second number: ";
        cin>>b;
    }
    void comp(){
        if(a<0 || b<0)
            throw CompError();
        else if (a>b)
            cout<<a<<" is greater than "<<b<<endl;
        else if (b>a)
            cout<<b<<" is greater than "<<a<<endl;
        else
            cout<<a<<" and "<<b<<" are equal"<<endl;
    }
    void add(){
        if(a<0 || b<0)
            throw CompError();
        else 
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};
int main()
{
    Num n1;
    try {
        n1._a();
        n1._b();
        n1.comp();
        n1.add();
    }
    
    catch(Num::CompError){
        cout<<"A number is negative"<<endl;
    }
    return 0;
}
