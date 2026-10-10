# cc2-unit-3
Gym Membership Management System using Linked List – maintain member records, renewals, searches, and deletions.
Gym Membership Management System using Linked List

1. Problem Statement

To develop a Gym Membership Management System using a Singly Linked List in C++ to maintain gym member records and perform operations such as adding new members, displaying member details, searching for members, renewing memberships, and deleting member records.

2. Objective

- To manage gym member records using a Linked List.
- To add and display member information.
- To search for members using their Member ID.
- To renew memberships by adding extra months.
- To delete member records when required.
- To understand linked list operations and dynamic memory allocation in C++.

3. Data Structure Used

Singly Linked List

A Singly Linked List is a linear data structure in which each node contains data and a pointer to the next node.

Each node in this project contains:

- Member ID
- Member Name
- Membership Duration in Months
- Pointer to the Next Node

The "head" pointer stores the address of the first node. If the list is empty, "head" is "NULL".

4. Algorithm

1. Start the program.
2. Define a structure named "Member" containing ID, name, membership months, and a pointer to the next node.
3. Initialize the "head" pointer to "NULL".
4. Display the main menu with the following options:
   - Add Member
   - Display Members
   - Search Member
   - Renew Membership
   - Delete Member
   - Exit
5. Accept the user's choice.
6. Perform the selected operation:
   - Add Member: Create a new node, accept member details, check for duplicate IDs and valid membership duration, and insert the node at the beginning of the list.
   - Display Members: Traverse the linked list and display all member records.
   - Search Member: Search for a member using the Member ID.
   - Renew Membership: Find the member and add extra months to the existing membership duration.
   - Delete Member: Find the member, update the links, and delete the node.
   - Exit: Terminate the menu loop.
7. Repeat the menu until the user selects Exit.
8. Delete all remaining nodes to release allocated memory.
9. Stop the program.

5. Algorithm Explanation

The program uses a menu-driven approach to manage gym member records.

First, a structure named "Member" is created to store the member's ID, name, membership duration, and pointer to the next node.

When a new member is added, the program creates a node dynamically and inserts it at the beginning of the linked list. The program checks for duplicate IDs and invalid membership durations before insertion.

To display member records, the program traverses the list from the first node to the last node. To search for a member, it compares the entered ID with each node's ID.

For membership renewal, the program finds the member and adds the extra months to the existing duration. For deletion, it locates the selected member, adjusts the pointers, and removes the node.

The menu repeats until the user selects Exit. Finally, the program releases the memory allocated to all remaining nodes.

6. Code Explanation

Header Files

"#include <iostream>" is used for input and output operations.

"#include <string>" is used to store member names.

"using namespace std;" allows standard C++ library names to be used without writing "std::" repeatedly.

Member Structure

The "Member" structure stores the member ID, name, membership duration, and a pointer to the next node.

Head Pointer

The "head" pointer points to the first node of the linked list. Initially, it is "NULL" because the list contains no members.

addMember()

This function creates a new node, accepts member details, checks for duplicate IDs and valid membership duration, and inserts the node at the beginning of the linked list.

displayMembers()

This function traverses the linked list and displays the ID, name, and membership duration of every member. If the list is empty, it displays a message.

searchMember()

This function searches for a member by comparing the entered Member ID with the IDs stored in the linked list. It displays the member's details if a match is found.

renewMembership()

This function searches for a member and adds the entered extra months to the existing membership duration. Only a positive number of extra months is accepted.

deleteMember()

This function searches for the specified Member ID and deletes the corresponding node. It updates the "head" pointer when the first node is deleted or adjusts the previous node's pointer when another node is deleted.

main()

The "main()" function displays the menu and accepts the user's choice. A "switch" statement calls the appropriate function, while a "do-while" loop repeats the menu until Exit is selected.

Memory Deallocation

Before the program terminates, a loop deletes the remaining nodes to release dynamically allocated memory.

7. Sample Input and Output

A. Add Member

Input

Enter Your Choice: 1
Enter Member ID: 101
Enter Member Name: Rahul Patil
Enter Membership Months: 3

Output

Member Added Successfully!

B. Display Members

Input

Enter Your Choice: 2

Output

--- Member Records ---

Member ID: 101
Name: Rahul Patil
Membership Months: 3

C. Search Member

Input

Enter Your Choice: 3
Enter Member ID to Search: 101

Output

Member Found!
ID: 101
Name: Rahul Patil
Months: 3

D. Renew Membership

Input

Enter Your Choice: 4
Enter Member ID: 101
Enter Extra Months: 2

Output

Membership Renewed Successfully!
Total Months: 5

E. Delete Member

Input

Enter Your Choice: 5
Enter Member ID to Delete: 101

Output

Member Deleted Successfully!

F. Exit

Input

Enter Your Choice: 6

Output

Thank You!

8. Time Complexity Analysis

Let "n" represent the number of member records in the linked list.

Operation| Time Complexity
Add Member| O(n), due to duplicate ID checking
Display Members| O(n)
Search Member| O(n)
Renew Membership| O(n)
Delete Member| O(n)

Adding a node at the beginning takes O(1) time, but checking for a duplicate ID makes the complete add operation O(n) in the worst case.

9. Advantages

- Dynamic memory allocation allows nodes to be created when needed.
- Member records can be inserted and deleted without shifting other records.
- Searching and updating member information are straightforward.
- The project demonstrates practical applications of linked lists.

10. Limitations

- Member records are stored only in memory.
- Records are lost when the program exits.
- The program stores membership duration in months but does not calculate actual expiry dates.
- File handling is not implemented in this version.

11. Testing

The program should be tested using the following cases:

1. Add a new member with valid details.
2. Try adding a duplicate Member ID.
3. Display all members.
4. Search for an existing Member ID.
5. Search for a non-existing Member ID.
6. Renew a membership with a positive number of months.
7. Try renewing with an invalid duration.
8. Delete an existing member.
9. Try deleting a non-existing member.
10. Display records when the list is empty.
11. Exit the program.

The expected messages should appear for each case, and the program should run without compilation errors.

12. Result

The Gym Membership Management System was developed using C++ and a Singly Linked List. The program supports adding, displaying, searching, renewing, and deleting gym member records. It demonstrates linked list operations, dynamic memory allocation, pointer manipulation, and menu-driven programming.

13. How to Compile and Run

Save the source code as "GymMembership.cpp".

Compile using:

g++ GymMembership.cpp -o GymMembership

Run on Linux or macOS:

./GymMembership

On Windows, run the generated executable:

GymMembership.exe

14. GitHub Repository Contents

The repository should contain:

- "GymMembership.cpp" — C++ source code
- "README.md" — Problem statement, algorithm, explanation, sample input/output, testing, and result
- "Output.png" — Screenshot of the program running (recommended)

15. Conclusion

This project demonstrates how a Singly Linked List can be used to manage gym membership records. It provides practice with node creation, traversal, searching, insertion, deletion, pointers, and dynamic memory allocation in C++.
