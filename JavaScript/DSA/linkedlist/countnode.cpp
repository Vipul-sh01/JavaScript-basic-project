#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class linklist{
    // count node there is method -------------------------4;
    private:
    int c = 0;

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
        c++;
    }
    int getCount() const{
        return c;
    }

    // method ----------------------------------1;

    // int count(node *head){
    //     node *temp = head;
    //     int c = 0;
    //     while(temp!=nullptr){
    //         temp = temp->next;
    //         c++;
    //     }
    //     return c;
    // }

    // by recurstion method--------------------- 2;


    // int count(node *head){
    //     node *temp = head;
    //     if(temp != nullptr){
    //         return count(temp->next)+1;
    //     }
    //     // return 0;
    // }


    // Anther method --------------------------------3;

    // int count(node *head){
    //     node *temp = head;
    //     int x = 0;
    //     if(temp){
    //         x = count(temp->next);
    //         x = x+1;
    //     }
    //     return x;
    // }


    void display(node *head){
        node *temp = head; 
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void freeMemory(node *&head) {
        node *temp;
        while(head != nullptr){
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main(){
    node *head = nullptr;
    linklist obj;
    int n, val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    cout<<"There are node: "<<obj.getCount()<<endl;
    obj.display(head);
}