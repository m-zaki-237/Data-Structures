#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
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

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* mergeLists(Node* list1, Node* list2) {
    Node* list3 = NULL;
    Node* temp = list1;
    while (temp != NULL) {
        insert(list3, temp->data);
        temp = temp->next;
    }
    temp = list2;
    while (temp != NULL) {
        insert(list3, temp->data);
        temp = temp->next;
    }
    return list3;
}

int main() {
    Node* list1 = NULL;
    Node* list2 = NULL;
    int n1, n2, val;

    cout << "Enter number of elements for List 1: ";
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cout << "Enter element: ";
        cin >> val;
        insert(list1, val);
    }

    cout << "Enter number of elements for List 2: ";
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cout << "Enter element: ";
        cin >> val;
        insert(list2, val);
    }

    cout << "List 1: ";
    display(list1);

    cout << "List 2: ";
    display(list2);

    Node* list3 = mergeLists(list1, list2);
    cout << "Merged List: ";
    display(list3);

    return 0;
}
