#include <iostream>

// 1C =  33.8F,
// 2C = 35.6F
// 3C = 37.4
// 1C is equal to 1.8 F

// We take 3 parameters
// 1. Start temp
// 2. end temp
// 3. step size

// Print out table that goes from 1st value (start temp) to the end temp with
// provided step You don't have to print final step if does not match exactly.

// input validation: start value can not be lower then 0 and start value and
// value should be const

double convert(double const C);

const double baseTemp = 33.8;
const double increase = 1.8;

int main() {

  double const minValue = 1;
  double const maxValue = 50000;
  double lowerValue = 0;
  double upperValue = 0;

  int step = 0;
  if (minValue > lowerValue || maxValue < lowerValue) {
    std::cout << "Please provide 2 values, start value that is >= 0  and upper "
                 "value that is less then 5000: \n";
    std::cout << "Lower value: ";
    std::cin >> lowerValue;
    std::cout << "and upper: ";
    std::cin >> upperValue;
    std::cout << "please provide step (int only): ";
    std::cin >> step;
  }

  std::cout << "Temp in Celsius: "
            << " Temp in Fahrenheit: \n";
  for (int i = lowerValue; i <= upperValue; i += step) {

    std::cout << i << "C    is   " << convert(i) << "F" << '\n';
  }

  return 0;
}

double convert(double const C) {

  return ((C - 1) * increase) + baseTemp; // -1 is to offset conversion
}