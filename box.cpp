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

std::ostream &operator<<(std::ostream& os,const box& b) {
    b.print(os);
    return os;
}

FilledBox::FilledBox():box(1,1) {

}

void FilledBox::print(std::ostream &os)const {
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

void HollowBox::print(std::ostream &os)const {
    for(int j=0;j<getHeight();j++){
        if(j==0||(j+1)==getHeight()) {
            for (int i = 0; i < getWidth(); i++) {
                os << "x";
            }
        }else{
            for(int i=0;i<getWidth();i++){
                if(i==0||i==getWidth()-1){
                    os << "x";
                }else{
                    os<< " ";
                }
            }
        }
        os<<"\n";
    }
}

std::string HollowBox::type() const {
    return "Hollow";
}

CheckeredBox::CheckeredBox() {

}

std::string CheckeredBox::type() const {
    return std::__cxx11::string();
}

void CheckeredBox::print(std::ostream& os)const {
    for(int j=0;j<getHeight();j++){
        if(j % 2==0) {
            for (int i = 0; i < getWidth(); i++) {
                if (i % 2 == 0) {
                    os << "x";
                } else {
                    os << " ";
                }
            }
        }else{
            for (int i = 0; i < getWidth(); i++) {
                if (i % 2 == 0) {
                    os << " ";
                } else {
                    os << "x";
                }
            }
        }
        os<<"\n";
    }

}
