#include <iostream>

using namespace std;

// define the Node struct
struct Node {
    int data;
    Node* next;
};

// insert a new node at the beginning of the list
void insertAtBeginning(Node*& head, int newData) {
    Node* newNode = new Node;
    
    ///"newNode" is a pointer to a structure (or class) that has a member called "data"
    newNode->data = newData; //The "->" is called the arrow operator and is used to access a member of a structure
    newNode->next = head;
    head = newNode; 
}

// insert a new node at the end of the list
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* currNode = head;
        while (currNode->next != nullptr) {
            currNode = currNode->next;
        }
        currNode->next = newNode;
    }
}

// delete the first occurrence of a node with the given value
void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* prevNode = head;
    Node* currNode = head->next;
    while (currNode != nullptr) {
        if (currNode->data == value) {
            prevNode->next = currNode->next;
            delete currNode;
            return;
        }
        prevNode = currNode;
        currNode = currNode->next;
    }
}

// print the elements in the list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// delete all nodes in the list
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;  // initialize an empty list
    insertAtBeginning(head, 1);  // insert 1 at the beginning
    insertAtEnd(head, 3);  // insert 3 at the end
    insertAtBeginning(head, 2);  // insert 2 at the beginning
    printList(head);  // print the list: 2 1 3
    deleteNode(head, 1);  // delete the node with value 1
    printList(head);  // print the list: 2 3
    deleteList(head);  // delete all nodes in the list
    return 0;
}
