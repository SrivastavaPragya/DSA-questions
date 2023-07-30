// calculating the lenght og linked list

#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

int Length(Node* head) {
    int len = 0; // Renamed the local variable
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        len++;
    }
    return len;
}

int main() {
    Node n1(1);
    Node* head = &n1; // storing the address of the first node
    Node n2(2);
    Node n3(3);

    // Establishing connections between the nodes
    n1.next = &n2;
    n2.next = &n3;

    int length = Length(head);
    cout << "Length of the linked list: " << length << endl;

    return 0;
}
