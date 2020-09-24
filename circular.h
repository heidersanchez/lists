#ifndef CIRCULAR_H
#define CIRCULAR_H
#include <iostream>
#include "list.h"

// TODO: Implement all methods
template <typename T>
class CircularList : public List<T> {   
    public:
        CircularList() : List<T>() { }

        ~CircularList(){
           // TODO
        }       
};

#endif