#include "PList.h"

template <typename T>
const T & PList<T>::operator[] (unsigned index) {
    ListNode *thru = head_;
    
    while (index > 0 && thru->next != nullptr) {
        thru = thru->next;
        index--;
    }

    return thru->data;
}

template <typename T>
void PList<T>::insertAtFront(const T & data) {
    ListNode *node = new ListNode(data);

    node->next = head_;
    
    head_ = node;
}

template class PList<int>;