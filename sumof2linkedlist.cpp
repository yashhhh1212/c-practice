#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Utility function to get the length of a linked list
int getLength(Node* head) {
    int len = 0;
    while (head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

// Utility function to push a node to the front of the result list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Recursively adds same-size sublists and propagates carry from right to left
void addSameSize(Node* head1, Node* head2, int& carry, Node** result) {
    if (head1 == NULL) return;

    // Recursively go to the end (rightmost node)
    addSameSize(head1->next, head2->next, carry, result);

    int sum = head1->data + head2->data + carry;
    carry = sum / 10;
    push(result, sum % 10);
}

// Propagates carry through the remaining nodes of the longer list
void propagateCarry(Node* head1, Node* cur, int& carry, Node** result) {
    if (head1 != cur) {
        propagateCarry(head1->next, cur, carry, result);
        int sum = head1->data + carry;
        carry = sum / 10;
        push(result, sum % 10);
    }
}

// Main function to add two linked lists
void addLists(Node* head1, Node* head2, Node** result) {
    if (head1 == NULL) {
        *result = head2;
        return;
    }
    if (head2 == NULL) {
        *result = head1;
        return;
    }

    int size1 = getLength(head1);
    int size2 = getLength(head2);
    int carry = 0;

    Node* cur = head1;
    // Ensure head1 points to the longer list
    if (size1 < size2) {
        cur = head2;
        head2 = head1;
        head1 = cur;
    }

    int diff = abs(size1 - size2);
    cur = head1;
    while (diff--) {
        cur = cur->next;
    }

    // Add the equal-sized parts
    addSameSize(cur, head2, carry, result);

    // Add carry to the remaining prefix of the longer list
    propagateCarry(head1, cur, carry, result);

    // If carry is still left, add a new node at the beginning
    if (carry > 0) {
        push(result, carry);
    }
}

// Utility function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Sample Input: 5->6->3 and 8->4->2
    Node* head1 = new Node(5);
    head1->next = new Node(6);
    head1->next->next = new Node(3);

    Node* head2 = new Node(8);
    head2->next = new Node(4);
    head2->next->next = new Node(2);

    Node* result = NULL;
    addLists(head1, head2, &result);

    printList(result);

    return 0;
}
