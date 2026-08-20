#include <iostream>
using namespace std;
struct Rec{
    int l;
    int b;
};
int main()
{
   Rec r1;
   Rec r2;
   cout<<"enter input for r1"<<endl;
   cin >> r1.l>>r1.b;
    cout << "Area1 = "<< r1.l * r1.b<< endl;
   cout<<"enter input for r2"<<endl;
   cin >> r2.l>>r2.b;
  
   cout << "Area2 = "<< r2.l * r2.b;
   

    return 0;
}