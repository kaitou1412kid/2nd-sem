//#include <iostream>
//
//using namespace std;
//
//class Base{
//public:
//    ~Base(){cout<<"Non virtual destroyed\n";}
//};
//
//class Derv:public Base{
//public:
//    ~Derv(){cout<<"Derv destroyed\n";}
//};
//int main()
//{
//    Base* pBase = new Derv;
//    delete pBase;
//    return 0;
//}

// virtual distructor

//#include <iostream>
//
//using namespace std;
//
//class Base{
//public:
//    virtual ~Base(){cout<<"Non virtual destroyed\n";}
//};
//
//class Derv:public Base{
//public:
//    ~Derv(){cout<<"Derv destroyed\n";}
//};
//int main()
//{
//    Base* pBase = new Derv;
//    delete pBase;
//    return 0;
//}


// friend function
//#include <iostream>
//
//using namespace std;
//
//class beta;
//class alpha{
//private:
//    int data;
//public:
//    alpha():data(3){}
//    friend int frifunc(alpha, beta);
//};
//
//class beta{
//private:
//    int data;
//public:
//    beta():data(7){}
//    friend int frifunc(alpha,beta);
//};
//
//int frifunc(alpha a, beta b){
//    return (a.data + b.data);
//}
//
//int main(){
//    alpha aa;
//    beta bb;
//    cout<<frifunc(aa,bb)<<endl;
//    return 0;
//}


// friend class

//#include <iostream>
//
//using namespace std;
//
//class alpha{
//private:
//    int data1;
//public:
//    alpha():data1(99){}
//    friend class beta;
//};
//
//class beta{
//public:
//    void func1(alpha a){cout<<"\ndata1="<<a.data1;}
//    void func2(alpha a){cout<<"\ndata1="<<a.data1;}
//};
//
//int main(){
//    alpha a;
//    beta b;
//    b.func1(a);
//    b.func2(a);
//    cout<<endl;
//    return 0;
//    
//};

