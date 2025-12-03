#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class sumlist{
    // sumof all number in linked list methed ------------------2;
    private:
    int sum = 0;

    public:
    void fun(node *&head, int val){
        node *newnode  = new node();
        newnode->data = val;
        newnode->next = nullptr;
        if(head == nullptr){
            head = newnode;
        }
        else{
            node *temp = head;
            while(temp->next !=nullptr){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        sum = sum+val;
    }

    int getSum() const{
        return sum;
    }

    // sum of all linked list method -------------------------------1;

    // int sum(node *head){
    //     node *temp = head;
    //     int s = 0;
    //     while(temp!=nullptr){
    //         s = s+temp->data;
    //         temp = temp->next;
    //     }
    //     return s;
    //     cout<<endl;
    // }

    //by recurtion methed -------------------------------------------3;

    // int sum(node *head){
    //     node *temp = head;
    //     if(temp !=nullptr){
    //         return temp->data + sum(temp->next);
    //     }
    //     return 0;
    // }


    // int Display(node *head){
    //     node *temp = head;
    //     while(temp!=nullptr){
    //         cout<<temp->data<<" ";
    //         temp = temp->next;
    //     }
    //     cout<<endl;
    // }

    void Display(node *head){
        node *temp = head;
       if(temp != nullptr){
        cout<<temp->data<<" ";
        Display(temp->next);
       }
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
    sumlist obj;
    int n,val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head,val);
    }
    cout<<"Sum = "<<obj.getSum()<<endl;
    obj.Display(head);
    obj.freeMemory(head);
}