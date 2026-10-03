#include <iostream>
using namespace std;

// Stack using array
class Stack{
    int arr[100];
    int idx = 0;
public:
    void push(int val){
        if(idx == 100){
            cout<<" Stack overflow!";
            return;
        }
        arr[idx++] = val;
    }

    void pop(){
        if(idx == 0){
            cout<<" Stack is empty!";
            return;
        }
        idx--;
    }
    
    int top(){
        if(idx == 0){
            cout<<" Stack is empty!\n";
            return -1;
        }
        return arr[idx - 1];
    }
    
    bool isEmpty(){
        return idx == 0;
    }
};

int main(){
    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}