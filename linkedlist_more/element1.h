#ifndef ELEMENT1_H
#define ELEMENT1_H

#pragma once

class element1
{
public:
    element1();
    element1(int val){data = val;pointer = nullptr;};
    // setter and getter
    void setPointer(element1* val){pointer = val;}
    void setData(int val){data = val;}
    int getData(){return data;}
    element1* getPointer(){return pointer;}
    
    ~element1();

private:
    int data ;
    element1* pointer;

};

#endif