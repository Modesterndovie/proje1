#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle() : length(0), width(0) {
}
Rectangle::~Rectangle() {
    // No dynamic memory used, so just leave it empty
}


void Rectangle::setLength(float len) {
 length = len;
}


void Rectangle::setWidth(float wid) {
width = wid;
}


float Rectangle::getLength() const {
return length;
}


float Rectangle::getWidth() const {
return width;
}


float Rectangle::calculateArea() const {
return length * width;
}

