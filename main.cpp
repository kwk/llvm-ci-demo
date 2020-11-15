#include <iostream>

#ifndef GREETING
    #define GREETING "Hello World!"
#endif

int main(int argc, char * argv[]) {
    std::cout << GREETING << std::endl;
    return 0;
} 