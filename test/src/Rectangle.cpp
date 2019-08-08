#include <iostream>
#include "Rectangle.hpp"

#include "a.h"

using namespace std;

namespace shapes {

    Rectangle* Rectangle::rect = nullptr;
    // Default constructor
    Rectangle::Rectangle () {
        cout << "this is instructor" << endl;
    }

    // Overloaded constructor
    Rectangle::Rectangle (int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
        this->x0 = x0;
        this->y0 = y0;
        this->x1 = x1;
        this->y1 = y1;
    }

    // Destructor
    Rectangle::~Rectangle () {
        cout << "this is destructor" << endl;
    }

    // Return the area of the rectangle
    int Rectangle::getArea () {
        return (this->x1 - this->x0) * (this->y1 - this->y0);
    }

    // Get the size of the rectangle.
    // Put the size in the pointer args
    void Rectangle::getSize (int32_t& width, int32_t& height) {
        width = x1 - x0;
        height = y1 - y0;
    }

    // Move the rectangle by dx dy
    void Rectangle::move (int dx, int dy) {
        this->x0 += dx;
        this->y0 += dy;
        this->x1 += dx;
        this->y1 += dy;
        cout << "position:" << x0 << y0 << x1 << y1 << endl;

    }

    void Rectangle::dayin() {
         a();
         cout << "test" << aaa::i << arg << flag << endl;
         cout << "enum" << TUE << endl;
    }

    void Rectangle::getShape() {
        cout << "this is child reactangle" << endl;
    }

    Rectangle* Rectangle::hello() {
        cout << "this is static method" << endl;
        rect = new Rectangle;
        return rect;
    }

}
//
//int main()
//{
//    shapes::aaa::Rectangle rect(1, 5, 5, 10);
//    rect.dayin();
//    a();
//    return 0;
//}