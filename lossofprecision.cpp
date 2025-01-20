#include <iostream>
#include <iomanip>

int main() {
    int largeInt = INT_MAX; // Maximum value for an integer (2147483647)
    float floatValue = INT_MAX;
    double doubleValue = INT_MAX;
    std::cout << std::setprecision(10) << "Integer: " << largeInt << std::endl;
    std::cout << std::setprecision(10) << "Float: " << floatValue << std::endl;
    std::cout << std::setprecision(15) << "Double: " << doubleValue << std::endl;
    return 0;
}