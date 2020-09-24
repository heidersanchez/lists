#include <iostream>
#include "tester.h"
#include "forward.h"
#include "doubly.h"

void test(List<int>* list){
    ASSERT(list->is_empty() == true, "The function is_empty is not working");
    ASSERT(list->get_size() == 0, "The function is_full is not working");    
    list->push_front(5);
    list->push_front(10);
    ASSERT(list->pop_front() == 10, "The function push_front/pop_front is not working");
    list->push_back(20);
    list->push_back(15);
    ASSERT(list->pop_back() == 15, "The function push_back/pop_back is not working");
    list->push_back(30);
    list->push_back(8);
    list->insert(12, 2);
    ASSERT(list[2] == 12, "The operator [] is not working");    
    list->push_back(10);
    list->push_front(3);
    list->sort();
    ASSERT(list->is_sorted() == true, "The function sort is not working");
    delete list;
}

int main()
{
    List<int> *forward = new ForwardList<int>();
    test(forward);

    List<int> *doubly = new DoublyList<int>();
    test(doubly);

    return 0;
}