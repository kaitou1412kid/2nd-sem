//#include <iostream>
//using namespace std;
//
//template <class T>
//T abs(T n){
//    return (n<0) ? -n : n;
//}
//
//int main()
//{
//    int int1 = 5;
//    int int2 = -6;
//    long lon1 = 70000L;
//    long lon2 = -80000L;
//    double dub1 = 9.95;
//    double dub2 = -10.15;
//    
//    cout<<"\nabs("<<int1<<")="<<abs(int1);
//    cout<<"\nabs("<<int2<<")="<<abs(int2);
//    cout<<"\nabs("<<lon1<<")="<<abs(lon1);
//    cout<<"\nabs("<<lon2<<")="<<abs(lon2);
//    cout<<"\nabs("<<dub1<<")="<<abs(dub1);
//    cout<<"\nabs("<<dub2<<")="<<abs(dub2);
//    cout<<endl;
//    return 0;
//}


// function template for multiple arguments

#include <iostream>
using namespace std;

// function returns index number of item, or -1 if not found
template <class atype>
int find(atype* array, atype value, int size){
    for(int j=0; j<size; j++)
        if(array[j]==value)
            return j;
    return -1;
}

char chrArr[]={1,3,5,9,11,13}; // array
char ch = 5; // value to find
int intArr[] = {1,3,5,9,11,13};
int in = 6;
long lonArr[] = {1L,3L,5L,9L,11L,13L};
long lo = 11L;
double dubArr[] = {1.0,3.0,5.0,9.0,11.0,13.0};
double db = 4.0;

int main(){
    cout<<"\n 5 in chrArray: index="<<find(chrArr,ch,6);
    cout<<"\n 6 in intArray: index="<<find(intArr,in,6);
    cout<<"\n 11 in lonArrat: index="<<find(lonArr,lo,6);
    cout<<"\n 4 in dubArray: index="<<find(dubArr,db,6);
    cout<<endl;
    return 0;
}
