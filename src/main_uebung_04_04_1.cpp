#include <iostream>

void ausgabeMeinArray(int array[], int laenge)
{
  for (int i = 0; i < laenge; i++)
  {
    std::cout << "array value of index " << i << " equals: " << array[i] << std::endl;
  }
  return;
}

int main()
{
  int my_array[5] = {};
  my_array[0] = 54;
  my_array[1] = 45;
  my_array[2] = 23;
  my_array[3] = 67;
  my_array[4] = 42;

  ausgabeMeinArray(my_array, 5);
  return 0;
}