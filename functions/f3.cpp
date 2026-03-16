//parameters

#include<iostream>
using namespace std;

int sum(int a, int b){//here a and b are parameters
    int sum = a+ b;
    return sum;
}

int diff(int x, int y=1){ //here we pass val of y, that is called default parameter
    int diff = x-y;
    return diff;
}

int main(){
    cout << sum(2,5) << endl; //here 2 and 5 passing inside function call is arguements
    cout << diff(4); //here, no need to pass 2nd arguement

    return 0;
}