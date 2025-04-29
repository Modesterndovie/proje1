#include <iostream>
using namespace std;
int main(){
    int* pPointers = nullptr;
    int numbersarray[3] = {10, 20, 30};
    pPointer = numbersarray;
    cout << "Address at pPointer:" << pPointer << endl;
    cout << "Address at pPointer:" << pPointer << endl;
    cout << "Address of numbersarray[0]:" << numbersarray << endl;
    cout << "value at pPointer:" << *pPointer << endl;
    cout << "value at ++pPointer:" << *(++pPointer) << endl;
    pPointer = numbersarray;
     cout << "value at ++pPointer:" << *(++pPointer) << endl;
     return 0;
    
}
