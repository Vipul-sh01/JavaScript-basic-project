#include<iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class maxEle{
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

    int maxNumber(Node *head){
        if(head == nullptr){
            return INT_MIN;
        }
        if(head->next == nullptr){
            return head->data;
        }
        return max(head->data, maxNumber(head->next));
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
    maxEle obj;
    int n;
    int val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    obj.display(head);
    cout<<"MAX = "<<obj.maxNumber(head);
    return 0;
}