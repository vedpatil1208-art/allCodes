#include <iostream>
using namespace std;

class shape {
    public:
        void draw() {
            cout << "Drawing shape" << endl;

        }
};

class Rectangle : public shape {
public:
    float length, breadth;
    void area() {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r;
    r.draw();
    r.area();
    return 0;   
};  
