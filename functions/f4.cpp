#include<iostream>
using namespace std;

int mult(int a, int b){
    int mult = a*b;
    return mult;
}

//check for even odd
int evenOdd(int num){
    if(num%2 == 0){
        cout << "Even\n" ; //print even
    }else {
        cout << "Odd\n"; //print odd
    }
    return 0;
}

int main(){
    cout << mult(2,2) << endl;  //calling multiplication func
    cout << evenOdd(23); //calling even-odd function
    return 0;
}