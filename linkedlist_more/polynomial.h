#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "element1.h"
#pragma once

class polynomial
{
public:
    polynomial();
    void insert(element1* val);
    void insert(int val1,int val2);
    void showPolynomial();
    void rutgon();
    void cong(polynomial* other);
    element1* gethead(){return head;}
    ~polynomial();

private:
    element1* head;
    element1* tail;
};

#endif