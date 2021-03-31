//
// Created by Adrian Antonio on 3/31/2021.
//

#include "box.h"

box::box():_width(1),_height(1){

}
box::box(int x, int y): _width(x), _height(y) {

}

int box::getWidth() const {
    return _width;
}

int box::getHeight() const {
    return _height;
}

void box::setWidth(int x) {
    _width=x;
}

void box::setHeight(int y) {
    _width=y;
}

FilledBox::FilledBox():box(1,1) {

}

void FilledBox::print(std::ostream &os) {
    for(int i=0;i<getHeight();i++){
        for(int i=0;i<getWidth();i++) {
            os << "x";
        }
        os<<"\n";
    }
}

std::string FilledBox::type() const  {
    return "Filled";
}

HollowBox::HollowBox():box(1,1) {

}
