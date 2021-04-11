#include "linked_list.h"
#include <iostream>

List duplicate(List &list) {
    // решение тут
}

void print(List &list) {
    ListNode *print_list = list.head;
    while (print_list->next != nullptr) {
        std::cout << print_list->data << "->";
        print_list = print_list->next;
    }
    std::cout << print_list->data << "->[x]" << std::endl;
}

unsigned int size(List &list) {

}


void delete_list(List &list) {

}


void add(List &list, int value) {
    auto *new_node = new ListNode{value, nullptr};


}

bool compare(List &list_a, List &list_b) {
    ListNode *copy_a = list_a.head;
    ListNode *copy_b = list_b.head;
    while (copy_a->next != nullptr && copy_b->next != nullptr) {
        if (copy_a->data != copy_b->data)
            return false;
        copy_a = copy_a->next;
        copy_b = copy_b->next;
    }
    return true;
}

List merge(List &list_a, List &list_b) {
    ListNode *copy_a = list_a.head;
    ListNode *copy_b = list_b.head;
    List list_l;

    while (copy_a->next != nullptr || copy_b->next != nullptr) {
        if (copy_a->next != nullptr) {
            add(list_l, copy_a->data);
            copy_a = copy_a->next;
        }
        if (copy_b->next != nullptr) {
            add(list_l, copy_b->data);
            copy_a = copy_b->next;
        }
    }

    return list_l;

}

List concat(List &list_a, List &list_b) {
    // решение тут
}