#include<iostream>
using namespace std;
int main(){
    string s = "Ram is a good boy";
    int count = 0;
    int n = s.length();
    string v= "aeiouAEIOU";
    for (int i=0; i<n;i++){
        if (s[i] == 'a'||s[i] == 'u' ||s[i] == 'o' ||s[i] == 'i' ||s[i] == 'e'){
            count += 1;
        }
    }
    cout<<count;
}