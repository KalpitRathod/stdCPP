#include <iostream>
#include <string>
using namespace std;

// Class Definition
class Car {
  public:            // Access specifier (accessible outside class)
    string brand;    // Attribute
    string model;    // Attribute
    int year;        // Attribute

    // Method (function inside class)
    void drive() {
      cout << "The " << brand << " is now driving!" << endl;
    }
};

int main() {
  // Create an Object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another Object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Accessing attributes and calling methods
  cout << carObj1.brand << " " << carObj1.model << " (" << carObj1.year << ")" << endl;
  carObj1.drive();

  cout << carObj2.brand << " " << carObj2.model << " (" << carObj2.year << ")" << endl;
  carObj2.drive();

  return 0;
}
