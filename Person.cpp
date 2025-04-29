#include <iostream>
#include "Person.h"

Person::Person() : mFirstName(""), mWeight(0.0f), mAge(0) {}

Person::Person(const string& firstName, float weight, int age)
: mFirstName(firstName), mWeight(weight), mAge(age) {}


Person::~Person() {

}

float Person::operator+(const Person& otherPerson) const {
return this->mWeight + otherPerson.mWeight;
}

// Overload the equality operator
bool Person::operator==(const Person& otherPerson) const {
return this->mFirstName == otherPerson.mFirstName;
}

// Overload the inequality operator
bool Person::operator!=(const Person& otherPerson) const {
return !(*this == otherPerson);
}

// Overload the less-than operator based on age
bool Person::operator<(const Person& otherPerson) const {
return this->mAge < otherPerson.mAge;
}

// Overload the greater-than operator based on age
bool Person::operator>(const Person& otherPerson) const {
return this->mAge > otherPerson.mAge;
}

// Conversion operator to convert Person to int for age
Person::operator int() {
return mAge;
}

// Conversion operator to convert Person to string for first name
Person::operator string() {
return mFirstName;
}

// Conversion operator to convert Person to float for weight
Person::operator float()  {
return mWeight;
}