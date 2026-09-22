#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    // Constructor
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


// ================= DISPLAY =================

void display(Node* head) {

    Node* temp = head;

    // Jab tak temp NULL nahi hota,
    // tab tak list ke har node ko print karo
    while(temp != NULL) {

        cout << temp->val << " ";

        // Agle node par move karo
        temp = temp->next;
    }
}


// ================= INSERT AT HEAD =================

void insertAtHead(Node*& head, int val) {

    // New node create karo
    Node* t = new Node(val);

    // New node ka next purane head ko point karega
    //
    // Before:
    // head
    //  ↓
    // 10 → 20 → 30 → NULL
    //
    // t
    // ↓
    // 60 → NULL
    //
    // After t->next = head:
    // 60 → 10 → 20 → 30 → NULL

    t->next = head;

    // Ab head ko new node par shift karo
    //
    // head
    //  ↓
    // 60 → 10 → 20 → 30 → NULL

    head = t;
}


// ================= INSERT AT TAIL =================

void insertAtTail(Node* head, int val) {

    // New node create karo
    // New node ka next automatically NULL hoga
    Node* t = new Node(val);

    // temp ko head se start karenge
    Node* temp = head;

    // Jab tak temp last node par nahi pahunchta,
    // tab tak temp ko aage move karte raho.
    //
    // Last node ki condition:
    // temp->next == NULL
    //
    // Example:
    // 10 → 20 → 30 → NULL
    //               ↑
    //              temp

    while(temp->next != NULL) {

        // Agle node par move karo
        temp = temp->next;
    }

    // Ab temp last node par hai.
    // Last node ke next mein new node laga do.
    //
    // Before:
    // 10 → 20 → 30 → NULL
    //
    // After:
    // 10 → 20 → 30 → 40 → NULL

    temp->next = t;
}


int main() {

    // Nodes create karna
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Nodes ko connect karna
    a->next = b;
    b->next = c;
    c->next = d;

    // Head first node ko point karega
    Node* head = a;


    // ================= BEFORE =================

    cout << "Before: ";
    display(head);


    // ================= INSERT AT HEAD =================

    // 60 ko beginning mein insert karo
    insertAtHead(head, 60);

    cout << "\nAfter inserting at head: ";
    display(head);


    // ================= INSERT AT TAIL =================

    // 80 ko end mein insert karo
    insertAtTail(head, 80);

    cout << "\nAfter inserting at tail: ";
    display(head);
}