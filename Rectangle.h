#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangle {
private:
float length;
float width;

public:

Rectangle();
~Rectangle();

void setLength(float len);
void setWidth(float wid);


float getLength() const;
float getWidth() const;


float calculateArea() const;


    
};
