#include "regular.h"
#include <iostream>

int main() {
  std::string reg;
  std::cin >> reg;
  char ch;
  std::cin >> ch;
  size_t need;
  std::cin >> need;
  std::cout << Answer(reg, ch, need) << '\n';
}