#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class Demo{
    public:
    int fun(Node *&head, int v){
        Node *newnode = new Node();
        newnode->data = v;
        newnode->next = nullptr;

        if(head == nullptr){
            head = newnode;
        }
        else{
            Node *temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    int Display(Node *head){
        Node *temp = head;
        while(temp->next != nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Node *head = nullptr;
    Demo obj;
    int n;
    cin>>n;
    int v;
    for(int i = 0; i<n; i++){
        cin>>v;
        obj.fun(head, v);
    }
    obj.Display(head);
}