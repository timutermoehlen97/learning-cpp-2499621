#include <iostream>

bool test_int_values(int var1, int var2, int var3)
{
  return (var1 < var2) && (var2 < var3);
}

int main()
{
  std::cout << "This should be true with var1=1 < var2 = 2 and var2 < var3 = 3 -> " << std::boolalpha << test_int_values(1, 2, 3) << std::endl;
  std::cout << "This should be false with var1=1 < var2 = 2 and var2 not smaller than var3 = 2 -> " << std::boolalpha << test_int_values(1, 2, 2) << std::endl;
  return 0;
}