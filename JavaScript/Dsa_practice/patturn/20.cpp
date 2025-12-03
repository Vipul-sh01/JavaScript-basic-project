#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}


void printManually(Node* head) {
    if (head != NULL) cout << head->data << " → ";
    if (head != NULL && head->next != NULL) cout << head->next->data << " → ";
    if (head != NULL && head->next != NULL && head->next->next != NULL)
        cout << head->next->next->data << " → ";
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 30);  
    insertAtHead(head, 20);  
    insertAtHead(head, 10);  

    printManually(head);     

    return 0;
}
