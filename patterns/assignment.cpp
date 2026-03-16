#include<iostream>
using namespace std;

int main(){
    
    int n = 5;

//0-1 Triangle pattern
// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1 

    for(int i=0; i<n; i++){
        bool val = true;
        for(int j=0; j<=i; j++){
            cout << val << " ";
            val = !val;
        }
        cout << "\n";
    }

cout << "\n \n";


//Rhombus pattern
//      *****
//     *****
//    *****
//   *****
//  *****

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n \n";

//palindromic pattern with numbers
//     1
//    212
//   32123
//  4321234
// 543212345

for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        cout << " ";
    }

    for(int j=i; j>=1; j--){
        cout << j;
    }

    for(int j=2; j<=i; j++){
        cout << j;
    }
    cout << "\n";
}
return 0;
}