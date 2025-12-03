#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

class linklist {
    public:
    // Insert a new node at the beginning
    void insertAtBeginning(node *&head, int value) {
        node *newnode = new node();
        newnode->data = value;
        newnode->next = head; // Point new node to the current head
        head = newnode;       // Update head to the new node
    }

    void display(node *head) {
        node *temp = head;
        while(temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    node *head = nullptr;
    linklist obj;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements to insert at the beginning:\n";
    for(int i = 0; i < n; i++) {
        cin >> value;
        obj.insertAtBeginning(head, value); // Insert each element at the beginning
    }
    
    cout << "Linked list: ";
    obj.display(head);
}
