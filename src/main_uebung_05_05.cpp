#include <iostream>
#include <cstdlib>
#include <ctime>

void check_for_user_win(int user_var, int computer_var)
{
  /*
    Schere = 0
    Stein = 1
    Papier = 2
  */
  if (user_var == computer_var)
  {
    std::cout << "Unentschieden!" << std::endl;
  }
  if (user_var == 0)
  {
    if (computer_var == 1)
    {
      std::cout << "Computer gewinnt!" << std::endl;
    }
    else
    {
      std::cout << "Spieler gewinnt!" << std::endl;
    }
  }
  else if (user_var == 1)
  {
    if (computer_var == 0)
    {
      std::cout << "Spieler gewinnt!" << std::endl;
    }
    else
    {
      std::cout << "Computer gewinnt!" << std::endl;
    }
  }
  else if (user_var == 2)
  {
    if (computer_var == 0)
    {
      std::cout << "Computer gewinnt!" << std::endl;
    }
    else
    {
      std::cout << "Spieler gewinnt!" << std::endl;
    }
  }
}

const char *convert_num_to_choice_str(int choice_num)
{
  if (choice_num == 0)
  {
    return "Schere";
  }
  else if (choice_num == 1)
  {
    return "Stein";
  }
  else if (choice_num == 2)
  {
    return "Papier";
  }
}
int main()
{
  int user_var;
  std::cout << "User wählt (0: Schere, 1: Stein, 2: Papier):  ";
  std::cin >> user_var;

  std::cout << "User hat " << convert_num_to_choice_str(user_var) << " gewählt" << std::endl;

  std::srand(std::time(0));
  int computer_var = std::rand() % 3;

  std::cout << "Computer hat " << convert_num_to_choice_str(computer_var) << " gewählt." << std::endl;

  check_for_user_win(user_var, computer_var);
  return 0;
}