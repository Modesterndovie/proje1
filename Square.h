pragma once
using namespace std;

namespace shapes {
class Square {
private:
double sideLength;
public:
Square();
Square(double length);

double getSideLength() const;
void setSideLength(double length);
~Square();
};
}