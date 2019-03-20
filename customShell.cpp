#include <iostream>

static double VERSION = 1.3;

#include "version.cpp"


// Ive added a comment
int main(int argc, char* argv[])
{
    displayVersion();
    std::cout << "Custom shell" << std::endl;
    return EXIT_SUCCESS;
}
