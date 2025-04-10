#include <iostream>

float calculate_complex_calculation(float value1, float value2)
{
  return (value1 + 2) * value2;
}

int main()
{
  std::cout << "Test calculation: " << calculate_complex_calculation(1, 3) << std::endl;
  return 0;
}