#include<iostream>
#include<vector>
using namespace  std;
// void change(vector<int> v){  ///vector is pass by vlue while array is passed by reference
//     v[2] = 99;
// }
void change(vector<int> &v){// Now  pass by reference (&)..
    v[2] = 99;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    change(v);
    cout<<v[2];  /// dekho naa nahi huaa change jaise aare-ay hota hai >>array is passed by reference
    v[2] = 99;
}