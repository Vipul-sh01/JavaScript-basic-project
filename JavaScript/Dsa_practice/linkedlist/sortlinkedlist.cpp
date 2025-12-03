#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class linkedlist{
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
    void display(node *head){
        node *temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void splitList(node *head, node **firstHalf, node **secondHalf) {
        if (head == nullptr || head->next == nullptr) {
            *firstHalf = head;
            *secondHalf = nullptr;
            return;
        }

        node *slow = head;
        node *fast = head->next;
        while (fast != nullptr) {
            fast = fast->next;
            if (fast != nullptr) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *firstHalf = head;
        *secondHalf = slow->next;
        slow->next = nullptr;
    }
    node* mergeSortedLists(node *list1, node *list2) {
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;

        node *result = nullptr;
        if (list1->data <= list2->data) {
            result = list1;
            result->next = mergeSortedLists(list1->next, list2);
        } else {
            result = list2;
            result->next = mergeSortedLists(list1, list2->next);
        }

        return result;
    }
    void mergeSort(node **headRef) {
        node *head = *headRef;
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        node *firstHalf;
        node *secondHalf;
        splitList(head, &firstHalf, &secondHalf);
        mergeSort(&firstHalf);
        mergeSort(&secondHalf);
        *headRef = mergeSortedLists(firstHalf, secondHalf);
    }
};

int main(){
    node *head = nullptr;
    linkedlist obj;
    int n, val;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>val;
        obj.fun(head, val);
    }
    obj.display(head);
    obj.mergeSort(&head);
    obj.display(head);

    return 0;
}
