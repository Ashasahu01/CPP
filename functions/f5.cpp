//factorial

#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }

    cout << "factorial("<< num << ") = " << fact << endl;

    return fact;
}

int main(){
    fact(1);
    fact(2);
    fact(3);
    fact(4);
    fact(5);

    return 0;
}