#include <iostream>
using namespace std;


double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
int choice;

while (true) {

cout << "Select a shape to calculate the area:" << endl;
cout << "1. Triangle" << endl;
cout << "2. Rectangle" << endl;
cout << "3. Square" << endl;
cout << "4. Quit" << endl;
cout << "Enter your choice (1-4): ";
cin >> choice;


if (cin.fail() || choice < 1 || choice > 4) {
cin.clear(); 
cin.ignore(); 
cout << "Invalid input. Please enter a number between 1 and 4." << endl;
continue; 
}


if (choice == 1) {
double base, height;
cout << "Enter the base of the triangle: ";
cin >> base;
cout << "Enter the height of the triangle: ";
cin >> height;
cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
} else if (choice == 2) {
double length, width;
cout << "Enter the length of the rectangle: ";
cin >> length;
cout << "Enter the width of the rectangle: ";
cin >> width;
cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
} else if (choice == 3) {
double side;
cout << "Enter the side of the square: ";
cin >> side;
cout << "The area of the square is: " << calculateSquareArea(side) << endl;
} else if (choice == 4) {
cout << "Exiting the program." << endl;
break; 
}
}

return 0;
}


double calculateTriangleArea(double base, double height) {
return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
return length * width;
}

double calculateSquareArea(double side) {
return side * side;
}