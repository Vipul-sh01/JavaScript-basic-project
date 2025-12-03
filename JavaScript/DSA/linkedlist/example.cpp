#include <iostream>
using namespace std;

struct Node {
    int data;        
    struct Node* next;      
};


class LinkedList {
private:
    Node* head;      

public:
    LinkedList() {
        head = nullptr;
    }
    void insert(int value) {
        Node* newNode = new Node();  
        newNode->data = value;    
        newNode->next = nullptr; 
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    LinkedList list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(1);
    cout << "Linked List: ";
    list.display();
    return 0;
}
