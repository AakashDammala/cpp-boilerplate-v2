#include <iostream>
#include <math.h>
#include <string>

/**
* @brief Main function of problem9_5 app - Contains the code from the book,
* converted to c++, and fixed

Changes made:
1. Updated the if else condition to capture all 3 cases correctly '=0', '<0'
and '>0' cases respectively
2. Updated the logic using newton raphson method, and refactored the code

* @return int
*/
int main(int argc, char *argv[]) {
  // get inpput from the user
  if (argc != 2) {
    std::cout << "Error: Please enter the program in this format "
                 "'./build/app/problem9_5 -16.127'"
              << std::endl;
    return 0;
  }

  double input_num = static_cast<double>(std::stod(argv[1]));
  std::cout << "Calculating the square root of the absolute value of: "
            << input_num << std::endl;

  if (input_num == 0) {
    std::cout << 0.0 << std::endl;
  } else {
    if (input_num < 0)
      input_num *= -1.0; // get the absolute value of the number if it is -ve

    double sqrt = input_num;
    double prev_sqrt;
    const double EPSILON(1e-15);

    // Continue Newton-Raphson formula until difference is within EPSILON
    do {
      prev_sqrt = sqrt;
      sqrt = 0.5 * (sqrt + (input_num / sqrt));
    } while (std::abs(sqrt - prev_sqrt) > EPSILON);

    std::cout << sqrt << std::endl;
  }

  return 0;
}