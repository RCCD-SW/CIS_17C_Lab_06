# Lab 06 - Binary Search Trees

This lab implements a binary search tree (BST) data structure, introducing tree-based data organization and recursive algorithms.

## Files in this Directory
- `google_test/`: Directory containing Google Test files
- Implementation files: `*.cpp` with TODO comments for student completion
- Documentation: `*.md` files with requirements, diagrams, and presentations
- `trees.cpp`: BinaryTree class template with recursive helpers
- `trees_test.cpp`: Test suite with 5 comprehensive test cases
- `design_diagrams.md`: Tree structure visualizations
- `presentation.md`: BST concepts and operations
- `requirements_document.md`: Detailed specifications

## Learning Objectives
- Understand tree data structures
- Implement recursive algorithms
- Maintain BST invariant
- Analyze tree operation complexities
- Handle dynamic tree modifications

## Binary Search Tree Properties
- Left subtree < root < right subtree
- Efficient search, insert, delete operations
- Average O(log n) time complexity
- Recursive implementation

## Implementation Instructions

## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods in the `.cpp` file, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see output like:
```
[==========] Running X tests from Y test suite.
...
[  PASSED  ] X tests.
```

If all tests pass, your implementation is correct! If tests fail, check your code against the TODO requirements and test expectations.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented with correct signatures.
- **Test failures**: Review the failing test messages and debug your implementation.
- **Missing dependencies**: Make sure Google Test is installed as described in the prerequisites.

Implement the BinaryTree class and helper functions:
- TreeNode structure with constructor
- Recursive insertHelper and searchHelper
- Proper memory cleanup in destructor
- Maintain BST ordering

## Testing Instructions
1. Install Google Test (see lab_01)
2. Compile: `g++ google_test/trees_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o trees_test`
3. Run: `./trees_test`
4. Verify 5/5 tests pass

## Test Cases Explained
1. **Insert**: Basic node insertion
2. **Search**: Value location verification
3. **IsEmpty**: Empty tree detection
4. **InsertDuplicates**: Handling duplicate values
5. **SearchEmptyTree**: Empty tree search

## Tree Operations
- **Insert**: Place value in correct position
- **Search**: Find value using BST property
- **Traversal**: Inorder, preorder, postorder (future labs)

## Complexity Analysis
- Insert: O(log n) average, O(n) worst
- Search: O(log n) average, O(n) worst
- Space: O(n) for n nodes

## Common Issues
- Violating BST property
- Memory leaks in destruction
- Incorrect recursive base cases
- Unbalanced tree handling

## Applications
- Sorted data storage
- Database indexing
- Symbol tables
- Priority queues

## Extensions
- Add delete operation
- Implement tree balancing (AVL)
- Add tree traversals
- Calculate tree height/depth

Trees form the foundation for advanced data structures!
## Testing Your Implementation

**Important**: You must build your own test executable in the `google_test/` directory. There are no pre-compiled executables provided - this ensures you learn the compilation process.
Once you have implemented the TODO methods, follow these steps to test your code:

### Step 1: Navigate to the google_test directory
```bash
cd google_test
```

### Step 2: Compile the test executable
```bash
g++ *_test.cpp -std=c++17 -I/opt/homebrew/include -L/opt/homebrew/lib -lgtest -lgtest_main -lpthread -o test_executable
```

### Step 3: Run the tests
```bash
./test_executable
```

### Expected Output
You should see tests passing if your implementation is correct.

### Troubleshooting
- **Compilation errors**: Ensure all TODO methods are implemented.
- **Test failures**: Debug based on error messages.
- **Dependencies**: Verify Google Test installation.
