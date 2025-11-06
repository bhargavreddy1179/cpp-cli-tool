#include <iostream>

int main(int argc, char *argv[]) {

    std::cout << "Program name: " << argv[0] << std::endl;

    if (argc > 1) {
        std::cout << "You have provided " << argc - 1 << " arguments" << std::endl;
        for (int i = 1; i < argc; i++ ) {
            std::cout << "Argument " << i << " : " << argv[i] << std::endl;
        }
    } else {
        std::cout << "No arguments were found" << std::endl;
    }
    return 0;
}