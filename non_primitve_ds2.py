# Linked List:
#  A linear data structure which contains nodes
#  Each node consists of
#  a) data   b) one or more pointers(references)
#                to the address of next node(s)
#  Not stored in contiguous memory locations

#  Does not require one large continuous block of
#  memory and can use small scattered pieces of memory
#  Insertion/deletion is easy - O(1)
#  Dynamic size

# No direct access - requires searching - O(n)
# Homogenous data storage
# Extra memory is required for storing pointer(s)


# Types of linked list
# a) Singly linked list  b) Doubly linked list
# c) Circular linked list

# a) Singly linked list
#  A type of linked list in which
#  Each node consists of
#  a) data    b) only one pointer

# Traversal - UNIDIRECTIONAL

# Basic code for creating a singly linked list
#  (in Python)

class Node:
    def __init__(self, new_data):
        self.data = new_data
        self.next = None

# Creating nodes
node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
node4 = Node(40)
# Right now, these nodes are not linked to
# to each other. They exist independently

# Linking the nodes together
node1.next = node2
node2.next = node3
node3.next = node4

# node4.next = None because we didnt overwrite its default value

# Basic operations on a Singly Linked List
# 1) Traversal
#   Means visiting each node sequentially from head node to the
#     last node 
