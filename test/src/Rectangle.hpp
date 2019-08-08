#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.hpp"
#include "a.h"
#include <stdint.h>

typedef enum Weekday{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
}Weekday_e;

namespace shapes {
    namespace aaa {
        const int i = 100;
    }
    class Rectangle : public Shape
    {
        public:
            static Rectangle* hello();
            bool flag = false;
            int arg = aaa::i;
            int x0, y0, x1, y1;
            Rectangle();
            Rectangle(int32_t x0, int32_t y0, int32_t x1, int32_t y1);
            ~Rectangle();
            int getArea();
            void getSize(int32_t& width, int32_t& height);
            void move(int dx, int dy);
            void dayin();
            void getShape();
        private:
            static Rectangle* rect;
    };
}

#endif