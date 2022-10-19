#include <iostream>
#include "regular.h"

int main() {
   std::string reg;
    std::cin >> reg;
    char ch;
    std::cin >> ch;
    size_t need;
    std::cin >> need;
   (reg, ch, need);
    std::cout << Answer(reg, ch, need) << '\n';
}