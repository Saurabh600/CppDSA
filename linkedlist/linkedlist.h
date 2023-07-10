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

    int size();
    int at(int index);
    void push_back(int data);
    void push_front(int data);
    bool insert(int index, int data);
    bool update(int index, int data);
    void display();
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
