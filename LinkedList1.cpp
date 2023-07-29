#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

void Print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

int main() {
    Node n1(1);
    Node* head = &n1; // storing the address of the first node
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    // Establishing connections between the nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    Print(head);

    return 0;
}

