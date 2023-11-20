#include "linkedlist.h"

linkedlist::linkedlist()
{
    this->head = nullptr;
    this->tail = nullptr;
}

void linkedlist::setHead(element *val)
{
    this->head = val;
}

void linkedlist::setTail(element *val)
{
    this->tail = val;
}

element *linkedlist::getHead()
{
    return this->head;
}

element *linkedlist::getTail()
{
    return this->tail;
}

void linkedlist::insertHead(element *val)
{
    if(this->head == nullptr)
    {
        this->head = this->tail = val;
    }else{
        val->setPointer(this->head);
        this->head = val;
    }
}

void linkedlist::insertTail(element *val)
{
    if(this->head == nullptr){
        this->head= this->tail = val;
    }else{
        this->tail->setPointer(val);
        this->tail = val;
    }
}

void linkedlist::insertBehindElement(element *val1, element *val2)
{
    element*p = this->head;
    while (p != nullptr)
    {
        if(p == val1){
            val2->setPointer(val1->getPointer());
            val1->setPointer(val2);
            break;
        }
        p= p->getPointer();

    }
    if(p == nullptr)
    {
        std::cout<<"the value is not found";
       
    }
    
}

void linkedlist::deleteHead()
{
    if(this->head == nullptr){
        return;
    }else{
        element* p = this->head;
        this->head = this->head->getPointer();
        delete p;
    }
}

void linkedlist::deleteTail()
{
    if(this->head == nullptr)
    {
        return;
    }else{
        element*p = this->head;
        while (p->getPointer()!= this->tail)
        {
            p = p->getPointer();
        }
        delete this->tail ; // tail luu gia tri ke cuoi
        this->tail = p;
        this->tail->setPointer(nullptr);
        
    }
}

void linkedlist::deleteElementBy(element *val)
{

    if(this->head == nullptr) return;
    else if(this->head == val) this->deleteHead();
    else if(this->tail == val) this->deleteTail();
    else{
        element*p = this->head;
        while(p->getPointer() != nullptr)
        {
            if(p == val) break;
            else{
            p= p->getPointer();
            }
        }
        if(p == this->tail)
        {
            std::cout<<"not found val to delete.\n";
            
        }
    }
}

void linkedlist::travel()
{
    element* p = this->head;
    while(p != nullptr)
    {
        std::cout<<p->getData()<<"\t";
        p = p->getPointer();
    }
    
}

linkedlist::~linkedlist()
{
    element *current = this->head;
    while (current != nullptr) {
        element *next = current->getPointer();
        delete current;
        current = next;
    }
}