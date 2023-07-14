#include <iostream>

namespace MyQueue {

class simpleQueue {
  private:
    int *ptr;
    int head;
    int capacity;

  public:
    simpleQueue(int capacity = 10) {
        this->head = -1;
        this->capacity = capacity;
        this->ptr = new int[this->capacity];
    }

    simpleQueue(simpleQueue *other) {
        this->head = other->head;
        this->capacity = other->capacity;
        this->ptr = new int[this->capacity];
    }

    simpleQueue(simpleQueue &other) {
        this->head = other.head;
        this->capacity = other.capacity;
        this->ptr = new int[this->capacity];
    }

    ~simpleQueue() { delete[] this->ptr; }
};

class circularQueue {
  private:
    int *ptr;
    int head;
    int capacity;

  public:
    circularQueue(int capacity = 10) {
        this->head = -1;
        this->capacity = capacity;
        this->ptr = new int[this->capacity];
    }
};

} // namespace MyQueue

int main() {
    MyQueue::simpleQueue sq(20);
    MyQueue::simpleQueue sq1(sq);
    std::cout << "size of simpleQueue: " << sizeof(MyQueue::simpleQueue)
              << std::endl;
    return EXIT_SUCCESS;
}
