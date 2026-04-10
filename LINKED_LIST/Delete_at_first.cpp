#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to delete first node
Node* deleteFirst(Node* head) {
    // Agar list empty hai
    if (head == NULL) {
        cout << "List already empty\n";
        return NULL;
    }

    // First node ko delete karna
    Node* temp = head;
    head = head->next;   // head ko aage badha diya
    delete temp;         // purana first node delete

    return head;
}

// Display function
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    // Sample list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    cout << "Before deletion:\n";
    display(head);

    head = deleteFirst(head);

    cout << "After deletion:\n";
    display(head);

    return 0;
}