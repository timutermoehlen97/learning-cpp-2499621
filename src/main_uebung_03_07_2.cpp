#include <iostream>

int main()
{

  int variable_1 = 10;
  int variable_2 = 2;

  while (variable_2 <= variable_1)
  {
    variable_1 += 1;
    variable_2 += 2;
  }

  std::cout << "Value when variable two is greater than the first variable: " << variable_2 << std::endl;

  return 0;
}