#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
Rectangle rect; //creating an object named rect
float length;
float width ;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the width of the rectangle: ";
cin >> width;
rect.setWidth(width); 
rect.setLength(length); 

cout << "The area of the rectangle is: " << rect.calculateArea()<< endl;

return 0;

}