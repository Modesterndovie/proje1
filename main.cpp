#include <iostream>
#include "Person.h"
int main(){
    Person jane = Person("Jane", 60.0f);
    Person john = Person("john", 75.0f);
    float totalWeight = jane + john;
    cout << "Total weight:" << endl;
    return 0;

}