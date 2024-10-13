// Hello! :)
// Welcome to 30_days_of_c_plus_plus (C++)!!!

// Author: Matthew Fair (abc0xmattyic333)
// Github: https://github.com/abc0xmattyic333
// Twitter/X: https://x.com/abc0xmattyic333
// Date: 2024-10-13


// Language: C++

// Find the source code for this tutorial at https://github.com/abc0xmattyic333/30_days_of_c_plus_plus


// C++ Constants

// Constants

// When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).

const int myNum = 15; // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'

// You should always declare the variable as constant when you have values that are unlikely to change.

const int minutesPerHour = 60;
const float PI = 3.14;

// Notes on Constants:

// When you declare a constant variable, you can (and should) also initialize it (or assign a value to it).


// Example

const int minutesPerHour = 60;

// This however, will not work:

const int minutesPerHour;
minutesPerHour = 60; // error: uninitialized const 'minutesPerHour'