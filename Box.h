//
// Created by Adrian Antonio on 3/31/2021.
//

#ifndef HOMEWORK4_BOX_H
#define HOMEWORK4_BOX_H

#include <string>
#include <iostream>
#include <memory>
class Box {
    friend std::ostream & operator<<(std::ostream& os,const Box & B);
public:
    Box();
    Box(int x, int y);
    int getWidth() const;
    int getHeight()const;
    void setWidth(int x);
    void setHeight(int y);
    virtual void print(std::ostream&os)const=0;
    virtual std::string type()const=0;
private:
    int _width;
    int _height;
};

class FilledBox: public Box {
public:
    using Box::Box;
    FilledBox();
    virtual void print(std::ostream & os)const override;
    virtual std::string type()const override;
private:
};

class HollowBox: public Box{
public:
    using Box::Box;
    HollowBox();
    virtual void print(std::ostream &os)const override;
    virtual std::string type()const override;
private:
};

class CheckeredBox : public Box{
public:
    using Box::Box;
    CheckeredBox();
    virtual void print(std::ostream &os)const override;
    virtual std::string type()const override;
};

std::unique_ptr<Box>

#endif //HOMEWORK4_BOX_H
