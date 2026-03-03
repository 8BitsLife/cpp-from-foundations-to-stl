# 🏗️ C++ Constructors & Copy Concepts

This folder contains clear and beginner-friendly examples of different
types of constructors and copy mechanisms in C++.

These programs are designed especially for 2nd Semester CSE students to
understand object initialization, memory management, and resource
handling concepts.

------------------------------------------------------------------------

## 📂 Files Included

### 1️⃣ default_constructor.cpp

Demonstrates: - Default constructor - Automatic initialization of data
members - Object creation without arguments

------------------------------------------------------------------------

### 2️⃣ parameterized_constructor.cpp

Demonstrates: - Parameterized constructor - Initializing objects with
user-defined values - Passing arguments during object creation

------------------------------------------------------------------------

### 3️⃣ copy_constructor.cpp

Demonstrates: - Copy constructor - Object-to-object copying - Passing
objects by value - Importance of const reference parameter

------------------------------------------------------------------------

### 4️⃣ shallow_copy.cpp

Demonstrates: - Default copy behavior - Pointer copying (address
copying) - Risk of double deletion - Why shallow copy is dangerous

------------------------------------------------------------------------

### 5️⃣ deep_copy.cpp

Demonstrates: - Deep copy constructor - Allocating new memory - Copying
actual data instead of pointer - Safe memory handling

------------------------------------------------------------------------

### 6️⃣ move_constructor.cpp

Demonstrates: - Move constructor (C++11 feature) - Resource transfer -
Avoiding unnecessary copying - Using std::move() - Preventing double
delete with nullptr

------------------------------------------------------------------------

## 🧠 Concepts Covered

-   Object initialization
-   Constructor types
-   Copy semantics
-   Shallow vs Deep Copy
-   Dynamic memory management
-   Move semantics
-   Resource ownership transfer
-   Destructor role

------------------------------------------------------------------------

## 🛠 Compile & Run

Use g++ to compile:

g++ filename.cpp -o output ./output

Example:

g++ deep_copy.cpp -o deep ./deep

------------------------------------------------------------------------

## 🎯 Learning Outcome

After completing these examples, you will understand:

✔ How constructors initialize objects\
✔ Difference between default and parameterized constructors\
✔ How copy constructor works\
✔ Why shallow copy can cause memory errors\
✔ How deep copy solves memory issues\
✔ What move constructor does in modern C++

------------------------------------------------------------------------

Understanding constructors is essential for mastering Object-Oriented
Programming in C++ 🚀
