//#include <iostream>
//
//using namespace std;
//
//class where{
//private:
//    char charray[10]; //occupies 10 bytes
//public:
//    void reveal(){
//        cout<<"\nMy object's address is "<<this;
//    }
//};
//
//int main()
//{
//    where w1,w2,w3;  //make three objects
//    w1.reveal();    // see where they are
//    w2.reveal();
//    w3.reveal();
//    cout<<endl;
//    return 0;
//}


// accessing member data with THIS

//#include <iostream>
//
//using namespace std;
//
//class what{
//private:
//    int alpha;
//public:
//    void tester(){
//        this->alpha = 11;   // same as alpha= 11
//        cout<<this->alpha;  // same as cout<<alpha;
//    }
//};
//
//int main(){
//    what w;
//    w.tester();
//    cout<<endl;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class alpha{
//private:
//    int data;
//public:
//    alpha(){}
//    alpha(int d){
//        data=d;
//    }
//    void display(){
//        cout<<data;
//    }
//    alpha& operator = (alpha& a){
//        data = a.data;
//        cout<<"\nAssignment operator invoked";
//        return *this;
//    }
//};
//
//int main(){
//    alpha a1(37);
//    alpha a2,a3;
//    
//    a3=a2=a1;
//    cout<<"\na2=";a2.display();
//    cout<<"\na3=";a3.display();
//    cout<<endl;
//    return 0;
//}

#include <iostream>
using namespace std;

int abs(int x){
    if (x >= 0)
        return x;
    else
        return -(x);
}

int main(){
    int a;
    cout<<"Enter a nunber :";
    cin>>a;
    cout<<"absolute value is "<<abs(a)<<endl;
}