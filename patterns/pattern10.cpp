// Diamond pyramid

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

#include<iostream>
using namespace std;

int main() {
    int n=5;
    //upper pyramid
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }

        for(int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << "\n";
    }

    //lower pyramid
    for(int i=n; i>0; i--){

        for(int k=1; k<=n-i; k++){
            cout << " ";
        }

        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}