// Non-Primitive data strutures
//   Derived from primitive data structures
//     thus, also called derived or complex data structures
//   Can store multiple values of SAME as well as DIFFERENT TYPE
//   Represent relationship between different data elements
//   Size can be changed dynamically

// TYPES OF NON PRIMTIVE DATA STRUCTURES
// 1) Linear DS
//    Elements are arranged sequentially
//    So, each element(except the first and last) has a
//     i) predecessor
//    and ii) successor

// a) Array
//   A collection of elements stored in contiguous memory locations

//  ADVANTAGES
//    Fast access(elements can be directly accessed by indexing)
//    Memory efficient(uses minimal amount of memory)

//  DISADVANTAGES
//    Fixed size(cannot be shrinked or expanded dynamically)
//    Homogenous data storage
//    Requires one large contiguous block of memory, which 
//       does not exist sometimes

int arr[5] = {1, 2, 3, 4, 5};

// b) Linked List
//   Collection of nodes 
//   Each node consists of 
//    a) data     and    b) pointer that points to the address of
//                            next node

// Advantages
//  Dynamic size
//  Insertion/deletion is not costly as
//   no shifting is required due to absence of indexing
//  Can be created using small scattered pieces of memory

//  Disadvantages
//   No direct access(as there is no indexing)
//   Extra space is required for pointer
//   Homogenous data storage

//  Stack
//  A linear data structure that follows LIFO(Last in 
//   First Out) principle.
//  Like a physical stack of plates
//  Elements are added and removed from only
//   one end, called the "top" of the stack

//  Operations on a stack
//  1) push()
//   Add element to the top of the stack
//   psuedocode idea
//   stack.push(12)


//  2) pop()
//   Removes element from the top of the stack
//   psuedocode idea
//   stack.pop()


//  3) top()/peek()
//   Returns the top/first element without removing it
//   psuedocode idea
//   stack.top()


//  4) empty()
//   Check whether  stack is empty or not
//   or to check stack underflow
//   psuedocode idea
//    stack.empty()


//   returns true if stack is empty else false
