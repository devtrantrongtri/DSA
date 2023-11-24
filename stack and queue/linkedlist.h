#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "element.h"
#include<iostream>
using namespace std;

#pragma once

class linkedlist
{
public:
    linkedlist();
    //setter and getter
    void setHead(element* val);
    void setTail(element* val);
    element* getHead();
    element* getTail();
    //CRUD
    void insertHead(element* val);
    void insertTail(element* val);
    void insertBehindElement(element* val1, element* val2);
    void deleteHead();
    void deleteTail();
    void deleteElementBy(element*val);
    void travel();
    void showAll();
    void removeAll();
    ~linkedlist();

private:
    element*head;
    element*tail;
};

#endif