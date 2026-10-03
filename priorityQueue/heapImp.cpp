#include <iostream>
// #include <string>
#include <Vector>
#include <queue>
using namespace std;

class Heap{
    vector<int> vec; //Max Heap
public:
    void push(int val) {
        // insert
        vec.push_back(val);

        // Fix Heap
        int x = vec.size()-1; //childI
        int parI = (x-1)/2;

        while(parI >=0 && vec[x] > vec[parI]){
            swap(vec[x], vec[parI]);
            x = parI;
            parI = (x-1)/2;
        }

        // while(parI >=0 && vec[x] < vec[parI]){ //min heap
        //     swap(vec[x], vec[parI]);
        //     x = parI;
        //     parI = (x-1)/2;
        // }
    }

    void heapify(int i) { //i = parI
        if(i >= vec.size()){
            return;
        }

        int l = 2*i + 1;
        int r = 2*i + 2;

        int maxIdx = i;
        if(l < vec.size() && vec[l] > vec[maxIdx]) {
            maxIdx = l;
        }

        if(r < vec.size() && vec[r] > vec[maxIdx]) {
            maxIdx = r;
        }

        swap(vec[i], vec[maxIdx]);
        if(maxIdx != i) { // swapping with child node
            heapify(maxIdx);
        }
    }

    void pop() {
        swap(vec[0], vec[vec.size()-1]);

        vec.pop_back();

        heapify(0); //O(logn)
    }

    int top() { //O(1)
        return vec[0]; //highest priority element
    }

    bool empty() {
        return vec.size() == 0;
    }
};

class Student { //"<" overload
public:
    string name;
    int marks;

    Student(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj) const {
        return this->marks < obj.marks;
    }
};

int main(){
    // Heap heap;
    // heap.push(50);
    // heap.push(10);
    // heap.push(100);
    // cout << "Top = " << heap.top() << endl; //100
    // heap.pop();
    // cout << "Top = " << heap.top() << endl; //50

    // priority_queue<Student> pq;
    // pq.push(Student("aman", 85));
    // pq.push(Student("bhumika", 95));
    // pq.push(Student("chetan", 65));
    // while(!pq.empty()) {
    //     cout << "top = " << pq.top().name << ", " << pq.top().marks << endl;
    //     pq.pop();
    // }

    priority_queue<pair<string, int>> pq; //default - maxHeap; "first"
    pq.push(make_pair("aman", 85));
    pq.push(make_pair("bhumika", 95));
    pq.push(make_pair("chetan", 65));
    while(!pq.empty()) {
        cout << "top = " << pq.top().first << ", " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}