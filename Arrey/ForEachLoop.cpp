#include<iostream>
#include<vector>
using namespace  std;

int main(){
    vector<int> v = {1,2,3,4,5};
    for(int i =0 ; i<v.size();i++){
        cout<<v[i]<<" ";
        }
        for(int ele : v){  ///isme ek ho order me printing hoti hai
            cout<<ele<<" ";
        }
}