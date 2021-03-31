//
// Created by Adrian Antonio on 3/31/2021.
//

#include "box.h"

box::box(int x, int y): _width(x), _height(y) {

}

int box::getWidth() const {
    return _width;
}

int box::getHeight() const {
    return _height;
}
