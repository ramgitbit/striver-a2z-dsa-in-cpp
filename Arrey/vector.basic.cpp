#include<iostream>
#include<vector>
using namespace  std;

int main(){
    vector <int> v(7); //7 size ka ek vector (array) bana jisme 7 elemet hai default "0 hain."
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(-6);
    cout<<v.size()<<" "<<v.capacity()<<endl;

}