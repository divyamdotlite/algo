int main(){
    Queue q;

    for(int i=1; i<=5; i++){
        q.push(i);
    }

    for(int i=1; i<=5; i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}