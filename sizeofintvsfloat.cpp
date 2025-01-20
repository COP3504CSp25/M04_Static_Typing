#include <iostream>
#include <limits>

int main() {
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Precision of int: " << std::numeric_limits<int>::digits10 << " decimal digits" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Precision of float: " << std::numeric_limits<float>::digits10 << " decimal digits" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Precision of double: " << std::numeric_limits<double>::digits10 << " decimal digits" << std::endl;

    return 0;
}
