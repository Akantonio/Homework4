//
// Created by Adrian Antonio on 3/31/2021.
//

#ifndef HOMEWORK4_BOX_H
#define HOMEWORK4_BOX_H

#include <string>
#include <iostream>
class box {
public:
    box(int x,int y);
    int getWidth() const;
    int getHeight()const;
    void setWidth();
    void setHeight();
    virtual void print(std::ostream&os)=0;
    virtual std::string type()=0;
private:
    int _width;
    int _height;
};

class FilledBox: public box {

};

class HollowBox: public box{

};

class CheckeredBox : public box{

};

#endif //HOMEWORK4_BOX_H
