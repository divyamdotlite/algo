#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Max heap priority queue
    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(10);
    // pq.push(3);
    
    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //     pq.pop();
    // }

    // Min heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(10);
    pq.push(3);
    
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}