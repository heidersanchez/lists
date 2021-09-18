#ifndef DOUBLY_H
#define DOUBLY_H
#include <iostream>
#include "list.h"

// TODO: Implement all methods
template <typename T>
class DoubleList : public List<T> {
    private:
        Node<T>* head;
        Node<T>* tail;
        int nodes;
    public:
        DoubleList() : List<T>() {

        }

        ~DoubleList(){ 
         	// TODO            
        }
        
        T front();
        T back();
        void push_front(T);
        void push_back(T);
        T pop_front();
        T pop_back();
        T insert(T, int);
        bool remove(int);
        T& operator[](int);//debe ser declarado en cada clase hija
        bool is_empty();
        int size();
        void clear();
        void sort();
        bool is_sorted();
        void reverse();
        std::string name();
};
#endif