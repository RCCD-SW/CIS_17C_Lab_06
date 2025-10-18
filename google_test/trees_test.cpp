#include <gtest/gtest.h>

// Include the student's implementation
#include "../trees.cpp"

// Test cases

TEST(BinaryTreeTest, Insert) {
    BinaryTree tree;
    tree.insert(5);
    EXPECT_TRUE(tree.search(5));
}

TEST(BinaryTreeTest, Search) {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    EXPECT_TRUE(tree.search(5));
    EXPECT_TRUE(tree.search(3));
    EXPECT_TRUE(tree.search(7));
    EXPECT_FALSE(tree.search(10));
}

TEST(BinaryTreeTest, IsEmpty) {
    BinaryTree tree;
    EXPECT_TRUE(tree.isEmpty());
    tree.insert(1);
    EXPECT_FALSE(tree.isEmpty());
}

TEST(BinaryTreeTest, InsertDuplicates) {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(5);
    EXPECT_TRUE(tree.search(5));
}

TEST(BinaryTreeTest, SearchEmptyTree) {
    BinaryTree tree;
    EXPECT_FALSE(tree.search(1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
