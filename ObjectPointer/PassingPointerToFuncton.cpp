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
   ///change(Cricketer c) pass by value hai to result nahi change hoga.
void change(Cricketer* c){    ///change(Cricketer& c) pass by ref hai to result  change hoga witthout pointer approach.
   //(*c).avg = 99.9;  /// iska dusra tarika
   c->avg=99.9;  //// *c.avg == c->avg
}
int main(){
    Cricketer c{"Ms",5000, 88.8};
    change(&c); /// maine address bhja function to waha adddress ponterme recieve hota hai to waha *  --> * kar do
    cout<<c.avg<<endl;

}
