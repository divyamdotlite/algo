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

    void delNodeAfter(int m, int n){

        if(head == NULL || m <= 0)
            return;

        Node* prev = head;

        while(prev != NULL){

            // Step 1: Skip m-1 nodes
            for(int i = 1; i < m && prev != NULL; i++){
                prev = prev->next;
            }

            if(prev == NULL)
                break;

            // Step 2: Delete next n nodes
            Node* curr = prev->next;

            for(int i = 0; i < n && curr != NULL; i++){
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }

            // Step 3: Reconnect
            prev->next = curr;

            // Step 4: Update tail if needed
            if(curr == NULL){
                tail = prev;
            }

            // Move forward
            prev = curr;
        }
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



int main(){
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    printList(ll.head);    
    ll.delNodeAfter(2, 2);
    printList(ll.head);

    return 0;    
}

// delete n nodes after m nodes