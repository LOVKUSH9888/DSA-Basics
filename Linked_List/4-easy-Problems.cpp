//Insert a node at the beginning of a linked list:-
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBegin(Node** headRef, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

int main() {
    Node* head = NULL;
    insertBegin(&head, 2);
    insertBegin(&head, 1);
    printList(head);
    return 0;
}

//2.Delete the first occurrence of a given element in a linked list:
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteNode(Node** headRef, int key) {
    Node* current = *headRef;
    Node* previous = NULL;
    while (current != NULL && current->data != key) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        return;
    }
    if (previous == NULL) {
        *headRef = current->next;
    }
    else {
        previous->next = current->next;
    }
    delete current;
}

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = NULL;
    deleteNode(&head, 2);
    printList(head);
    return 0;
}

//3.Find the length of a linked list:
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int getLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = NULL;
    cout << getLength(head);
    return 0;
}


//4.Reverse a linked list:
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void reverseList(Node** headRef) {
    Node* previous = NULL;
    Node* current = *headRef;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *headRef = previous;
}

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data

