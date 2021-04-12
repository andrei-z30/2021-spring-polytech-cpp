#include "linked_list.h"
#include <iostream>

List duplicate(List &list) {
    List list_duplicate {};
    ListNode *ptr = list.head;
    while (ptr != nullptr) {
        add(list_duplicate, ptr->data);
        add(list_duplicate, ptr->data);
        ptr = ptr->next;
    }
    return list_duplicate;
}

void print(List &list) {
    ListNode *ptr = list.head;
    while (ptr != nullptr) {
        std::cout << ptr->data << "->";
        ptr = ptr->next;
    }
    std::cout << "[x]\n";
}

unsigned int size(List &list) {
    int counter = 0;
    ListNode *ptr = list.head;
    while (ptr != nullptr) {
        ptr = ptr->next;
        counter += 1;
    }
    return counter;
}


void delete_list(List &list) {
    ListNode *ptr = list.head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    delete ptr->next;
    list.head = nullptr;
}


void add(List &list, int value) {
    auto *new_node = new ListNode{value, nullptr};
    if (list.head == nullptr) {
        list.head = new_node;
    } else {
        ListNode *ptr = list.head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

bool compare(List &list_a, List &list_b) {
    ListNode *ptr_a = list_a.head;
    ListNode *ptr_b = list_b.head;
    while (ptr_a != nullptr || ptr_b != nullptr) {
        if (ptr_a->data != ptr_b->data) {
            return false;
        }
        ptr_a = ptr_a->next;
        ptr_b = ptr_b->next;
    }
    return true;
}

//List merge(List &list_a, List &list_b) {
//
//}

List concat(List &list_a, List &list_b) {
    List list_concat {};
    ListNode *ptr_a = list_a.head;
    ListNode *ptr_b = list_b.head;
    while(ptr_a != nullptr) {
        add(list_concat, ptr_a->data);
        ptr_a = ptr_a->next;
    }
    while(ptr_b != nullptr) {
        add(list_concat, ptr_b->data);
        ptr_b = ptr_b->next;
    }
    return list_concat;
}