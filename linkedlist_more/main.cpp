#include <iostream>
#include "polynomial.h"

using namespace std;

int main()
{
    polynomial* dathuc = new polynomial();
    element1 a(1,2);
    element1 b(1,3);
    element1 c(1,6);
    element1 d(1,3);
    dathuc->insert(&a);
    dathuc->insert(&b);
    dathuc->insert(&c);
    dathuc->insert(&d);
    // dathuc->rutgon();
    // dathuc->insert(&c);
    // dathuc->insert(&d);
    dathuc->showPolynomial();
    polynomial* dathuc2 = new polynomial();
    element1 a1(1,2);
    element1 b1(1,3);
    element1 c1(1,6);
    element1 d1(1,3);
    dathuc2->insert(&a1);
    dathuc2->insert(&b1);
    dathuc2->insert(&c1);
    dathuc2->insert(&d1);
    dathuc2->showPolynomial();
    dathuc2->cong(dathuc);
    dathuc2->showPolynomial();
    delete dathuc;
    delete dathuc2;
    return 0;
}
// dung qua tai toan tu operator * giu 2 element
// 2 lan qua tai toan tu * element va polynomial