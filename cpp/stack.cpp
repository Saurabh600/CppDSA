#include <iostream>

class stack {
  private:
    int *ptr;
    int head;
    int capacity;

  public:
    stack(int size = 10) {
        this->capacity = size;
        this->head = -1;
        this->ptr = new int[this->capacity];
    }

    bool empty();
    bool full();
    bool push(int data);
    int pop();
    int peek();
};

bool stack::empty() { return (this->head == -1) ? true : false; }
bool stack::full() { return (this->head == this->capacity - 1) ? true : false; }

bool stack::push(int data) {
    if (this->full()) {
        return false;
    }

    this->ptr[++head] = data;
    return true;
}

int stack::pop() {
    if (this->empty()) {
        return -1;
    }

    return this->ptr[this->head--];
}

int stack::peek() {
    if (this->empty()) {
        return -1;
    }

    return this->ptr[this->head];
}

int main() {
    stack st(25);
    st.push(10);
    st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(21);
    st.push(41);
    st.push(61);
    st.push(81);
    st.push(101);
    while (!st.empty()) {
        std::cout << st.pop() << " ";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}
