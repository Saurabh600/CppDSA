#include <iostream>

#include "linkedlist.hpp"

void test_linkedlist() {
    std::cout << "Hello, World!\n";
    LinkedList::Singly num_bucket;
    num_bucket.push_back(20);
    num_bucket.push_back(21);
    num_bucket.push_back(22);
    num_bucket.push_back(23);
    num_bucket.push_back(24);
    num_bucket.push_back(25);

    num_bucket.push_front(40);
    num_bucket.push_front(39);
    num_bucket.push_front(38);
    num_bucket.push_front(37);
    num_bucket.push_front(36);
    num_bucket.push_front(35);

    std::cout << "num_bucket size: " << num_bucket.size() << '\n';
    std::cout << "num_bucket[0]: " << num_bucket.at(0) << '\n';
    std::cout << "num_bucket[5]: " << num_bucket.at(5) << '\n';
    std::cout << "num_bucket[11]: " << num_bucket.at(11) << '\n';
    num_bucket.display();

    num_bucket.update(0, 100);
    num_bucket.update(5, 500);
    num_bucket.update(11, 300);
    std::cout << "num_bucket[0]: " << num_bucket.at(0) << '\n';
    std::cout << "num_bucket[5]: " << num_bucket.at(5) << '\n';
    std::cout << "num_bucket[11]: " << num_bucket.at(11) << '\n';
    num_bucket.display();

    num_bucket.insert(5, 55);
    num_bucket.display();
}

int32_t main(void) {
    test_linkedlist();
    return EXIT_SUCCESS;
}
