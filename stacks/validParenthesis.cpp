#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidParenthesis(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '[' || ch == '{'){
            s.push(ch);
        } else {
            // closing wala
            if(s.empty()){
                return false;
            }

            // match
            int top = s.top();
            if((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}') ){
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main(){
    string str1 = "([}])"; // invalid
    string str2 = "([{}])"; // valid

    cout << isValidParenthesis(str1) << endl; // 0
    cout << isValidParenthesis(str2) << endl; // 1
    return 0;
}