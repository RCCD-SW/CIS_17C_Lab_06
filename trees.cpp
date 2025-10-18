// Lab 06: Binary Search Trees
// Implement BST with insert and search
// Complete the TODO sections
// Test with: g++ trees_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o trees_test && ./trees_test

#include <iostream>

// TODO: Include <stdexcept>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    // TODO: Constructor
};

class BinaryTree {
private:
    TreeNode* root;

    TreeNode* insertHelper(TreeNode* node, int value) {
        // TODO: Recursive insert: if null create node, else go left/right
    }

    bool searchHelper(TreeNode* node, int value) const {
        // TODO: Recursive search
    }

    void destroy(TreeNode* node) {
        // TODO: Recursive destroy
    }

public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree() {
        // TODO: Call destroy on root
    }

    void insert(int value) {
        // TODO: Call insertHelper on root
    }

    bool search(int value) const {
        // TODO: Call searchHelper
    }

    bool isEmpty() const {
        // TODO: Check if root is null
    }
};

int main() {
    // TODO: Test your BST
    BinaryTree tree;
    std::cout << "Implement the BinaryTree!" << std::endl;
    return 0;
}
