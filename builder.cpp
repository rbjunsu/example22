#include <iostream>
using namespace std;

class fruits {


//==================빌더 패턴==================//



//==================자바빈 패턴==================//
    // private:
    //     int strawberry;
    //     int watermelon;
    //     int banana;
    // public:
    //     fruits(){};
    //     void set1(int red) { strawberry = red; }
    //     void set2(int green) {  watermelon = green; }
    //     void set3(int yellow) { banana = yellow; }
    
    //     void print(){
    //         cout << "current state " << endl;
    //         cout << "strawberry = " << this->strawberry << endl;
    //         cout << "watermelon = " << this->watermelon << endl;
    //         cout << "banana = " << this->banana << endl;
    //     }
//==================점층적 생성자 패턴==================//
    // private:
    //     int strawberry;
    //     int watermelon;
    //     int banana;
    
    // public:
    //     fruits(int red){
    //         this->strawberry = red;
    //     }
    //     fruits(int red, int green){
    //         this->strawberry = red;
    //         this->watermelon = green;
    //     }
    //     fruits(int red, int green, int yellow){
    //         this->strawberry = red;
    //         this->watermelon = green;
    //         this->banana = yellow;
    //     }
    //     void print(){
    //         cout << "current state " << endl;
    //         cout << "strawberry = " << this->strawberry << endl;
    //         cout << "watermelon = " << this->watermelon << endl;
    //         cout << "banana = " << this->banana << endl;
    //     }
//==============================================//

};

int main(){

//==================빌더 패턴==================//



//==================자바빈 패턴==================//
// fruits f_class1;
// f_class1.set1(1);
// f_class1.print();
// f_class1.set2(2);
// f_class1.print();
// f_class1.set3(3);
// f_class1.print();
//==================점층적 생성자 패턴==================//
// fruits f_class1 = fruits(1);
// f_class1.print();
// fruits f_class2 = fruits(10,20,30);
// f_class2.print();
// f_class1.print();
//==============================================//

}