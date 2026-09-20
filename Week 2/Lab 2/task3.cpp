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

void display() {
    Node* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void findOccurrences(int target) {
    Node* temp = head;
    int index = 0;
    int count = 0;

    cout << "Positions of " << target << ": ";
    while (temp != NULL) {
        if (temp->data == target) {
            cout << index << " ";
            count++;
        }
        temp = temp->next;
        index++;
    }

    if (count == 0) {
        cout << "Not found";
    }
    cout << "\nTotal occurrences: " << count << endl;
}

int main() {
    int n, val, target;
    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> val;
        insert(val);
    }

    display();

    cout << "Enter value to search: ";
    cin >> target;

    findOccurrences(target);

    return 0;
}
