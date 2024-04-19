#include <iostream>
#include <cmath>
using namespace std;

//calculate area of square
double calculateSquareArea(double side) {
    return side * side;
}

//calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

//calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double side, length, width, base, height;

    while (true) {
        cout << "Please select area of the shape to calculate:" <<endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\nEnter selection: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) <<endl;
                break;
            case 2:
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) <<endl;
                break;
            case 3:
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case 4:
                cout << "Quitting program..." << endl;
                return 0;
            default:
                cout << "Your input was: " << choice << " which is an invalid input. Please enter a valid input!!!" <<endl;
                break;
        }
    }

    return 0;
}
