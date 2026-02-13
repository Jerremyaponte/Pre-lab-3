#include "Libraries.hpp"

// class Rectangle {
//     private:

//     double length;
//     double width;

//     public:

//     Rectangle(double l, double w) {
//         length = l;
//         width = w;
//     }

//     double area() {
//         return length * width;
//     }

//     double perimeter() {
//         return 2 * (length + width);
//     }

// };

// int main() {
//     Rectangle rect(5, 3);

//     cout << "Area;" << rect.area() << endl;
//     cout << "Perimeter: " << rect.perimeter() << endl;

//     return 0;
// }

class Car {
private:
    int year;
    string make;
    int speed;

public:
    Car(int y, string m) {
        year = y;
        make = m;
        speed = 0;
    }
    int getYear() {
        return year;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;

        if (speed < 0)
            speed = 0;
    }
};