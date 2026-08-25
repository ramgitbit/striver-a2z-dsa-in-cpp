#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main(){
    vector<int> v = {1,7,2,9,3,4,5};
    //sort(v.begin(), v.end());  //ascending
    reverse(v.begin()+1, v.end()); // reverse karega  +1 == 1 ko chodkar sabko reverse karega no +1 to sabko reverse karega
    for(int ele: v) cout<<ele<<" ";
    
}