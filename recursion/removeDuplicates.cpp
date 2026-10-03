#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str, string ans,int i, int map[26]){
    if(i==str.size()){
        return ans; 
    }

    int mapIdx = (int)(str[i]-'a');

    if (map[mapIdx]) { //duplicate
        return removeDuplicates(str, ans, i+1, map);
    }
    else{ //not duplicate
        map[mapIdx] = 1;
        return removeDuplicates(str, ans+str[i],i+1,map);
    }
}
int main(){
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {0};
    cout<< removeDuplicates(str,ans,0,map);
    return 0;
}