# Design Diagrams for Trees

## TreeNode Structure Diagram
```
TreeNode
+ data: int
+ left: TreeNode*
+ right: TreeNode*
```

## BinaryTree Class Diagram
```
BinaryTree
- root: TreeNode*
+ insert(value: int): void
+ search(value: int): bool
+ isEmpty(): bool
- insertHelper(node: TreeNode*, value: int): TreeNode*
- searchHelper(node: TreeNode*, value: int): bool
- destroy(node: TreeNode*): void
- ~BinaryTree(): destructor
```

## BST Insertion Flowchart
1. If node is null, create new node
2. If value < node.data, insert left
3. Else, insert right
4. Return node

## BST Search Flowchart
1. If node is null, return false
2. If node.data == value, return true
3. If value < node.data, search left
4. Else, search right

## Tree Structure Example
```
    5
   / \
  3   7
 / \   \
1   4   9
```
