#include<iostream>
using namespace std;
int main(){
    string s = "Ram is a good boy";
    cout<< s << endl;
    int n = s.length();
    for (int i=0; i<n;i++){
        cout<<s[i];
    }
}