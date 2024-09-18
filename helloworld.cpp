#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World" << std::endl;

int num1;
float num2;

cout << "Enter a number:" << endl;
cin >> num1;

cout << "Cool! Enter a decimal. " << endl;
cin >> num2;

cout << "The sum of your numbers is: " << num1 + num2 << endl; 

char letter;
cout << "Enter the first letter of your name: " << endl;
cin >> letter; 

string name;
cout << "Now, enter the rest of your name NOT INCLUDING THE FIRST LETTER: " << endl; 
cin >> name; 

cout << "Ha! Your name is: " << letter << name << endl;

bool boolean = true;
cout << "And all of this is " << boolean << "(true)" << endl;  
}