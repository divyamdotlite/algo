#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            return;
        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

};

void printList(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

bool isCycle(Node* head){
    Node* slow = head; //+1
    Node* fast = head; //+2

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cout<<"Cycle exist\n";
            isCycle = true;
            break;
        }
    }

    if(!isCycle){
        cout<<"Cycle doesn't exist\n";
        return;
    }

    slow = head;

    if(slow == head){ // special case
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL; // remove cycle
    } else {
        Node* prev = fast;
        while(slow!=fast){
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // remove cycle
    }
}

int main(){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.head;
    // 1->2->3->4->!

    removeCycle(ll.head);
    printList(ll.head);
    return 0;
}