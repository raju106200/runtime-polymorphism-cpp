# runtime-polymorphism-cpp
C++ program demonstrating Runtime Polymorphism using Virtual Functions and Inheritance. It shows how a base class pointer can call the overridden function of a derived class.

# Runtime Polymorphism Using Virtual Function in C++

## About
This program demonstrates runtime polymorphism in C++ using virtual functions and inheritance.

## Concepts Used
- Classes and Objects
- Inheritance
- Virtual Functions
- Function Overriding
- Base Class Pointer

## Output
```text
Child class
```

## Explanation
The `Father` class contains a virtual function named `show()`. The `Child` class overrides this function.

A base class pointer points to a `Child` object. Because `show()` is virtual, the child's version of the function is called at runtime.

## Author
Your Name
