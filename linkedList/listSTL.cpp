#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<" -> ";
    }
    cout<<"NULL\n";
}

int main(){
    list<int> ll; // vector<int> arr
    // list<int>::iterator itr = ll.begin();
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    printList(ll);
    cout<<"Size: "<<ll.size() << endl;
    cout<<"Head: "<<ll.front() << endl;
    cout<<"Tail: "<<ll.back() << endl;
    // ll.insert(itr, 3, 2);
    // printList(ll);
    return 0;
}