#include <iostream>

/**
Problem 9.4
From the following function printPosition(), extract a new function that returns
the position of the beginning of a given string in a given text.
 */

/**
 * @brief Original 'printPosition' function before refactoring
 *
 */
void printPosition() {
  char text[1024] = "1234567890";
  int text_length = 10;
  char array_to_search1[4] = "23";
  int array_to_search1_length = 2;
  int i, j;
  int position1 = -1;
  for (i = 0; i < text_length - array_to_search1_length + 1; i++) {
    bool found = true;
    for (j = 0; j < array_to_search1_length; j++)
      if (text[i + j] != array_to_search1[j])
        found = false;

    if (found) {
      position1 = i;
      break;
    }
  }
  std::cout << position1;
}

/**
 * @brief Finds the position of the sub array in the given array
 *
 * @param text Array to search in
 * @param text_length Array length
 * @param array_to_search1 Sub array
 * @param array_to_search1_length Sub array length
 * @return int - Position of sub_array in array
 */
int findPositionInString(char *text, const int text_length,
                         char *array_to_search1,
                         const int array_to_search1_length) {

  int i, j;
  int position1 = -1;
  for (i = 0; i < text_length - array_to_search1_length + 1; i++) {
    bool found = true;
    for (j = 0; j < array_to_search1_length; j++)
      if (text[i + j] != array_to_search1[j])
        found = false;

    if (found) {
      position1 = i;
      break;
    }
  }

  return position1;
}

/**
 * @brief Refactored 'printPosition' function, with 'findPositionInString' taken
 * out
 *
 */
void printPositionRefactored() {
  char text[1024] = "1234567890";
  int text_length = 10;
  char array_to_search1[4] = "23";
  int array_to_search1_length = 2;

  int position1 = findPositionInString(text, text_length, array_to_search1,
                                       array_to_search1_length);
  std::cout << position1;
}

/**
 * @brief Main function of the problem9_4 app
 *
 * @return int
 */
int main() {
  std::cout << ">> Problem 9.4" << std::endl;
  std::cout << "Output of original 'printPosition' function: ";
  printPosition();
  std::cout << std::endl;

  std::cout << "Output of 'printPositionRefactored' function: ";
  printPositionRefactored();
  std::cout << std::endl;

  return 0;
}