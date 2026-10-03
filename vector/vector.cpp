#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec(5,-1);
    // for(int i=0; i<vec.size(); i++){
    //     cout<< vec[i]<<" ";
    // }

    // vector<int> vec;
    // cout<<vec.size();
    // cout<<endl;
    // cout<<vec.capacity();
    // cout<<endl;

    // vec.push_back(4);
    // cout<<vec.size();
    // cout<<endl;
    // cout<<vec.capacity();
    // cout<<endl;
    // vec.pop_back();
    // cout<<vec.size();
    // cout<<endl;
    // cout<<vec.capacity();
    // cout<<endl;

    vector<int> arr;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}