#include "element.h"

element::element()
{
    this->data = 0;
    this->pointer = nullptr;
}

element::element(int val)
{
    this->data = val;
    this->pointer = nullptr;
}

element::~element()
{

}