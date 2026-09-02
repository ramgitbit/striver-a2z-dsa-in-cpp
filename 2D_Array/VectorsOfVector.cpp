#include <iostream>
using namespace std;
#include <vector>
int main() {
    //As we know 2D arre is array of arres thaa
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {1,2,4};
    vector<int> v3 = {1,4};
    vector<int> v4 = {1,3,4};
    vector<vector<int>> v = {v1,v2,v3,v4}; // jagged array
    for(int i=0; i<v.size(); i++){
        for(int j =0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<< endl;
    }

}