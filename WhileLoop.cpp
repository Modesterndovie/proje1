#include <iostream>
using namespace std;

int main() {
int userInput;


cout << "Please enter an integer value between 5 and 10: ";


while (true) {
cin >> userInput;
if (cin.fail() || userInput < 5 || userInput > 10) {

cin.clear();

cin.ignore();
cout << "Invalid input. Please enter an integer value between 5 and 10: ";
} else {

break; 
}
}
cout << "Your input value " << userInput << " has been accepted." << endl;

return 0;
}