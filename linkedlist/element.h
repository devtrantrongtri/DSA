#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#pragma once

class element
{
public:
    element();
    element(int);
     
    int getData(){return this->data;};
    element* getPointer(){return this->pointer;};
    
    void showData(){std::cout<<data<<"\t";}
    void setData(int val){data = val;}
    void setPointer(element* val){pointer = val;}
    ~element();

private:
    int data;
    element *pointer;

};

#endif