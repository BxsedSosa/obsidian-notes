#include <iostream>

int main() {
  int num1, num2, num3;

  std::cout << "Enter three numbers: ";
  std::cin >> num1 >> num2 >> num3;

  std::cout << "You entered " << num1 << ", " << num2 << ", and " << num3
            << ".\n";
  return 0;
}
