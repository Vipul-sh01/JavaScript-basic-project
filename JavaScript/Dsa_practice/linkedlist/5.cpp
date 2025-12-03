#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class searching{
    public:
    int fun(Node *&head, int val){
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;

        if(head == nullptr){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // int search(Node *head, int t){
    //     Node *temp = head;
    //     while(temp != nullptr){
    //         if(temp->data == t){
    //             return temp->data;
    //         }
    //         temp = temp->next;
    //     }
    // }

    int search(Node *head, int t){
        Node *temp = head;
        if(temp == nullptr){
            return -1;
        }
        if(temp->data == t){
            return temp->data;
        }
        return search(temp->next, t);
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
    searching obj;
    int n;
    int val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    obj.display(head);
    int t;
    cout<<"Enter the target = ";
    cin>>t;
    cout<<"Search Number is = "<<obj.search(head, t);
}