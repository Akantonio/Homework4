//
// Created by Adrian Antonio on 3/31/2021.
//

#ifndef HOMEWORK4_BOX_H
#define HOMEWORK4_BOX_H

#include <string>
#include <iostream>
class box {
public:
    box();
    box(int x,int y);
    int getWidth() const;
    int getHeight()const;
    void setWidth(int x);
    void setHeight(int y);
    virtual void print(std::ostream&os)=0;
    virtual std::string type()const=0;
private:
    int _width;
    int _height;
};

class FilledBox: public box {
public:
    using box::box;
    FilledBox();
    virtual void print(std::ostream & os)override;
    virtual std::string type()const override;
private:
};

class HollowBox: public box{
public:
    using box::box;
    HollowBox();
};

class CheckeredBox : public box{

};

#endif //HOMEWORK4_BOX_H
