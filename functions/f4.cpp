#include<iostream>
using namespace std;

int mult(int a, int b){
    int mult = a*b;
    return mult;
}

int evenOdd(int num){
    if(num%2 == 0){
        cout << "Even\n" ;
    }else {
        cout << "Odd\n";
    }
    return 0;
}

int main(){
    cout << mult(2,2) << endl;
    cout << evenOdd(23);
    return 0;
}