#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>

//! \brief Klasa reprezentująca.
//!
//!

class Sequence{
public:
 \f[
    |I_2|=\left| \int_{0}^T \psi(t) 
        \left\{ 
           u(a,t)-
            \int_{\gamma(t)}^a 
            \frac{d\theta}{k(\theta,t)}
            \int_{a}^\theta c(\xi)u_t(\xi,t)\,d\xi
       \right\} dt
    \right|
 \f]
    Sequence(int x, int y);
    Sequence(Sequence kopia);
    ~Sequence();
    int accessX();
    int accessY();
    float oblicz();
    float oblicz1();
private:
    int x, y;
}

#endif
