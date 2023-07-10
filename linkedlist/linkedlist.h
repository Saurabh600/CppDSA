#include <iostream>

#ifndef _LINKED_LIST
#define _LINKED_LIST

namespace LinkedList {
class _singly_node {
  public:
    int data;
    _singly_node *next_ptr;

    _singly_node(int data) : data(data), next_ptr(nullptr) {}
};

class _doubly_node {
  public:
    int data;
    _doubly_node *next_ptr;
    _doubly_node *prev_ptr;

    _doubly_node(int data) : data(data), next_ptr(nullptr), prev_ptr(nullptr) {}
};

class Singly {
  private:
    _singly_node *head_ptr;

  public:
    Singly() : head_ptr(nullptr) {}

    int size() {
        if (!this->head_ptr)
            return 0;

        int len(0);
        auto temp = this->head_ptr;
        while (temp && ++len)
            temp = temp->next_ptr;
        return len;
    }

    int at(int index) {
        if (index < 0 || index >= this->size())
            return 0;
        int itr_len(0);
        auto temp = this->head_ptr;
        while (temp && itr_len < index) {
            itr_len++;
            temp = temp->next_ptr;
        }
        return temp->data;
    }

    void push_back(int data) {
        if (!this->head_ptr) {
            this->head_ptr = new _singly_node(data);
            return;
        }

        auto temp = this->head_ptr;
        while (temp->next_ptr) {
            temp = temp->next_ptr;
        }

        temp->next_ptr = new _singly_node(data);
    }

    void push_front(int data) {
        auto new_node = new _singly_node(data);
        new_node->next_ptr = this->head_ptr;
        this->head_ptr = new_node;
    }

    bool insert(int index, int data) {
        if (index < 0 || index > this->size())
            return false;
        if (!index) {
            auto new_node = new _singly_node(data);
            new_node->next_ptr = this->head_ptr->next_ptr;
            this->head_ptr = new_node;
            return true;
        }
        int itr_len(0);
        auto temp = this->head_ptr;
        auto temp_prev = this->head_ptr;
        while (temp && itr_len < index) {
            itr_len++;
            temp_prev = temp;
            temp = temp->next_ptr;
        }
        auto new_node = new _singly_node(data);
        temp_prev->next_ptr = new_node;
        new_node->next_ptr = temp;
        return true;
    }

    bool update(int index, int data) {
        if (index < 0 || index >= this->size())
            return false;

        int itr_len(0);
        auto temp = this->head_ptr;
        while (temp && itr_len < index) {
            itr_len++;
            temp = temp->next_ptr;
        }
        temp->data = data;
        return true;
    }

    void display() {
        if (!this->head_ptr) {
            std::cout << "linkedlist is empty!!\n";
            return;
        }

        auto temp = this->head_ptr;
        do {
            std::cout << temp->data << "->";
            temp = temp->next_ptr;
        } while (temp->next_ptr);
        std::cout << temp->data << std::endl;
    }
};

class Doubly {
  private:
    _doubly_node *head_ptr;

  public:
    Doubly() : head_ptr(nullptr) {}
    void push_back(int data);
    void push_front(int data);
    bool insert(int index, int data);
    void print();
};

class SinglyCircular {
  private:
    _singly_node *head_ptr;

  public:
    SinglyCircular() : head_ptr(nullptr) {}
    void push_back(int data);
    void push_front(int data);
    bool insert(int index, int data);
    void print();
};

class DoublyCircular {
  private:
    _doubly_node *head_ptr;

  public:
    DoublyCircular() : head_ptr(nullptr) {}
    void push_back(int data);
    void push_front(int data);
    bool insert(int index, int data);
    void print();
};
} // namespace LinkedList

#endif
