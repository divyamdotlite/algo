#include <iostream>
using namespace std;

void changeAval(int a){
    a = 20;
    cout<<a<<endl;
}

void changeAref(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}
int main(){
    int a = 69;
    // int *ptr = &a;
    // int **pptr = &ptr;
    // cout<< &a <<" = "<<ptr;
    // cout<<endl;
    // cout<< &ptr <<" = "<<pptr;
    // cout<<endl;
    // cout<<"Address: "<<&a<<" Value: "<<*(&a)<<endl;
    // int *ptr2 = NULL;
    // cout<<ptr2<<endl;

    // Pass by value
    cout<<"// Pass by value"<<endl;
    changeAval(a);
    cout<<a<<endl;

    cout<<"// Pass by reference"<<endl;
    changeAref(&a);
    cout<<a;
    return 0;
}
