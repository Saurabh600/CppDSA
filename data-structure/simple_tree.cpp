#include <iostream>

namespace MyTree {

class _binary_node {
  private:
    int data;
    _binary_node *left;
    _binary_node *right;

  public:
    _binary_node(int d) {
        this->data = d;
        this->left = this->right = nullptr;
    }
};

class BinarySearchTree {
    _binary_node *root;

  public:
    BinarySearchTree() : root(nullptr) {}

    void push(int d) {
        if (!this->root) {
            this->root = new _binary_node(d);
            return;
        }
    }
};

} // namespace MyTree

int main(void) {
    // simple tree
    return 0;
}
