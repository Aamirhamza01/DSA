#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {

    // Nodes create
    Node* first = new Node();
    Node* second = new Node();
    Node* Third = new Node();
    Node* Fourth = new Node();

// Data assign
    first->data = 10;
    second->data = 20;
    Third->data = 30;
    Fourth->data = 40;

    // Nodes connect
    first->next = second;
    second->next = Third;
    Third->next = Fourth;
    Fourth->next = NULL;

    // Linked List print
    Node* temp = first;

    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}