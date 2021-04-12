#include "linked_list.h"
#include <iostream>

void print(List &list) {
    ListNode *print_list = list.head;
    while (print_list->next != nullptr) {
        std::cout << print_list->data << "->";
        print_list = print_list->next;
    }
    std::cout << print_list->data << "->[x]" << std::endl;
}

List duplicate(List &list) {
    List list_duplicate{};
    ListNode *ptr = list.head;
    while (ptr != nullptr) {
        add(list_duplicate, ptr->data);
        add(list_duplicate, ptr->data);
        ptr = ptr->next;
    }
    return list_duplicate;
}

unsigned int size(List &list) {
    int size = 0;
    ListNode *current = list.head;
    while (current != nullptr) {
        current = current->next;
        size++;
    }
    return size;
}

void delete_list(List &list) {
    while (list.head != nullptr) {
        ListNode *temp = list.head;
        list.head = list.head->next;
        delete temp;
    }
}

void add(List &list, int value) {
    auto *new_node = new ListNode{value, nullptr};
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
    List list_l{};
    while (copy_a != nullptr || copy_b != nullptr) {
        if (copy_a->data < copy_b->data && copy_a != nullptr && copy_b != nullptr) {
            add(list_l, copy_a->data);
            copy_a = copy_a->next;
        }
        if (copy_b->data < copy_a->data && copy_b != nullptr && copy_a != nullptr) {
            add(list_l, copy_b->data);
            copy_b = copy_b->next;
        }
        if (copy_a == nullptr && copy_b != nullptr) {
            add(list_l, copy_b->data);
            copy_b = copy_b->next;
        }
        if (copy_b == nullptr && copy_a != nullptr) {
            add(list_l, copy_a->data);
            copy_a = copy_a->next;
        }
    }
    return list_l;
}

List concat(List &list_a, List &list_b) {
    List list_concat{};
    ListNode *ptr_a = list_a.head;
    ListNode *ptr_b = list_b.head;
    while (ptr_a != nullptr) {
        add(list_concat, ptr_a->data);
        ptr_a = ptr_a->next;
    }
    while (ptr_b != nullptr) {
        add(list_concat, ptr_b->data);
        ptr_b = ptr_b->next;
    }
    return list_concat;
}