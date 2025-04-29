#include <iostream>
using namespace std;
int main(){
    int* pPointer = nullptr;
    int intergervar = 5;
    pPointer = &intergervar;
    cout<< "intergervar:" << intergervar<<'\n';
    cout<< " address of intergervar:"  << &intergervar<<'\n';
    cout<< "pPointer:" << pPointer<<'\n';
    cout<< "address of pPointer:" << &pPointer<<'\n';
    return 0;
} 

