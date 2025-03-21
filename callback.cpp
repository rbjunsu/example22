#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;
int main(){

vector<int> numbers ={4,2,5,1,3};
sort(numbers.begin(), numbers.end()), [](int a, int b){
    return a < b;
};    




}