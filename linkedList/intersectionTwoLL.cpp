#include <iostream>
using namespace std;

class Node{
public:
    Node* next;
    int data;

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

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

Node* getIntersectionNode(Node* headA, Node* headB){
    Node* a = headA;
    Node* b = headB;
    while(a!=b){
        a = (a == nullptr) ? headB : a->next;
        b = (b == nullptr) ? headA : b->next;
    }
    return a;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main(){
    List ll1;
    List ll2;

    ll1.push_back(1);
    ll1.push_back(2);
    ll1.push_back(3);
    ll1.push_back(6);
    ll1.push_back(7);

    ll2.push_back(4);
    ll2.push_back(5);
    ll2.tail->next = ll1.head->next->next->next;
    Node* intersection = getIntersectionNode(ll1.head, ll2.head);

    if(intersection)
        cout << "Intersection at node: " << intersection->data;
    else
        cout << "No intersection";
    return 0;
}