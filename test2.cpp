// Your First C++ Program

#include <iostream>     // std::cin, std::cout

int main () {
  char name[256], title[256];

  std::cout << "Please, enter your name: ";
  std::cin.getline (name,256);

  std::cout << "Please, enter your favourite movie: ";
  std::cin>>title;

  std::cout << name << "'s favourite movie is " << title;

  return 0;
}
