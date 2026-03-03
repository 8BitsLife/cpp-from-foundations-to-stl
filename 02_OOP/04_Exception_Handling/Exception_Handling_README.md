# ⚠️ C++ Exception Handling

This folder contains practical and easy-to-understand examples of C++
exception handling.

Exception handling allows programs to detect and respond to runtime
errors safely without crashing.

------------------------------------------------------------------------

## 📂 Files Included

### 1️⃣ basic_try_catch.cpp

Demonstrates: - Basic try-catch structure - Throwing built-in types -
Handling division by zero - Program continuation after exception

------------------------------------------------------------------------

### 2️⃣ multiple_catch.cpp

Demonstrates: - Multiple catch blocks - Handling different exception
types (int, double, string) - Default catch block using catch(...) -
Safe program termination

------------------------------------------------------------------------

### 3️⃣ custom_exception.cpp

Demonstrates: - Creating a custom exception class - Inheriting from
std::exception - Overriding the what() function - Throwing and catching
custom exception objects - Real-world Bank Account example

------------------------------------------------------------------------

## 🧠 Concepts Covered

-   try block
-   throw keyword
-   catch block
-   Multiple catch handling
-   Custom exceptions
-   Exception class inheritance
-   Catching by reference (best practice)
-   Runtime error management

------------------------------------------------------------------------

## 🛠 Compile & Run

Use g++ to compile:

g++ filename.cpp -o output ./output

Example:

g++ custom_exception.cpp -o custom_exception ./custom_exception

------------------------------------------------------------------------

## 🎯 Learning Outcome

After completing these examples, you will understand:

✔ How exception handling works in C++\
✔ How to throw and catch errors safely\
✔ How to create your own exception classes\
✔ How to prevent program crashes\
✔ How professional C++ programs manage runtime errors

------------------------------------------------------------------------

Exception handling makes your programs robust and professional 🚀
