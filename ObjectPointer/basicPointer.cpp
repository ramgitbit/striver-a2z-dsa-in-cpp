#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int runs;
float avg;
Cricketer(string s, int r, float a){ ///// it is a constructor
    name = s ;
    runs = r;
    avg = a;
}
};
int main(){
    Cricketer c{"Ms",5000, 88.8};
    Cricketer*p= &c; ///// initialization of object pointer
    cout<<(*p).avg<<endl;  /// printing value of obj using obj pointer
    cout<<p<<endl;  /// printing address of obj using obj pointer
   

}
