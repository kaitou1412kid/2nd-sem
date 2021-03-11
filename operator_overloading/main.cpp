// class class_name {
    // data
    // functiom
    // constructor
    // operator
//};

#include <iostream>

using namespace std;

class Count{
private:
    int value;
public:
    // constructor to initialize count to 5
    Count(): value(5){}                     // value = 5;
    
    // constructor ++ when used as prefix
    Count operator ++ (){
        Count b;
        b.value = ++value;
        return b;
    }
    //operator int()
    //{
    //    return value;
    //}
    Count operator ++ (int){
        Count a;
        a.value = value++;
        return a;
    }
    void display(){
        cout<<"Count:"<<value<<endl;
    }
};

int main(){
    Count count1;
    
    // Call the "void operator ++ {}"function
    ++count1;
    count1++;
    
    Count result;
    result = count1++;
    result.display();
    //int result = count1;
    //cout<<result<<endl;
    //count1.display();
    return 0;
}