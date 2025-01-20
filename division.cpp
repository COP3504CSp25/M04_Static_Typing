#include <iostream>

int main() {
    int a = 9;
    int b = 5;

    double divide = a/b;

    std::cout << divide << std::endl;

    double casted_divide = static_cast<double>(a) / static_cast<double>(b);

    std::cout << casted_divide << std::endl;

    return 0;
}