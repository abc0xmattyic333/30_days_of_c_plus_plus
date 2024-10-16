// Hello! :)
// Welcome to 30_days_of_c_plus_plus (C++)!!!

// Author: Matthew Fair (abc0xmattyic333)
// Github: https://github.com/abc0xmattyic333
// Twitter/X: https://x.com/abc0xmattyic333
// Date: 2024-10-13


// Language: C++

// Find the source code for this tutorial at https://github.com/abc0xmattyic333/30_days_of_c_plus_plus


// C++ Variables

// Variables are containers for storing data values.

// In C++, there are different types of variables (defined with different keywords), for example:

// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

// Declaring (Creating) Variables

// To create a variable, you must specify the type and assign it a value:

// Syntax

// type variable = value;

// Where type is one of C++ types (such as int), and variable is the name of the variable (such as x or myName). 
// The equal sign is used to assign values to the variable.

// Example

// Create a variable called myNum of type int and assign it the value 15:

int myNum = 15;
cout << myNum;

// You can also declare a variable without assigning the value, and assign the value later:

int myNum;
myNum = 15;
cout << myNum;

// Note: If you assign a new value to an existing variable, it will overwrite the previous value.

// Example

int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10

// Other Types

// A demonstration of other types of data types:

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'M';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

// We will learn more about the individual types in the Data Types chapter.

// Display Variables

// The cout object is used to output variables to the screen.

// Example

int myAge = 32;
cout << "I am " << myAge << " years old.";

// Add Variables Together

// To add a variable to another variable, you can use the + operator.

// Example

int x = 5;
int y = 6;
int sum = x + y;
cout << sum;

