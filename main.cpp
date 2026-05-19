#include <iostream>

double calculateRectangleArea(double width, double height) {
    return width * height;
}

int main() {
    std::cout << "=== Геометрический калькулятор ===" << std::endl;
    
    double w = 5.0, h = 10.0;
    std::cout << "Площадь прямоугольника (" << w << "x" << h << "): " 
              << calculateRectangleArea(w, h) << std::endl;
              
    return 0;
}