//FORWARD DECLARATION

//Declaration: the func name , ret type and parameters
//Definition: body of the function

#include<iostream>
using namespace std;

void sayHello(); //function declaration

int main(){
    sayHello(); //function call
    return 0;
}

//function definition
void sayHello(){
    cout << "Hello :)\n";
}