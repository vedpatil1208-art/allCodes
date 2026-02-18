#include <iostream>
using namespace std:

class Shape{
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};
class Rectangle : public Shape {
public:
    virtual void draw() {
        cout << "Drawing a rectangle" << endl; 
    }
};
