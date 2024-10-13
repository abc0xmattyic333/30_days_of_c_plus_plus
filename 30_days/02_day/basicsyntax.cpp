// Hello! :)
// Welcome to 30_days_of_c_plus_plus (C++)!!!

// Author: Matthew Fair (abc0xmattyic333)
// Github: https://github.com/abc0xmattyic333
// Twitter/X: https://x.com/abc0xmattyic333
// Date: 2024-10-13


// Language: C++

// Find the source code for this tutorial at https://github.com/abc0xmattyic333/30_days_of_c_plus_plus


// C++ Basic Syntax

// C++ is a case-sensitive language. 
// This means that the language considers uppercase and lowercase characters to be different.

// What is Syntax?

// Syntax refers to the set of rules that defines the combinations of symbols that are considered to be correctly structured programs in that language.

// C++ Program Structure

// A C++ program consists of the following parts:

// Preprocessor Commands
// Functions
// Variables
// Statements & Expressions
// Comments

// Let's see a simple C++ program to print "Hello, World!".

// Example: Hello, World! Program

#include <iostream>  

/*

1. Header File
The header files contain the definition of the functions and macros we are using in our program. They are defined on the top of the C++ program.

In line #1, we used the #include  <iostream> statement to tell the compiler to include an iostream header file library which stores the definition of the cin and cout standard input/output streams that we have used for input and output. 
#include is a preprocessor directive using which we import header files.

*/

using namespace std;

/*

2. Namespace
A namespace in C++ is used to provide a scope or a region where we define identifiers. It is used to avoid name conflicts between two identifiers as only unique names can be used as identifiers.

In line #2, we have used the using namespace std statement for specifying that we will be the standard namespace where all the standard library functions are defined.

*/


// main() is the entry point of a C++ program.

int main() {

    /*

    3. Main Function
    Functions are basic building blocks of a C++ program that contains the instructions for performing some specific task. 
    Apart from the instructions present in its body, a function definition also contains information about its return type and parameters. 
    To know more about C++ functions, please refer to the article Functions in C++.
    
    */

    /*

    4. Blocks
    Blocks are the group of statements that are enclosed within { } braces. 
    They define the scope of the identifiers and are generally used to enclose the body of functions and control statements.

    */

    /*

    5. Semicolons
    As you may have noticed by now, each statement in the above code is followed by a ( ; ) semicolon symbol. 
    It is used to terminate each line of the statement of the program. When the compiler sees this semicolon, it terminates the operation of that line and moves to the next line.

    */

    /*

    6. Identifiers
    We use identifiers for the naming of variables, functions, and other user-defined data types. An identifier may consist of uppercase and lowercase alphabetical characters, underscore, and digits. 
    The first letter must be an underscore or an alphabet.
    
    */

    int num1 = 1; // Variable Declaration
    int num2 = 2; // Variable Declaration
    int num3 = 3; // Variable Declaration
    int num4 = 4; // Variable Declaration
    int num5 = 5; // Variable Declaration

    /*

    7. Keywords
    In the C++ programming language, there are some reserved words that are used for some special meaning in the C++ program. It can’t be used for identifiers.

    For example, the words int, return, and using are some keywords used in our program. These all have some predefined meaning in the C++ language.

    There are total 95 keywords in C++.
    
    */

    // cout is used to print output
    cout << "Hello, World!";
    return 0;
}

// Output:

// Hello, World!

// Thanks for completing this lesson! I hope you enjoyed it! :)
