#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    void area() {
        cout << "Enter radius: ";
        cin >> radius;

        cout << "Area = " << 3.14 * radius * radius;
    }
};

int main() {
    Circle c;   // object
    c.area();   // function call

    return 0;
}