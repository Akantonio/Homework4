//
// Created by Adrian Antonio on 3/31/2021.
//

#include "Box.h"

Box::Box(): _width(1), _height(1){

}
Box::Box(int x, int y): _width(x), _height(y) {

}

int Box::getWidth() const {
    return _width;
}

int Box::getHeight() const {
    return _height;
}

void Box::setWidth(int x) {
    _width=x;
}

void Box::setHeight(int y) {
    _height=y;
}

std::ostream &operator<<(std::ostream& os,const Box& b) {
    b.print(os);
    return os;
}

std::unique_ptr<Box> boxFactory(char c, int w, int h) {
    switch (c) {
        case 'f':
            return std::make_unique<FilledBox>(w,h);
        case 'h':
            return std::make_unique<HollowBox>(w,h);
        case 'c':
            return std::make_unique<CheckeredBox>(w,h);
        default:
            throw std::runtime_error("Wrong parameter in boxFactory");
    }
}

FilledBox::FilledBox(): Box(1, 1) {

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

HollowBox::HollowBox(): Box(1, 1) {

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

CheckeredBox::CheckeredBox():Box(1,1) {

}

std::string CheckeredBox::type() const {
    return "Checkered";
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
