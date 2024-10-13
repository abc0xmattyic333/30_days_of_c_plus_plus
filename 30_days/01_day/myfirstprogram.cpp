// Hello! :)
// Welcome to 30_days_of_c_plus_plus (C++)!!!

// Author: Matthew Fair (abc0xmattyic333)
// Github: https://github.com/abc0xmattyic333
// Twitter/X: https://x.com/abc0xmattyic333
// Date: 2024-10-13

// Language: C++

// Find the source code for this tutorial at https://github.com/abc0xmattyic333/30_days_of_c_plus_plus

// What is C++??

// (2) forward slashes start a single-line comment

// C++ is a popular cross-platform programming language which is used to create high-performance applications and software alike.

// It is used in OS, Games, E-Commerce softeware, etc.

// It was developed by Bjarne Stroustrup, an extension of C language.

// C++ gives a high-level of control over system resources and memory.

/*
Multi-line Comment
-
-
-
*/

/*
Why Learn C++?
C++ is one of the most used and popular programming languages.
C++ is used in making operating systems, embedded systems, and Graphical User Interfaces.
It is an object-oriented programming language that implements all the OOPs concepts such as Abstraction, Encapsulation, and Inheritance, which gives a clear structure to programs and allows code to be reused, lowering development costs and providing security.
It is portable and can be used to create applications that can be adapted to multiple platforms.
C++ is easy to learn so that you can choose it as your first programming language.
It makes programming easy for programmers to switch to C++ because its syntax is similar to C, Java, and C#.
*/

// Let's create our first program in C++

// C++ program to display "Hello, World!"

// Header file for input / output functions

#include <iostream>
// This is a preprocessor directive. 
// The #include directive tells the compiler to include the content of a file in the source code.

using namespace std;

// This is used to import the entity of the std namespace into the current namespace of the program.

// Main() function: where the execution of
// program begins

int main ()
/*
A function is a group of statements that are designed to perform a specific task. 
The main() function is the entry point of every C++ program, no matter where the function is located in the program.
*/

{
    // Prints HelloWorld!
    cout << "Hello, World!";
    return 0;

    /*
    std::cout is an instance of the std::ostream class, that is used to display output on the screen. 
    Everything followed by the character << in double quotes ” ” is displayed on the output device. 
    The semi-colon character at the end of the statement is used to indicate that the statement is ending there. 
    Click to know More on Input/Output.
    */

    /*
    This statement is used to return a value from a function and indicates the finishing of a function. 
    This statement is basically used in functions to return the results of the operations performed by a function.
    */
}

// Output: 
// prints "Hello, World!"

// Nicely done! We have completed our 01_day of our 30_days_of_c_plus_plus tutorial! :)

// Continue on to the next lesson to learn more about the basics of C++.