#include "polynomial.h"
#include <iostream>
using namespace std;


polynomial::polynomial()
{
    this->head = nullptr;
    this->tail = nullptr ;
}

void polynomial::insert(element1 *val)
{
    if(this->head == nullptr){
        this->head = this->tail = val;
    }else{
        // val->setPointer(this->head);
        // this->head = val;
        element1* current= this->head;
        // while(current->getPointer()->getmuso() < val->getmuso() && current->getPointer() != nullptr)
        // {
        //     current= current->getPointer();
        // }
        while (current->getPointer() != nullptr && current->getPointer()->getmuso() < val->getmuso()) 
        {
            current = current->getPointer();
        }
        val->setPointer(current->getPointer());
        current->setPointer(val);
    }
}

void polynomial::insert(int val1,int val2)
{   element1*val = new element1(val1,val2);
    if(this->head == nullptr){
        this->head = this->tail = val;
    }else{
        // val->setPointer(this->head);
        // this->head = val;
        element1* current= this->head;
        // while(current->getPointer()->getmuso() < val->getmuso() && current->getPointer() != nullptr)
        // {
        //     current= current->getPointer();
        // }
        while (current->getPointer() != nullptr && current->getPointer()->getmuso() < val->getmuso()) 
        {
            current = current->getPointer();
        }
        val->setPointer(current->getPointer());
        current->setPointer(val);
    }
}

void polynomial::showPolynomial()
{
    element1* temp= this->head;
    while(temp != nullptr)
    {   if(temp==this->head) cout<<"\n Da thuc : ";
        else{cout<<" + ";}
        cout<<temp->getData()<<"X^"<<temp->getmuso();
        temp= temp->getPointer();        
    }
}


void polynomial::rutgon() {
    element1* current = this->head;
    while (current != nullptr && current->getPointer() != nullptr) {
        element1* next = current->getPointer();
        element1* prev = current;

        while (next != nullptr) {
            if (current->getmuso() == next->getmuso()) {
                current->setData(current->getData() + next->getData());
                // Remove `next` from the list and delete it if necessary
                prev->setPointer(next->getPointer());
                // delete next; // Only if you're sure it should be deleted
                next = prev->getPointer(); // Continue from the next element
            } else {
                prev = next;
                next = next->getPointer();
            }
        }
        current = current->getPointer();
    }
}

void polynomial::cong(polynomial *other)
{   element1* current = other->gethead();
    while(current != nullptr)
    {
        this->insert(current->getData(),current->getmuso());
        current = current->getPointer();
    }
    this->rutgon();
}

polynomial::~polynomial()
{
    // element1 *current = this->head;
    // while (current != nullptr) {
    //     element1 *next = current->getPointer();
    //     delete current;
    //     current = next;
    // }
    // delete this;
}
