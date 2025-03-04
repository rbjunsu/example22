#include <iostream>
using namespace std; 

class Hamburger {

    private:
        int bun;
        int patty;
        int cheese;
        int lettuce;

    public: 
        Hamburger(){}

        void SetBun(int bun){
            this->bun = bun;
        }
        void Setpatty(int patty){
            this->patty = patty;
        }
        void Setcheese(int cheese){
            this->cheese = cheese;
        }
        void Setlettuce(int lettuce){
            this->lettuce = lettuce;
        }
        void print(){
            cout << "bun =" << this->bun << endl;
        }
}; 

int main(){

Hamburger class1_variable;
class1_variable.SetBun(1);
class1_variable.Setpatty(2);

Hamburger class2_variable;
class2_variable.SetBun(1);
class2_variable.Setpatty(2);
class2_variable.Setcheese(3);
class2_variable.Setlettuce(4);
class1_variable.print();

}