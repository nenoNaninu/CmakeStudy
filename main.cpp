#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int num = 0;
    for(int i = 0; i < 10;i++)
    {
        num += i;
    }

    std::cout<< num << std::endl;
    return 0;
}