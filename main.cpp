#include <iostream>
#include "add.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    int sum = add(1, 3);
    std::cout << "1 + 3 = "<<sum << std::endl;
    return 0;
}
