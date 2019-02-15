#include <iostream>
int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  height = height * height;
  // Now ask the user for their weight and calculate BMI
 
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;
  bmi = weight / height;
  std::cout << "Your bmi is " << bmi << ".\n you rock !\n";
  
  return 0;

}
