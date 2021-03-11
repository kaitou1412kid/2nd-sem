#include <iostream>
using namespace std;
int *create_array(size_t size, int init_value = 0){
    int *new_storage = {nullptr};
    new_storage = new int[size];
    for (size_t i{0}; i<size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int *const array, size_t size){
    for (size_t i {0};i<size;++i)
        cout<<array[i]<<"";
    cout<<endl;
}
