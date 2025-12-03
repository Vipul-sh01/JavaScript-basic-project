#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

class linklist {
public:
    // Function to insert a node at the k-th position
    void insertAtKthPosition(node *&head, int value, int k) {
        node *newnode = new node();
        newnode->data = value;
        newnode->next = nullptr;

        // If inserting at the beginning
        if (k == 1) {
            newnode->next = head;
            head = newnode;
            return;
        }

        // Traverse to the (k-1)-th node
        node *temp = head;
        for (int i = 1; i < k - 1; i++) {
            if (temp == nullptr) {
                cout << "Position " << k << " is out of bounds." << endl;
                delete newnode; // Clean up the newly created node
                return;
            }
            temp = temp->next;
        }

        // Insert the new node at k-th position
        newnode->next = temp->next;
        temp->next = newnode;
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
    int n, value, k;

    cout << "Enter the number of elements to initially add: ";
    cin >> n;
    cout << "Enter the elements to add at the end:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        obj.insertAtKthPosition(head, value, i + 1); // Insert at the end initially
    }

    cout << "Enter value and position to insert: ";
    cin >> value >> k;
    obj.insertAtKthPosition(head, value, k); // Insert at the specified position

    cout << "Updated Linked List: ";
    obj.display(head);
}
