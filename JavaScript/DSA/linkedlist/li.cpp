#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class linklist{
    public:
    void fun(node *&head, int val){
        node *newnode = new node();
        newnode->data = val;
        newnode->next = nullptr; 
        if(head == nullptr){
            head = newnode;
        }
        else{
            node *temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void displayList(node *head){
        node *temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    node *head  = nullptr;
    linklist obj;
    int n, val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    obj.displayList(head);
}