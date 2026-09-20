#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayForward() {
    Node* temp = head;
    cout << "Forward List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayReverseRecursive(Node* temp) {
    if (temp == NULL) {
        return;
    }
    displayReverseRecursive(temp->next);
    cout << temp->data << " ";
}

void displayReverseLoop() {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    for (int i = count - 1; i >= 0; i--) {
        Node* curr = head;
        for (int j = 0; j < i; j++) {
            curr = curr->next;
        }
        cout << curr->data << " ";
    }
    cout << endl;
}

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        insert(val);
    }

    displayForward();

    cout << "Reverse (Recursive): ";
    displayReverseRecursive(head);
    cout << endl;

    cout << "Reverse (Loop): ";
    displayReverseLoop();

    return 0;
}
