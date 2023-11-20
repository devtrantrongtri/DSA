#include <iostream>
#include <random>
#include "linkedlist.h"
using namespace std;

int main(){
    cout<<"start:\n";
    linkedlist* list_ = new linkedlist();
    element* e[13];
    for(int i =0 ; i < 10; i++)
    {
        e[i] = new element(i);
        list_->insertTail(e[i]);
    }
    list_->travel();
    //insert behind 
    e[10] = new element(10);
    e[11] = new element(11);
    e[12] = new element(12);
    list_->insertBehindElement(e[1],e[10]);
    list_->travel();

    // Delete each element
    // for (int i = 0; i < 13; i++) {
    //     delete e[i];
    // }

    // Delete the linked list
    delete list_;

    cout<<"\nend.\n";
    return 0;
    
}