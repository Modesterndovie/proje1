#include <iostream>
#include <string>
using namespace std;
int main() { 
    string arrays;
   string arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
   int size = sizeof(arr),"<< sizeof(arr[0])<< endl; 
   cout << "Elements that start with the letter 'B':" << endl;
   for (int i = 0; i < size; i++) {
   if (arr[i][0] == 'B') {

   cout << arr[i] <<  endl;
   }
   }

   return 0;
}

