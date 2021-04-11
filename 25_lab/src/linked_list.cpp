#include "linked_list.h"
#include <iostream>

List duplicate(List &list) {
    // решение тут
    return list;
}

void print(List &list) {
    // решение тут
}

unsigned int size(List &list) {
    int size = 0;
    if (list.head == nullptr) {
        return 0;
    }
    ListNode *current = list.head;
    while (current != nullptr) {
        current = current->next;
        size++;
    }
    return size;
}


void delete_list(List &list) {
    while (list.head != nullptr){
        ListNode *temp = list.head;
        list.head = list.head->next;
        delete temp;
    }
}


void add(List &list, int value) {
    auto* new_node = new ListNode{value, nullptr};
    if (list.head == nullptr) {
        list.head = new_node;
    } else {
        ListNode *current = list.head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }

}

bool compare(List &list_a, List &list_b) {
    // решение тут
    return true;
}

List merge(List &list_a, List &list_b) {
    // решение тут
    return list_a;
}

List concat(List &list_a, List &list_b) {
    // решение тут
    return list_a;
}