#include <iostream>
#include <random>
#include "linkedlist.h"
using namespace std;

int main(){
    cout<<"start:\n";
    linkedlist* list_ = new linkedlist();
    linkedlist* listA = new linkedlist();
    linkedlist* listB = new linkedlist();
    int x = 5;
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
    // list_->insertBehindElement(e[1],e[10]);
    // list_->travel();
    // list_->showAll();
    // cout<<"remove all:"<<endl;
    // list_->removeAll();
    // list_->travel();
    // Delete each element
    list_->divided(x,listA,listB);
    listA->travel();
    listB->travel();
    // Delete the linked list
    // delete list_;

    cout<<"\nend.\n";
    return 0;
    
}