// Program to demonstrate C++ program structure

#include <iostream>
using namespace std;

int globalVar = 5;

void display() {
    cout << "Inside user-defined function" << endl;
}

int main() {
    int a = 10;
    cout << "Hello World" << endl;
    cout << "Global Variable: " << globalVar << endl;
    display();
    return 0;
}

//Part	Description
//Comments	Documentation section
//#include <iostream>	Preprocessor directive
//using namespace std;	Namespace usage
//globalVar	Global declaration
//display()	User-defined function
//main()	Program execution starts here