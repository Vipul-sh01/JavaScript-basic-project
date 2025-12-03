#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class linked{
    public:
    int fun(Node *&head, int val){
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if(head == nullptr){
            head =newNode;
        }
        else{
            Node *temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    int count(Node *head){
        Node *temp = head;
        int c = 0;
        while(temp->next != nullptr){
            temp = temp->next;
            c++;
        }
        return c;
    }
    void display(Node *head){
        Node *temp = head;
        while(temp->next != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Node *head = nullptr;
    linked obj;
    int n;
    int val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    obj.display(head);
    cout<<"count = "<<obj.count(head);
}