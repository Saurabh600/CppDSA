#include <iostream>

#include "linkedlist.hpp"

/**
 * Singly LinkedList Destructor,
 * deallocates all memory of allocated nodes
 */
LinkedList::Singly::~Singly() {
    auto temp = this->head;
    auto temp_prev = temp;

    while (temp) {
        temp = temp->next;
        delete temp_prev;
        temp_prev = temp;
    }
}

// get size of linkedlist
int LinkedList::Singly::size() {
    if (!this->head)
        return 0;

    int len(0);
    auto temp = this->head;
    while (temp && ++len)
        temp = temp->next;
    return len;
}

// retrive element at given index
int LinkedList::Singly::at(int index) {
    if (index < 0 || index >= this->size())
        return 0;
    int itr_len(0);
    auto temp = this->head;
    while (temp && itr_len < index) {
        itr_len++;
        temp = temp->next;
    }
    return temp->data;
}

// insert element at the end of list
void LinkedList::Singly::push_back(int data) {
    if (!this->head) {
        this->head = new _singly_node(data);
        return;
    }

    auto temp = this->head;
    while (temp->next) {
        temp = temp->next;
    }

    temp->next = new _singly_node(data);
}

// insert element at the beginning of list
void LinkedList::Singly::push_front(int data) {
    auto new_node = new _singly_node(data);
    new_node->next = this->head;
    this->head = new_node;
}

// insert at an index positon
bool LinkedList::Singly::insert(int index, int data) {
    if (index < 0 || index > this->size())
        return false;
    if (!index) {
        auto new_node = new _singly_node(data);
        new_node->next = this->head->next;
        this->head = new_node;
        return true;
    }
    int itr_len(0);
    auto temp = this->head;
    auto temp_prev = this->head;
    while (temp && itr_len < index) {
        itr_len++;
        temp_prev = temp;
        temp = temp->next;
    }
    auto new_node = new _singly_node(data);
    temp_prev->next = new_node;
    new_node->next = temp;
    return true;
}

// update element at an index
bool LinkedList::Singly::update(int index, int data) {
    if (index < 0 || index >= this->size())
        return false;

    int itr_len(0);
    auto temp = this->head;
    while (temp && itr_len < index) {
        itr_len++;
        temp = temp->next;
    }
    temp->data = data;
    return true;
}

// dispaly linkedlist
void LinkedList::Singly::display() {
    if (!this->head) {
        std::cout << "linkedlist is empty!!\n";
        return;
    }

    auto temp = this->head;
    do {
        std::cout << temp->data << "->";
        temp = temp->next;
    } while (temp->next);
    std::cout << temp->data << std::endl;
}
