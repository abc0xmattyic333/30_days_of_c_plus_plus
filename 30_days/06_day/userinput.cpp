// Hello! :)

// Welcome to 30_days_of_c_plus_plus (C++)!!!

// Author: Matthew Fair (abc0xmattyic333)
// Github: https://github.com/abc0xmattyic333
// Twitter/X: https://x.com/abc0xmattyic333
// Date: 2024-10-13

// Language: C++

// Find the source code for this tutorial at https://github.com/abc0xmattyic333/30_days_of_c_plus_plus 

// C++ User Input

// We have already learned that cout is used to output (print) values.
// Now we will use cin to get user input.

// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

// In the following example, the user can input a number, which is stored in the variable x. 
// Then we print the value of x.

int x; 
cout << "Type a number:"; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is:" << x; // Display the input value

// Good To Know:

/*
cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)
*/

// Create a simple calculator

int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;

// Nicely done! We just created a basic calculator.

/*
Tip: Both cin and cout belongs to the <iostream> library, 
which is short for standard input / output streams. 
For a complete reference of <iostream> objects along with detailed information,
go to our C++ iostream Reference.
*/

