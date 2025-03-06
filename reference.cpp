#include <iostream>

using namespace std;

void increment(int& value){
    value++;
}
int main(){

    string food = "hamburger";
    string& meal = food;
    food = "pizza";

    meal = "piz_ref";
    cout << "food:" << food << endl;
    cout << "meal:" << meal << endl;
//==========================================================
    // int a = 10;
    // increment(a);
    // cout << "a:" << a << endl;

    // int a = 10;
    // int& ref = a;
    // cout << "a:" << a << endl;
    // cout << "ref:" << ref << endl;

    // ref = 20;
    // cout << "a: " << a << endl;
    // cout << "ref: " << ref << endl;
    
}