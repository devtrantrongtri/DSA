#ifndef ELEMENT1_H
#define ELEMENT1_H

#pragma once

class element1
{
public:
    element1();
    element1(int val,int val2){data = val;muso= val2;pointer = nullptr;};
    // setter and getter
    void setPointer(element1* val){pointer = val;}
    void setData(int val){data = val;}
    int getData(){return data;}
    void setmuso(int val){muso = val;}
    int getmuso(){return muso;}
    element1* getPointer(){return pointer;}
    
    ~element1();

private:
    int data ;
    int muso;
    element1* pointer;

};

#endif