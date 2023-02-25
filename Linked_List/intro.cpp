/// elements are not stored at contiguous memory locations
///elements in a linked list are linked using pointers
//It has NODE+NEXT

//WE use POinter = HEAD == its shows where the linked list starts
//NULL = It shows thats its Last Node

// Structure of the node of a singly linked list
typedef struct node{   //typedef-struct = Class
    int data;
    node* next;
}node;