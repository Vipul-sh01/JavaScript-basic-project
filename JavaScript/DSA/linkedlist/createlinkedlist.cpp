#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;  
};

int main() {
    Node* head = nullptr; 
    Node* second = nullptr; 
    Node* third = nullptr; 
    head = new Node; 
    second = new Node; 
    third = new Node; 
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;  
    third->next = nullptr; 
    cout << "Data: " << head->data << endl;
    cout << "Data: " << second->data << endl;
    cout << "Data: " << third->data << endl;
    
    return 0;
}
