#include <iostream>
#include <cstring>
using namespace std;

void reverseArr(char word[], int n){
    int st=0, end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++; end--;
    }
    return word;
}

int main(){
    char word[] = "divyam";
    reverseArr(word,strlen(word));
    return 0;
}