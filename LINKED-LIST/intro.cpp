/// elements are not stored at contiguous memory locations
///elements in a linked list are linked using pointers
//It has NODE+NEXT

//WE use POinter = HEAD == its shows where the linked list starts
//NULL = It shows thats its Last Node

//Basics Practice:-
///Que : - create 3 node LL in c++

#include <iostream>
using namespace std;

// Define a structure for the linked list node
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create the first node of the linked list and set its data to 1
    Node* head = new Node();
    head->data = 1;

    // Create the second node of the linked list and set its data to 2
    Node* second = new Node();
    second->data = 2;

    // Create the third node of the linked list and set its data to 3
    Node* third = new Node();
    third->data = 3;

    // Link the nodes together by setting the "next" pointer of each node
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Traverse the linked list and print each node's data
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    // Free the memory allocated for the nodes
    delete head;
    delete second;
    delete third;

    return 0;
}












































// Structure of the node of a singly linked list
typedef struct node{   //typedef-struct = Class
    int data;
    node* next;
}node;

//Complete LL :-

#include <iostream>

using namespace std;

// Define the structure of each node in the linked list
struct Node {
    int data;
    Node* next;
};

// Define the linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Destructor
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Add a node to the beginning of the list
    void addNode(int newData) {
        Node* newNode = new Node;   //newNode == temp
        newNode->data = newData;
        newNode->next = head;
        head = newNode;
    }

    // Delete a node from the list
    void deleteNode(int delData) {
        Node* current = head;
        Node* prev = NULL;
        while (current != NULL && current->data != delData) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) {
            cout << "Node not found in the list.\n";
            return;
        }
        if (prev == NULL) {
            head = current->next;
        } else {
            prev->next = current->next;
        }
        delete current;
        cout << "Node with data " << delData << " deleted from the list.\n";
    }

    // Display the contents of the list
    void displayList() {
        Node* current = head;
        if (current == NULL) {
            cout << "The list is empty.\n";
            return;
        }
        cout << "The contents of the list are: ";
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Main function for testing the linked list
int main() {
    LinkedList myList;

    myList.addNode(5);
    myList.addNode(10);
    myList.addNode(15);
    myList.displayList();

    myList.deleteNode(10);
    myList.displayList();

    myList.deleteNode(20);

    return 0;
}
