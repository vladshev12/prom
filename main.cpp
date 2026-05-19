#include <iostream>
const double PI = 3.14159;
double calculateRectangleArea(double width, double height) {
    return width * height;
}
double calculateCircleArea(double radius) {
    return PI * radius * radius;
}
int main() {
    std::cout << "=== Геометрический калькулятор ===" << std::endl;
    double w = 5.0, h = 10.0;
    std::cout << "Площадь прямоугольника (" << w << "x" << h << "): " 
              << calculateRectangleArea(w, h) << std::endl;
    double r = 8.5;
    std::cout << "Площадь круга (r=" << r << "): " 
              << calculateCircleArea(r) << std::endl;
              
    return 0;
}