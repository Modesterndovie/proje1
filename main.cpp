include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

using namespace std;

int main() {
char choice;

do {
cout << "Select an option:\n";
cout << "1. Calculate the area of a square\n";
cout << "2. Calculate the area of a triangle\n";
cout << "3. Calculate the area of a circle\n";
cout << "4. Quit\n";
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
case '1': {
double sideLength;
cout << "Enter the side length of the square: ";
cin >> sideLength;
shapes::Square square(sideLength);
cout << "Area of square: " << Area::calculateArea(square) << endl;
break;
}
case '2': {
double base, height;
cout << "Enter base and height of the triangle: ";
cin >> base >> height;
shapes::Triangle triangle(base, height);
cout << "Area of triangle: " << Area::calculateArea(triangle) << endl;
break;
}
case '3': {
double radius;
cout << "Enter the radius of the circle: ";
cin >> radius;
shapes::Circle circle(radius);
cout << "Area of circle: " << Area::calculateArea(circle) << endl;
break;
}
case '4':
cout << "Exiting program." << endl;
break;
default:
cout << "Invalid choice. Please try again." << endl;
break;
}
} while (choice != '4');

return 0;
};