#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrom(char word[], int n){
    int st=0, end=n-1;
    while(st<end){
        if(word[st]!=word[end]){
            return false;
        }
        st++; end--;
    }
    return true;
}

int main(){
    char word[] = "racecar";
    cout<<isPalindrom(word,strlen(word));
    return 0;
}