//
// Created by Adrian Antonio on 3/31/2021.
//

#ifndef HOMEWORK4_BOX_H
#define HOMEWORK4_BOX_H


class box {
public:
    box(int x,int y);
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
