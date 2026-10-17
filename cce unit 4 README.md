# CCE-2-unit-4
Aim
Develop a hospital bed allocation system using an AVL tree to demonstrate LL and RR rotations with the tree before and after each rotation.

1. Problem Statement

To develop a Hospital Bed Allocation System using an AVL tree in C++ to manage hospital Bed IDs and demonstrate LL and RR rotations by displaying the tree before and after each rotation.

2. Objective

- To implement an AVL tree for hospital bed allocation.
- To understand LL and RR rotations.
- To display the tree before and after each rotation.
- To maintain a balanced tree during insertion.

3. Algorithm

 1.Start the program.

 2.Create an empty AVL tree.

 3.Enter the hospital Bed ID.

 4. Insert the Bed ID into the AVL tree.

 5. Update the height and calculate the balance factor.

 6. If an LL imbalance occurs, perform a right rotation.

 7. If an RR imbalance occurs, perform a left rotation.

 8. Display the tree before and after each rotation.

 9. Display the stored Bed IDs.

 10. Stop the program.

4.Algorithm Explanation

The program uses an AVL tree, which is a self-balancing Binary Search Tree. Each hospital bed is represented by a unique Bed ID.

The "insert()" function inserts Bed IDs into the tree. The "height()" and "balance()" functions check whether the tree is balanced.

- LL Rotation: When the tree becomes left-heavy, a right rotation is performed.
- RR Rotation: When the tree becomes right-heavy, a left rotation is performed.

The program displays the Bed IDs before and after rotation to demonstrate how the AVL tree maintains balance.

5. Conclusion

The Hospital Bed Allocation System demonstrates LL and RR rotations using an AVL tree in C++. It helps maintain a balanced tree and provides an understanding of efficient data insertion and searching.
